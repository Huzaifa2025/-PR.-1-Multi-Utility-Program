//Gross Salary Calculator.

#include<stdio.h>
#include<conio.h>
int main()
{
	int s,gs;
	float hra,da,ta;
	clrscr();

	printf("\n Enter Base Salary :- ");
	scanf("%d",&s);

	printf("\n Enter House Rent Allowance :- ");
	scanf("%f",&hra);

	printf("\n Enter Dearness Allowance :- ");
	scanf("%f",&da);

	printf("\n Enter Travelling Allowance :- ");
	scanf("%f",&ta);

	gs = s + hra + da + ta;

	printf("\n Gross Salary :- %d",gs);

	getch();
	return 0;
}