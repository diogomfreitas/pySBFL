#include<stdio.h>
int main(int argc, char *argv[])
{
int a,b,c,s,f=0,r,c1=0,j,d[20],l=0,p,i,s1,x,q1,k;
scanf("%d%d%d",&a,&b,&c);
for(j=1;j<81;j++)
{
s=0;
s1=1;
for(i=1;i<=a;i++)
{
s1=s1*j;
}
k=s1;
x=(b*k)+c;
q1=x;
if(x<1000000000)
break;
while(q1>0)
{
r=q1%10;
s=s+r;
q1=q1/10;
}
if(s==j&&x<1000000000)
{
d[l]=x;
l++;
c1=c1+1;
f=1;
}
}
p=l;
printf("%d",c1);
if(f==1)
{
printf("\n");
for(i=0;i<p;i++)
{
printf("%d\t",d[i]);
}
}
return 0;
}
