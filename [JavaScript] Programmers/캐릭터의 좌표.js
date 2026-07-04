//https://school.programmers.co.kr/learn/courses/30/lessons/120861

function solution(keyinput, board) {
	var answer = [0, 0];
	var maxX = (board[0] - 1) / 2;
	var maxY = (board[1] - 1) / 2;
	var inputLen = keyinput.length;

	for (let i = 0; i < inputLen; i++) {
		if (keyinput[i] === "down" && answer[1] > (maxY * -1))
				answer[1]--;
		else if (keyinput[i] === "up" && answer[1] < maxY)
				answer[1]++;
		else if (keyinput[i] === "left" && answer[0] > (maxX * -1))
				answer[0]--;
		else if (keyinput[i] === "right" && answer[0] < maxX)
				answer[0]++;
	}
	return answer;
}

keyinput = ["down", "down", "down", "down", "down"];
board = [7, 9];

console.log(solution(keyinput, board));
