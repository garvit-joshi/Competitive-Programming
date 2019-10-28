def swap_case(s):
    count=0
    l=len(s)
    for i in s:
        if i.islower():
            s=s[:count]+i.upper()+s[count:l-1]
        else:
            s=s[:count]+i.lower()+s[count:l-1]
        count+=1
    return s
if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
