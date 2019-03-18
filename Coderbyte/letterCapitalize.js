/**
 * Have the function LetterCapitalize(str) take the str parameter being
 * passed and capitalize the first letter of each word. Words will be
 * separated by only one space. 
 */
function LetterCapitalize(str) {

	// code goes here
	const split = str.split(" ");

	const newStrings = [];
	split.forEach((originalStr) => {
		const capital = originalStr.charAt(0).toUpperCase();
		newStrings.push(`${capital}${originalStr.substr(1)}`);
	});

	return newStrings.join(" ");
}

// keep this function call here 
LetterCapitalize(readline());
