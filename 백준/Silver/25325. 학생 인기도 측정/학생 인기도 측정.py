n = int(input())
A = input().split()
p = [0 for x in A]

for i in range(n):
    info = input().split()
    for j in info:
        p[A.index(j)] += 1

for i in range(n):
    A[i] = [A[i], p[i]]

A.sort(key=lambda x:x[1], reverse=True)

for i in A:
    print(" ".join(list(map(str, i))))