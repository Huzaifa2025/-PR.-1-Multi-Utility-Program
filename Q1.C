//Q.1 Temperature Converter.

#include<stdio.h>
#include<conio.h>
int main()
{
	int c;
	float f;
	clrscr();

	printf("\n The Temperature in Celsius :- ");
	scanf("%d",&c);

	f = 1.8 * c + 32;

	printf("\n The Temperature in Fahrenheit :- %.1f",f);
	getch();
	return 0;
}