/**
 * Have the function ChessboardTraveling(str) read str which will be a string
 * consisting of the location of a space on a standard 8x8 chess board with no
 * pieces on the board along with another space on the chess board. The structure
 * of str will be the following: "(x y)(a b)" where (x y) represents the position
 * you are currently on with x and y ranging from 1 to 8 and (a b) represents
 * some other space on the chess board with a and b also ranging from 1 to 8 where
 * a > x and b > y. Your program should determine how many ways there are of
 * traveling from (x y) on the board to (a b) moving only up and to the right.
 * 
 * For example: if str is (1 1)(2 2) then your program should output 2 because there
 * are only two possible ways to travel from space (1 1) on a chessboard to space (2 2)
 * while making only moves up and to the right. 
 */
function factorial(num) {
	if (num <= 1) return 1;

	return (num * factorial(num - 1));
}

function multiplyRange(init, final) {
	let result = 1;

	let i = final
	while (i > init) {
		result *= i;
		i--;
	}

	return result;
}

function ChessboardTraveling(str) {

	// code goes here
	const coordenates = str.match(/\(([0-9] [0-9])\)/g);

	const startPoint = coordenates[0].match(/[0-9]/g).map(Number);
	const endPoint = coordenates[1].match(/[0-9]/g).map(Number);

	let deltaX = endPoint[0] - startPoint[0];
	let deltaY = endPoint[1] - startPoint[1];

	let rangeMult = 0;
	if (deltaX > deltaY) {
		rangeMult = multiplyRange(deltaX, (deltaX + deltaY));
		deltaX = 1;
	} else {
		rangeMult = multiplyRange(deltaY, (deltaY + deltaX));
		deltaY = 1;
	}

	const result = rangeMult / (factorial(deltaY) * factorial(deltaX));

	return result;

}

// keep this function call here 
ChessboardTraveling(readline());
