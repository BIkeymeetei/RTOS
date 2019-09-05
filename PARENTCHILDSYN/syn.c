#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<string.h> 
void main()
{
int pid;
FILE *fp1=fopen("file.txt","w");
char a[50];
FILE *fp2;
pid=fork();

if(pid==0)
{
printf("\nchild process BIKEY");
strcpy(a,"BIKEY is  present");
//fwrite(a,sizeof(a),1,fp1);
fprintf(fp1,"%s",a);
//printf("%s",a);
fclose(fp1);
printf("\nExecution complete for the child");
}

else
{

wait(NULL);

printf("\n\n\n");


printf("\n Parent process reading BIKEY \n");
fp2=fopen("file.txt","r");
fgets(a,777,fp2);
printf("\n%s",a);
fclose(fp2);
printf("\n Execution complete for the parent");

}

printf("\n\n");
}

