#include<stdio.h>

int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);
    int i,j,d,counter,c1;
    long long num;
    long long tempNum;
    for(i=0;i<n;i++)
    {
        c1 = 0;
        scanf("%lld",&num);
        tempNum = num;
        counter = countDigit(num);
        for(j=1;j<=counter;j++)
        {
            d = num%10;
            num = num/10;
            if(d != 0)
            {
                if(tempNum % d == 0)
                {
                    c1++;
                }
            }
        }
        printf("%d\n",c1);
    }
    return 0;
}
