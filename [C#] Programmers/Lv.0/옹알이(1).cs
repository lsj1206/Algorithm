// 프로그래머스 Lv.0 옹알이(1)

// 포인트:
// 1. 문자열당 한번씩만 나오기 때문에 같은 문자를 두번 확인할 필요가 없음.

using System;
using System.Text.RegularExpressions;

public class Babbling1 {
	public int solution(string[] babbling) {
		int answer = 0;

        string pattern = "^(aya|ye|woo|ma)+$";

        foreach (string s in babbling) {
            if (Regex.IsMatch(s, pattern)) {
                answer++;
            }
        }
		return answer;
	}
}
