#include<stdio.h>

int main()
{
    long long int n,k,e,c=0;
    scanf("%lld %lld",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%lld", &e);
        if(e%k==0)
            c++;
    }
    printf("%lld",c);
    return 0;

}