//Fibonacci Series
//Using Recursive Function
#include<stdio.h>
#include<conio.h>
int fibo(int n)
{
if (n==1||n==2)
return 1;
else
return (fibo(n-1)+fibo(n-2));

}
void main()
{
int num,i;
printf("Enter the term: ");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("\n %d",fibo(num));
}
getch();
}
