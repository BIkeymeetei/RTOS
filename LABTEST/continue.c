#include<stdio.h>
void main()
{
int i;
for(i=0;i<20;i++)
{
if((i+1)%4==0)
{
printf("\nhi");
continue;
}
printf("\n%d",i+1);
}
}
