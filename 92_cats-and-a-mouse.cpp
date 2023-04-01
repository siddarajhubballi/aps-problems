#include<stdio.h>

int main()
{
    int a,b,c,d1,d2,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
    if(a > c)
        d1 = a-c;
    else 
        d1 = c-a;
    
    if(b > c)
        d2 = b-c;
    else 
        d2 = c-b;
     
    if(d1 > d2)
        printf("Cat B\n");
    else if(d2 > d1)
        printf("Cat A\n");
    else
        printf("Mouse C\n");
    }
    return 0;
}
