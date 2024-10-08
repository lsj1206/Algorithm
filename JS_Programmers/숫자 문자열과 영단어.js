//https://school.programmers.co.kr/learn/courses/30/lessons/81301

const Numlist = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"];

function getNum(match) {
	return Numlist.indexOf(match);
}

function solution(s) {
	var regex = new RegExp(Numlist.join('|'), 'g');

	return parseInt(s.replace(regex, getNum));
}


console.log(solution("one4seveneight"));
console.log(solution("23four5six7"));
console.log(solution("2three45sixseven"));
console.log(solution("123"));
