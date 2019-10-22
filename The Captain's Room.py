n=int(input()) 
e=list(map(int, input().split()))
e.sort()

for i in range(1,len(e)):
    if(i!=len(e)-1):
        if (e[i]!=e[i-1] and e[i]!=e[i+1]):
            print(e[i])
            break
    else:
        print(e[i])
