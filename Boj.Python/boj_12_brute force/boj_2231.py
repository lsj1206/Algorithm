import sys

N = int(sys.stdin.readline())

for i in range(1, N):
    dec = i
    tmp = 0
    while dec > 0:
        tmp += dec % 10
        dec //= 10
    tmp += i
    if tmp == N:
        print(i)
        exit()
print(0)


#
#
# def rev_decomposition(res, n):
#     if res == n:
#         print(0)
#         return
#     i = res
#     tmp = 0
#     while i > 0:
#         tmp += i % 10
#         i //= 10
#     tmp += res
#     if tmp == n:
#         print(res)
#     else:
#         rev_decomposition(res+1, n)
#
#
# sys.setrecursionlimit(1000001)
# N = int(sys.stdin.readline())
#
# dec = 1
# rev_decomposition(dec, N)
