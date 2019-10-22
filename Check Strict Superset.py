a=set(map(int,input().split()))
N=int(input())
flag=0
for _ in range(0,N):
    b=set(map(int,input().split()))
    k=a.issuperset(b)
    if k==True:
        flag=0
    else:
        flag=1
        break
if(flag==0):
    print(True)
else:
    print(False)
