#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    
    int apple_total = 0;
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
       int pos = apple[apple_i]+a;
       if(pos>=s && pos<= t)
           apple_total++;
    }
    int orange_total = 0;
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
       int pos = orange[orange_i]+b;
       if(pos>=s && pos<= t)
           orange_total++;
    }
    printf("%d\n%d", apple_total, orange_total);
    
    return 0;
}

