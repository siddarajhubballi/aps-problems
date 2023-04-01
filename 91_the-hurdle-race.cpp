#include<stdio.h>

int main()
{
    int n,i,h,a[100],h1 = 0,h2=0;
    scanf("%d%d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>h && a[i] > h1)
        {
            h1 = a[i];
            h2 = a[i]-h;
        }
    }
    printf("%d",h2);
    return 0;
}
