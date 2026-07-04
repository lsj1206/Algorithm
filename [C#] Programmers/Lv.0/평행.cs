// 포인트:
// 1. 단순히 점 간의 계산을 통한 거리 차이로 계산하면 실패.
// 2. 기울기 공식을 적용해야함.

// using System;

// int[,] dots1 = {{1, 4}, {9, 2}, {3, 8}, {11, 6}};
// int[,] dots2 = {{3, 5}, {4, 1}, {2, 4}, {5, 10}};
// int[,] dots3 = {{0, 0}, {1, 1}, {5, 2}, {4, 1}};

// Solution sol = new Solution();

// Console.WriteLine(sol.solution(dots1));
// Console.WriteLine(sol.solution(dots2));
// Console.WriteLine(sol.solution(dots3));

public class Parallel {
	public int solution(int[,] dots) {
		int x1 = dots[0,0]; int y1 = dots[0,1];
		int x2 = dots[1,0]; int y2 = dots[1,1];
		int x3 = dots[2,0]; int y3 = dots[2,1];
		int x4 = dots[3,0]; int y4 = dots[3,1];

		// 1-2 와 3-4
		if ((y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1)) {
			return 1;
		}

		// 1-3 과 2-4
		if ((y3 - y1) * (x4 - x2) == (y4 - y2) * (x3 - x1)) {
			return 1;
		}

		// 1-4 와 2-3
		if ((y4 - y1) * (x3 - x2) == (y3 - y2) * (x4 - x1)) {
			return 1;
		}
		return 0;
	}
}
