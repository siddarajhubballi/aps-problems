#include<stdio.h>

int main()
{
    unsigned long long int a[5],i,min,max,sum1=0,sum2=0;
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    min = 0;
    max = 4;
    for(i=0;i<5;i++)
    {
        if(a[i] < a[min])
        {
            min = i;
        }
        else if(a[i] > a[max])
        {
            max = i;
        }
    }
    
    for(i=0;i<5;i++)
    {
        if(i != max)
            sum1 = sum1 + a[i];
        if(i != min)
            sum2 = sum2 + a[i];
    }
    printf("%lld %lld",sum1,sum2);
    
    return 0;
}
