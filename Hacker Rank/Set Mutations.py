n = int(input())
s = set(map(int, input().split()))
k=int(input())
for i in range(k):
    l=input().split()
    if(l[0]=='intersection_update'):
        d = set(map(int, input().split()))
        s.intersection_update(d)
    elif(l[0]=='update'):
        d = set(map(int, input().split()))
        s.update(d)
    elif(l[0]=='symmetric_difference_update'):
        d = set(map(int, input().split()))
        s.symmetric_difference_update(d)
    elif(l[0]=='difference_update'):
        d = set(map(int, input().split()))
        s.difference_update(d)
print(sum(s))
