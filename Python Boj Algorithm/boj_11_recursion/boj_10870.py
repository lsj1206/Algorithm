import sys


def fib(n):
    if n == 0 or n == 1:
        return n
    return fib(n-2) + fib(n-1)


N = int(sys.stdin.readline())

print(fib(N))
