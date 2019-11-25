#include<stdio.h>
#include<unistd.h>
int main()
{
  int seq=0;
  int pid;
  pid=fork();
  printf("%d\n",++seq);
if(pid==0)
{
++seq;
printf("%d\n",seq);
}
else
{
++seq;
printf("%d\n",seq);
}
return 0;
}

  
