n = int(input())
s = set(map(int, input().split()))
k=int(input())
for i in range(k):
    l=input().split()
    if(l[0]=='pop'):
        s.pop()
    elif(l[0]=='remove'):
        s.remove(int(l[1]))
    elif(l[0]=='discard'):
        s.discard(int(l[1]))
print(sum(s))
