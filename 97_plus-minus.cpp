#include<stdio.h>

int main()
{
    float n;
    int arr[100];
    scanf("%f",&n);
    float p=0,n1=0,z=0;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > 0)
            p++;
        else if(arr[i] < 0)
            n1++;
        else if(arr[i] == 0)
            z++;
    }
    //printf("%d\n",z);
    printf("%0.6f\n%0.6f\n%0.6f",p/n,n1/n,z/n);
    
    return 0;
}
