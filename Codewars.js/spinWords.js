/* 23.08.15
주어진 문자열에서 길이(5) 이상의 단어들만 뒤집어서 문자열을 리턴
*/

function spinWords(string){
	var arr = string.split(' ');
	for (var i = 0; i < arr.length; i++)
		if (arr[i].length >= 5)
			arr[i] = arr[i].split("").reverse().join("");
	return (arr.join(' '));
}
