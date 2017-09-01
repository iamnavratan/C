#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a year\n");
	scanf("%d",&n);
	if(n%4==0)
	printf("Leap year\n");
	else 
	printf("Not a Leap year");
	getch();
	return 0;
}
