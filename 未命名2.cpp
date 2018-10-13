#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char*color;
	char*point;
}poker;

int main()
{


poker s1={
       .color= "heart",
		.point="Ace"
};
printf("%s",s1.point);
system("pause");
return 0;
}
