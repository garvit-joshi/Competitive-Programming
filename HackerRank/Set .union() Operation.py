n = int(input())
e = set(map(int, input().split()))
m = int(input())
f = set(map(int, input().split()))
k=e.union(f)
print(len(k))