import sys


def merge_sort(a, p, r):
    if p < r:
        q = (p+r) // 2
        merge_sort(a, p, q)
        merge_sort(a, q+1, r)
        merge(a, p, q, r)


def merge(a, p, q, r):
    global cnt, res
    tmp = []
    i, j = p, q+1
    while i <= q and j <= r:
        if a[i] <= a[j]:
            tmp.append(a[i])
            i += 1
        else:
            tmp.append(a[j])
            j += 1
    while i <= q:
        tmp.append(a[i])
        i += 1
    while j <= r:
        tmp.append(a[j])
        j += 1
    i, t = p, 0
    while i <= r:
        if cnt == K:
            res = tmp[t]
        cnt += 1
        a[i] = tmp[t]
        i += 1
        t += 1


N, K = map(int, sys.stdin.readline().split())
A = list(map(int, sys.stdin.readline().split()))

cnt = 1
res = 0

merge_sort(A, 0, (len(A)-1))
if cnt <= K:
    print(-1)
else:
    print(res)
