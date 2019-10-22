T=int(input())
flag=0
for i in range(0,T):
    sl=int(input())
    s = set(map(int, input().split()))
    gl=int(input())
    g = set(map(int, input().split()))
    print(s.issubset(g))
