//https://school.programmers.co.kr/learn/courses/30/lessons/120876

function solution(lines) {
	var array = new Array(201).fill(0);

	for (let i = 0; i < 3; i++){
		for (let j = lines[i][0] ; j < lines[i][1] ; j++) {
			array[100 + j] += 1;
		}
	}
	var value = 0;
	for (let i = 0; i < array.length; i++) {
		if (array[i] > 1)
			value++;
	}
	return value;
}

console.log(solution([[0, 1], [2, 5], [3, 9]]));
console.log(solution([[-1, 1], [1, 3], [3, 9]]));
console.log(solution([[0, 5], [3, 9], [1, 10]]));
