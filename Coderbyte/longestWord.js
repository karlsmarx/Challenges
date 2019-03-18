/**
 * Have the function LongestWord(sen) take the sen parameter being passed and
 * return the largest word in the string. If there are two or more words that
 * are the same length, return the first word from the string with that length.
 * Ignore punctuation and assume sen will not be empty.
 */
function LongestWord(sen) {

	// code goes here 
	sen = sen.replace(/[^\w\s]/gi, '');
	const words = sen.split(" ");

	const longest = {
		size: 0,
		word: ""
	};

	words.forEach((word) => {
		if (word.length > longest.size) {
			longest.size = word.length;
			longest.word = word;
		}
	});

	return longest.word;
}

// keep this function call here 
LongestWord(readline());
