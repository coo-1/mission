#include<stdio.h> 
#include<stdlib.h>
int main()
{
	struct poke
	{
		int a;
		char color;
	};
	poke poker[52];
	char Tao='t';
	char Xin='x';
	char Mei='m';
	char Fang='f';
	for(int i=0;i<13;i++)
	{
	if(i==0)
	poker[i].a=11;
	poker[i].color=Tao;
	if(i>0&&i<10)
	poker[i].a=i+1;
	poker[i].color=Tao;
	if(i>=10)
	poker[i].a=10;
	poker[i].color=Tao;
}
for(int i=0;i<13;i++)
{

printf("%d\t",poker[i].a);
printf("%c",poker[i].color);
}
system("pause");
return 0;
	
}
