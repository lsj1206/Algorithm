// 프로그래머스 Lv.0 안전지대

// 포인트:
// 1. 정사각형 구조이므로, GetLength(0)로 하나의 길이만 가져와도 됨
// 2. 읽기만하면 지뢰가 붙어있어 안전지대 중복을 확인 불가능함. 값을 2로 변경.
// 3. 맵의 양끝을 넘어가면 Error 발생하므로, 범위 보호

// int[,] map1 = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 0, 0}, {0, 0, 0, 0, 0}};
// int[,] map2 = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 1, 1, 0}, {0, 0, 0, 0, 0}};
// int[,] map3 = {{1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}};
public class SafeZone {
    public int solution(int[,] board) {
		int n = board.GetLength(0);
		int danger = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i, j] == 1) {
					board[i, j] = 2;
					danger++;
					for (int k = j-1; k <= j+1; k++) {
						for (int l = i-1; l <= i+1; l++) {
							if (k < 0 || k >= n || l < 0 || l >= n) {
								continue;
							}
							if (board[l, k] == 0) {
								board[l, k] = 2;
								danger++;
							}
						}
					}
				}
			}
		}
		int answer = (n * n) - danger;
		if (answer < 0)
			answer = 0;
        return answer;
    }
}
