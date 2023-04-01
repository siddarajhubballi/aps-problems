#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int tmp1,tmp2,tmp3,m1,m2,m3;
  m1 = 0;
  m2 = 0;
  m3 = 0;
  for(int i=1;i<=n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          tmp1 = i&j;
          if(tmp1 < k)
          {
              if(tmp1 > m1)
                m1 = tmp1;
          }
          tmp2 = i|j;
          if(tmp2 < k)
          {
              if(tmp2 > m2)
                m2 = tmp2;
          }
          tmp3 = i^j;
          if(tmp3 < k)
          {
              if(tmp3 > m3)
                m3 = tmp3;
          }
      }
  }
  printf("%d\n%d\n%d\n",m1,m2,m3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
