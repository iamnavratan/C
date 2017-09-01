#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter an alphabet\n");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
	printf("Alphabet\n");
	else
	printf("Not a Alphabet\n");
	getch();
	return 0;
}
