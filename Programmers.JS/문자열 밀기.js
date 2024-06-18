//https://school.programmers.co.kr/learn/courses/30/lessons/120921

function solution(A, B) {
	var arr = Array.from(A);
	var newA = A;
	if (A.length !== B.length)
		return -1;
	for (let i = 0; i < arr.length; i++) {
		if (newA === B)
			return i;
		arr.unshift(arr.pop());
		newA = arr.join('');
	}
	return -1;
}

console.log(solution("apple", "elppa"));
