/* 23.08.22
배열 안에서 홀수만 오름차순 정렬
*/

function sortArray(array) {
	var odd = array.filter(n => n % 2 !== 0).sort((a, b) => a - b);
	for(var i = 0; i < array.length; i++)
		if (array[i] % 2 !== 0)
			array[i] = odd.shift();
	return array;
}
