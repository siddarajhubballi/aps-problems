#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    int b[5] = {0,0,0,0,0};
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i] == 1)
            b[0]++;
        else if(a[i] == 2)
            b[1]++;
        else if(a[i] == 3)
            b[2]++;
        else if(a[i] == 4)
            b[3]++;
        else
            b[4]++;
    }
    int max = 0;
    for(i=1;i<5;i++)
    {
        if(b[i] > b[max])
            max = i;
    }
    printf("%d",max+1);
    return 0;
}
