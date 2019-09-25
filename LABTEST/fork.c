#include<stdio.h>
#include<unistd.h>
void main()
{
int pid,seq=0;
pid=fork();
if(pid!=0)
{
seq=seq+1;
printf("PARENT %d ",seq);
seq=seq++;
}
else
{
seq=seq+1;
printf("CHILD %d",seq);
seq=seq++;
}
++seq;
printf("%d",seq);
}
