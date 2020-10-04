n=int(input())
for j in range(0,n):
    k=input()
    for i in range(0,len(k),2):
        print(k[i],end="")
    print(" ",end="")
    for i in range(1,len(k),2):
        print(k[i],end="")
    print("")
