/**
 * Have the function ScaleBalancing(strArr) read strArr which will contain two elements,
 * the first being the two positive integer weights on a balance scale (left and right sides)
 * and the second element being a list of available weights as positive integers. Your
 * goal is to determine if you can balance the scale by using the least amount of weights from
 * the list, but using at most only 2 weights. For example: if strArr is
 * ["[5, 9]", "[1, 2, 6, 7]"] then this means there is a balance scale with a weight of 5 on
 * the left side and 9 on the right side. It is in fact possible to balance this scale by adding
 * a 6 to the left side from the list of weights and adding a 2 to the right side. Both scales will
 * now equal 11 and they are perfectly balanced. Your program should return a comma separated
 * string of the weights that were used from the list in ascending order, so for this example
 * your program should return the string 2,6
 * 
 * There will only ever be one unique solution and the list of available weights will not be
 * empty. It is also possible to add two weights to only one side of the scale to balance it.
 * If it is not possible to balance the scale then your program should return the string not possible. 
 */
function ScaleBalancing(strArr) {

	// code goes here
	const actualWeight = strArr[0].match(/\d+/g).map(Number);
	const availableWeight = strArr[1].match(/\d+/g).map(Number);

	let result = [];

	// Try using only a unique weight
	for (let i = 0; i < availableWeight.length; i++) {
		if (actualWeight[0] + availableWeight[i] === actualWeight[1] || actualWeight[1] + availableWeight[i] === actualWeight[0]) {
			result.push(availableWeight[i]);
			break;
		}
	}

	// Try combine two wights (this is brute-force, maybe could be do it better)
	if (result.length === 0) {
		for (let i = 0; i < availableWeight.length; i++) {
			for (let j = 0; j < availableWeight.length; j++) {
				if (j !== i) {
					if (actualWeight[0] + availableWeight[i] === actualWeight[1] + availableWeight[j]) {
						result.push(availableWeight[i]);
						result.push(availableWeight[j]);
					}

					if (actualWeight[0] + availableWeight[i] + availableWeight[j] === actualWeight[1]) {
						result.push(availableWeight[i]);
						result.push(availableWeight[j]);
					}

					if (actualWeight[1] + availableWeight[i] + availableWeight[j] === actualWeight[0]) {
						result.push(availableWeight[i]);
						result.push(availableWeight[j]);
					}

					if (result.length > 0) break;
				}
			}

			if (result.length > 0) break;
		}
	}

	return result.length > 0 ? result.sort().join(",") : "not possible";
}

// keep this function call here 
ScaleBalancing(readline());
