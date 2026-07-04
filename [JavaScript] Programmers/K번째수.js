//https://school.programmers.co.kr/learn/courses/30/lessons/42748

/* comment 1
Array.sort()는 요소를 문자열로 변환하여 유니코드 코드 포인트 순서에 따라 정렬함.
예를 들어, [10, 2, 1, 20]은 [1, 10, 2, 20]로 정렬되기 때문에, 비교 연산을 제공해야 함.
*/

function kthNumber(array, commands) {
	var anwser = [];

	for (let i = 0; i < commands.length; i++) {
		let tempArray = array.slice(commands[i][0] - 1, commands[i][1]);
		tempArray.sort((a, b) => a - b); //comment 1
		let index = commands[i][2] - 1;
		anwser.push(tempArray[index]);
	}
	return anwser;
}
console.log(kthNumber([1, 5, 2, 6, 3, 7, 4],[[2, 5, 3], [4, 4, 1], [1, 7, 3]]));
