// 음양 더하기
// https://school.programmers.co.kr/learn/courses/30/lessons/76501

function signCheckSum(absolutes, signs) {
	var anwser = absolutes.map((num, index) => signs[index] ? num : num * -1);
	return (anwser.reduce((acc, cur) => acc + cur));
}

console.log(signCheckSum([4,7,12], [true,false,true]));

// 없는 숫자 더하기
//https://school.programmers.co.kr/learn/courses/30/lessons/86051

function missingNumSum(numbers) {
	var numArray = Array.from({length:10}, (value, index) => index);
	var anwser = numArray.filter(value => !numbers.includes(value));

	return (anwser.reduce((acc, cur) => acc + cur));
}

console.log(missingNumSum([1,2,3,4,6,7,8,0]));
