#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("Enter the Numbers\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
		printf("Greatest number: %d",x);
		else
		printf("Greatest number: %d",z);
	}
	else
	{
		if(y>z)
		printf("Greatest number: %d",y);
		else
		printf("Greatest number: %d",z);
	}
	getch();
	return 0;
}
