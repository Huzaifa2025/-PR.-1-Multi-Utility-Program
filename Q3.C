//Q3. Triangle Angle Finder.

#include<stdio.h>
#include<conio.h>
int main()
{
	int fa,sa,ta;
	clrscr();

	printf("\n Enter first Angle :- ");
	scanf("%d",&fa);

	printf("\n Enter Second Angle :- ");
	scanf("%d",&sa);

	ta = 180 - (fa + sa);

	printf("\n Third Angle :- %d",ta);

	getch();
	return 0;
}