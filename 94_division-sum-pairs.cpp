#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,j,a[100],counter = 0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                if((a[i]+a[j])%k == 0)
                    counter++;
            }
        }
    }
    printf("%d",counter);
    return 0;
}
