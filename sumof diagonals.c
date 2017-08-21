#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
 int n,i,j,a[100][100],sum1=0,sum2=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
    
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           if(i==j)
           sum1=sum1+a[i][j];     
       }
   }
       
    for(i=0;i<n;i++)
    {
       for(j=n-1;j>=0;j--)
       {
           if(j+i==n-1)
           sum2=sum2+a[i][j];
       }
   }
       
    if((sum1-sum2)<0)
    printf("%d",(sum2-sum1));
    else
    printf("%d",sum1-sum2);
    return 0;
}
