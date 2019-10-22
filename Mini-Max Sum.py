def miniMaxSum(arr):
    sum1=0
    small=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]
    lar=0
    for i in range(0,5):
        sum1=0
        for j in range(0,4):
            if i+j<=4:
                sum1+=arr[i+j]
            else:
                sum1+=arr[(i+j)-5]
        if sum1>=lar:
            lar=sum1
        if sum1<=small:
            small=sum1
    print(small,lar)
if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
