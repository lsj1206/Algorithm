// 양의 정수 x 는 1 <= x <= 10000
// 하샤드 수란?
//  : x는 x의 자리수의 합으로 x가 나눴을때 나머지가 0이여야함.
//  : Ex) 18 = 1+8=9 > 18 % 9 = 0

// Solution sol = new Solution();

// Console.WriteLine(sol.solution(10));

public class Hashaed {
    public bool solution(int x) {
        int num = x;
        int digit = 0;

        while (num > 0) {
            digit += num % 10;
            num /= 10;
        }
        if ((x % digit) == 0)
            return true;

        return false;
    }
}
