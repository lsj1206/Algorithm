/* 23.08.17
in arr, find the highest and lowest number */

function highAndLow(numbers){
	var	arr = numbers.split(' ');
	return Math.max(...arr) + ' ' + Math.min(...arr);
}
