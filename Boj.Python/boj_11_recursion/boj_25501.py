import sys


def pal(s, s_len, r, cnt):
    if s_len >= r:
        return 1, cnt
    elif s[s_len] != s[r]:
        return 0, cnt
    else:
        return pal(s, s_len+1, r-1, cnt+1)


T = int(sys.stdin.readline())

for i in range(T):
    S = sys.stdin.readline().rstrip()
    print(*pal(S, 0, len(S) - 1, 1))
