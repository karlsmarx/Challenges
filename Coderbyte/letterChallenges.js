/**
 * Have the function LetterChanges(str) take the str parameter being passed and modify
 * it using the following algorithm. Replace every letter in the string with the letter
 * following it in the alphabet (ie. c becomes d, z becomes a). Then capitalize every
 * vowel in this new string (a, e, i, o, u) and finally return this modified string. 
 */
function LetterChanges(str) {

	// code goes here
	const split = str.split("");

	const newChars = [];
	split.forEach((character) => {
		if (character.charCodeAt(0) > 96) {
			const nextCharCode = character.charCodeAt(0) + 1;
			newChars.push(String.fromCharCode(nextCharCode));
		} else {
			newChars.push(character);
		}
	});

	// change vogals to upperCase
	newChars.forEach((character, idx) => {
		if (character === "a" || character === "e" || character === "i" || character === "o" || character === "u")
			newChars[idx] = character.toUpperCase();
	});

	return newChars.join("");
}

// keep this function call here 
LetterChanges(readline());
