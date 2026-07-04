
//2016년
//https://school.programmers.co.kr/learn/courses/30/lessons/12901

function getDate(a, b) {
	var Day = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"];
	var date = new Date(2016, a - 1, b);

	return Day[date.getDay()];
}
//console.log(getDate(5, 24));

// 음양 더하기
// https://school.programmers.co.kr/learn/courses/30/lessons/76501

function signCheckSum(absolutes, signs) {
	var anwser = absolutes.map((num, index) => signs[index] ? num : num * -1);
	return (anwser.reduce((acc, cur) => acc + cur));
}
//console.log(signCheckSum([4,7,12], [true,false,true]));

// 없는 숫자 더하기
//https://school.programmers.co.kr/learn/courses/30/lessons/86051

function missingNumSum(numbers) {
	var numArray = Array.from({length:10}, (value, index) => index);
	var anwser = numArray.filter(value => !numbers.includes(value));

	return (anwser.reduce((acc, cur) => acc + cur));
}
//console.log(missingNumSum([1,2,3,4,6,7,8,0]));
