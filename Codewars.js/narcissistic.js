/* 23.08.16
정수의 각 자리 n에 정수의 길이만큼 제곱을 한 값들의 합이 정수와 같으면 true, 아니면 false를 리턴
예시
value = 153
> 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
> 153 == 153 > true

value = 1652
1^4 + 6^4 + 5^4 + 2^4 = 1 + 1296 + 625 + 16 = 1938
> 1652 == 1938 > false
*/

function narcissistic(value) {
	var arr = value.toString().split('');
	var len = arr.length;
	for (var i = 0; i < len; i++)
		arr[i] = Math.pow(arr[i], len);
	return (arr.reduce((a, b) => a + b, 0) === value);
}
