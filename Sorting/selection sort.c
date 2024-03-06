#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,temp,loc,min;
printf("How many Elements: ");
scanf("%d",&n);
printf("Enter the element of array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
min=a[i];
loc=i;
for(j=i+1;j<n;j++)
{
if(a[j]<min)
{
min=a[j];
loc=j;
}
}
if(loc!= i)
{
temp=a[i];
a[i]=a[loc];
a[loc]=temp;
}
}
printf("The number after selection sorting are: \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}
