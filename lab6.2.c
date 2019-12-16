#include <stdio.h>
int day();
main(int argc,char *argv[])
{
    int t1[3]={0};
    int t2[3]={0};
    int i,j,dy,days1,days2;
    for (i=0,j=0;argv[1][i]!='\0';i++);
    if (argv[1][i]>='0'&&argv[1][i]<='9')
    t1[j]=t1[j]*10+(argv[1][i]-'0');
    else
    j++;
    for (i=0,j=0;argv[2][i]!='\0';i++)
    if (argv[2][i]>='0'&&argv[2][i]<='9')
    t2[j]=t2[j]*10+(argv[2][i]-'0');
    else
    j++;
    dy=365*(t2[0]-t1[0]);
    days1=day(t1[1]+t1[2]);
    days2=day(t2[1]+t2[2]);
    printf("difference between two dates%dday.\n",days2-days1+dy+1);
}
int day(int month)
{
    switch(month)
    {
        case 1:
        return 0;
        case 2:
        return 31;
        case 3:
        return 59;
        case 4:
        return 90;
        case 5:
        return 120;
        case 6:
        return 151;
        case 7:
        return 181;
        case 8:
        return 212;
        case 9:
        return 243;
        case 10:
        return 273;
        case 11:
        return 304;
        case 12:
        return 334;
    }
}
