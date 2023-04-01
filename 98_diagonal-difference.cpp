#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int result;
    int arr[100][100];
    scanf("%d",&n);
    int i,j;
    int sum1 = 0,sum2 = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i == j)
            {
                sum1 = sum1 + arr[i][i];
            }
        }
    }
    int temp1;
    int temp2 = n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            temp1 = i+j;
            if(temp1 == temp2)
            {
                sum2 = sum2 + arr[i][j];
                //printf("%d ",arr[i][j]);
            }
        }
    }
    
    if(sum2 > sum1)
        result = (sum2 - sum1);
    else {
    result = (sum1 - sum2);
    }
    printf("%d",result);
    return 0;
}
