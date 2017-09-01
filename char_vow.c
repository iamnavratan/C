#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter a Alphabet\n");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z' && ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U')
	printf("Its an Consonant\n");
	else if(ch>='a' && ch<='z' && ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u')
	printf("Its an Consonant\n");
	else if(ch=='A' || ch=='E'|| ch=='I' || ch=='O'|| ch=='U')
	printf("Its an Vowel\n");
	else if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	printf("Its an Vowel\n");
	else
	printf("Enter only Aplhabets\n");
	getch();
	return 0;
}
