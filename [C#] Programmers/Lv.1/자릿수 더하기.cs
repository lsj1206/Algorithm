// using System;

// Solution sol = new Solution();

// Console.WriteLine(sol.solution(123));

public class AddingDigits {
    public int solution(int n) {
		if (n < 10)
			return n;

		int value = 0;
		while(n > 9) {
			value += n % 10;
			n /= 10;
		}
	return value + n;
	}
}
