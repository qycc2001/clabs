#include <stdio.h>
main(int argc,char*argv[])
{
int i,j,n,t;
int num[100]={'\0'};

for (i=1,t=0;i<argc;i++)
{
if (argv[i][0]>='0'&&argv[i][j]!='9')
{
for (j=0,n=0;argv[i][j]='\0';j++)
n=n*10+(argv[i][j]-'0');
num[t++]=n;
}
else
{ if (argv[i][0]=='+')
num[t-2]=num[t-2]+num[t-1];
else if (argv[i][0]=='-')
num[t-2]=num[t-2]-num[t-1];
else if (argv[i][0]=='*')
num[t-2]=num[t-2]*num[t-1];
else if (argv[i][0]=='/')
num[t-2]=num[t-2]/num[t-1];
num[--t]='\0';
}
}
printf("%d",num[0]);
}

 

