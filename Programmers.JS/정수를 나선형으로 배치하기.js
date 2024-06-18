//https://school.programmers.co.kr/learn/courses/30/lessons/181832

function putNum(n, array) {
	let max = n * n;
	let num = 1;
	let row = 0;	//행
	let col = 0;	//열

	while (num <= max) {
		while (col < n && array[row][col] === 0) {
			array[row][col] = num++;
			col++;
		}
		col--;
		row++;

		while (row < n && array[row][col] === 0) {
			array[row][col] = num++;
			row++;
		}
		col--;
		row--;

		while (col >= 0 && array[row][col] === 0) {
			array[row][col] = num++;
			col--;
		}
		col++;
		row--;

		while (row >= 0 && array[row][col] === 0) {
			array[row][col] = num++;
			row--;
		}
		row++;
		col++;
	}
	return array;
}

function solution(n) {
	var answer = [];
	for (let i = 0; i < n; i++) {
		answer.push(new Array(n).fill(0));
	}
	return putNum(n, answer);
}
