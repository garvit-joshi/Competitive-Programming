if __name__ == '__main__':
    s = input()
    dic={}
    c={}
    count=0
    se=set(s)
    for i in se:
        count=0
        for j in s:
            if i==j:
                count+=1
        dic[i]=count
    for i in sorted (dic,reverse=True):
        c[i]=dic[i]
    l=0
    for i in range(0,3):
        maxi=0
        for j in c: 
            if (c[j]>=maxi):
                maxi=c[j]
                l=j
        print(l,maxi)
        del c[l]
