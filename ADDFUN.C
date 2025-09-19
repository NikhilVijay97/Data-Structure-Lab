#include<stdio.h>
#include<conio.h>
void main()
{
int a,b, sum;
clrscr();
printf("Enter the two numbers\n");
scanf("%d%d", &a,&b);
sum=add(a,b);
printf("The sum is %d",sum);
getch();
}
int add(int x, int y)
{
return (x+y);
}