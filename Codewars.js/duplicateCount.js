/* 23.08.16
find the number of duplicate characters in a string */

function duplicateCount(text){
	text = text.toLowerCase();
	var result = [...new Set(text.split('').filter((item, index) => text.indexOf(item) !== index))];
	return result.length;
}

