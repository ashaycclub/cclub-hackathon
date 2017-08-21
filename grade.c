
#include <stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    for(int a0 = 0; a0 < n; a0++){
        int grade; 
        scanf("%d",&grade);
        if(grade>37)
         {
            if(grade%5>2)
             {
                grade=grade+5-grade%5;
             }
          }
      printf("%d\n",grade);
  }
 return 0;
}
