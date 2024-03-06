#include<stdio.h>
void merge(int a[],int l, int m, int r) {
int i=l, k=l, cp;
int b[10];
int j=m;
while(i<m && j<=r) {
if(a[i]<a[j]) {
b[k]=a[i];
k++;
i++;
}
else {
b[k]=a[j];
k++;
j++;
}
}
while(i<m) {
b[k]=a[i];
k++;
i++;
}
while(j<=r) {
b[k]=a[j];
j++;
k++;
}
for(cp=l;cp<=r;cp++) {
a[cp]=b[cp];
}
}
void merge_sort(int a[], int left, int right) {
int mid;
if(left<right) {
mid=(left+right)/2;
merge_sort(a,left,mid);
merge_sort(a,mid+1,right);
merge(a,left,mid+1,right);
}
}
int main(){
	int a[100],n,i,l,r;
	printf("ENter the elements");
	scanf("%d",&n);
	printf("Enter the %d elements",n);
	l=0;
	r=n-1;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Elements before the sort: \n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	merge_sort(a,l,r);
printf("Elements after sort: \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
return 0;
}


