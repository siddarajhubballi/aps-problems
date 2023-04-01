#include<stdio.h>

int main()
{
    long long int n,a[100000];
    scanf("%lld",&n);
    int i,count = 0;
    long long int max = 0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(max < a[i])
            max = a[i];
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i] == max)
            count++;
    }
    printf("%d",count);
    return 0;
}
