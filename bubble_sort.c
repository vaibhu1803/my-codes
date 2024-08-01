#include<stdio.h>
#include<conio.h>
void bubble_sort(int[],int);
void main()
{
    int a[30],n,i;
    printf("\nenter no of elements:");
    scanf("%d",&n);
    printf("\nenter array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
bubble_sort(a,n);
printf("\n sorted array is:");
for(i=0;i<n;i++)
printf("%d",a[i]);
getch();
}
void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    for(j=0;j<n-i;j++)
if(a[j]>a[j+1])
{
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}
}