T=int(input())
for i in range(0,T):
    try:
        k=list(map(int,input().split()))
        print (int(k[0]/k[1]))
    except ZeroDivisionError as e:
        print ("Error Code: integer division or modulo by zero")
    except ValueError as e:
        print ("Error Code:",e)
