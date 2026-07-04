
// Solution sol = new Solution();

// Console.WriteLine(sol.solution("a234"));
// Console.WriteLine(sol.solution("1234"));

public class StrToInt {
    public bool solution(string s) {
		if (s.Length == 4 || s.Length == 6) {
			return int.TryParse(s, out int result);
		}
		return false;
	}
}
