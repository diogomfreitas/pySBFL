#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b,m;
	scanf("%i%i%i",&a,&b,&m);
	printf((b>a&&(b-a)%m==0)||(b==a&&m==0)?"YES\n":"NO\n");
	return 0;
}
