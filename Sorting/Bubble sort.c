#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,temp;
printf("how many elements:");
scanf("%d",&n);
printf("Enter the element of array: ");
for(i=0;i<=n-1;i++)
{ scanf("%d",&a[i]); }
//Bubble sort
for(i=n-1;i>=0;i--)
{
for(j=0;j<i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("Element of array after bubble sort: \n");
for(i=0;i<=n-1;i++)
{ printf("%d\n",a[i]); }
getch();
}
