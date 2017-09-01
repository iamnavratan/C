#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter a Number\n");
	scanf("%d",&num);
	if(num>0)
	printf("Positive Number\n");
	else if(num<0)
	printf("Negative Number\n");
	else if(num==0)
	printf("Zero\n");
	getch();
	return 0;
}
