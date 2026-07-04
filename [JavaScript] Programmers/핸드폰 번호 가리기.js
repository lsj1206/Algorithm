//https://school.programmers.co.kr/learn/courses/30/lessons/12948

function solution(phone_number) {
	var arr = Array.from(phone_number);
	if (arr.length < 5)
		return phone_number;
	for(let i = 0; i < (arr.length - 4); i++) {
		arr[i] = "*";
	}
	return arr.join('');
}

console.log(solution("01033334444"));
console.log(solution("027778888"));
