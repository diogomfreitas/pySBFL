#include<stdio.h>
int main(int argc, char *argv[])
{
int n,i,j;
scanf("%d",&n);
char str[8]={"ROYGBIV"};
if(n%7==0)
{
    i=n/7;
    for(j=0;j<i;j++)
    {
        printf("%s",str);
    }
}
else
{
    if(n%7>=4)
    {
        i=n/7;
        for(j=0;j<i;j++)
        {
          printf("%s",str);
        }
        i=n%7;
        for(j=0;j<i;j++)
        {
           printf("%c",str[j]);
        }
    }
    else
    {
        i=n/7;
        for(j=0;j<i;j++)
        {
            printf("%s",str);
        }
        i=n%7;
        for(j=0;j<i;j++)
        {if(i==3)
            printf("%c",str[1+j]);
            if(i==2)
            printf("%c",str[2+j]);
            if(i==1)
            {
                printf("%c",str[4]);
            }
        }
    }
}
return(0);
}
