#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0,a1,a2,c,alice=0,bob=0,i; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0,b1,b2; 
     
    scanf("%d %d %d",&b0,&b1,&b2);
    int a[100]={a0,a1,a2};
    int b[100]={b0,b1,b2};
    for(i=0;i<3;i++)
     {
       if( a[i]>b[i])
        alice++;
        if(a[i]<b[i])
            bob++;
    }
 
    
     printf("%d %d",alice,bob); 
    return 0;
}

