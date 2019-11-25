#include<stdio.h>
int main()
{
int i;
 for(i=1;i<20;i++)
{
 if(i%4==0)
 {
 printf("pass\n");
 continue;
 }
 
  printf("%d\n",i);
 } 

printf("20");
return 0;
}

