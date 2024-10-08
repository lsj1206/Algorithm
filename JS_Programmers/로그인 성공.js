//https://school.programmers.co.kr/learn/courses/30/lessons/120883

function solution(id_pw, db) {
	var answer = '';

	for(let i = 0; i < db.length; i++) {
		if (id_pw[0] === db[i][0]) {
			if (id_pw[1] === db[i][1])
				return 'login';
			else
				return 'wrong pw';
		}
	}
	return 'fail';
}

let id_pw = ["meosseugi", "1234"];
let db = [["rardss", "123"], ["yyoom", "1234"], ["meosseugi", "1234"]];

console.log(solution(id_pw, db));
