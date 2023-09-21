/* 23.08.21
오로지 짝수 이거나 홀수인 배열에서 하나만 다른 숫자를 찾아 리턴
*/

function findOutlier(integers){
	return (integers.filter(num => num % 2 === 0).length > 1
	 ? integers.find(num => num % 2 !== 0)
	  : integers.find(num => num % 2 === 0));
}
