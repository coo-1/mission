#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main()
{
	
	srand( time(NULL));
	int i,a;
	for (i=0;i<1;i++)
	a=rand()%52;
	switch(a)
	{
	
	case'1':
	puts("����A");
	break;
	default:
		break;}
	system("pause");
	return 0;
 } 
