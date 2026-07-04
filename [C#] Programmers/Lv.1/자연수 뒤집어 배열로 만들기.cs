
// Solution sol = new Solution();

// Console.WriteLine("[" + string.Join(", ", sol.solution(12345)) + "]");


public class ReverseIntArray {
    public int[] solution(long n) {
        if (n < 10)
			return [(int)n];

		int[] answer = [];
		while(n > 0) {
			answer = [.. answer, (int)(n % 10)];
			n /= 10;
		}
	return answer;
	}
}
