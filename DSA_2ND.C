#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,arr[10],temp;
clrscr();
printf("/n enter the number of element in the array:");
scanf("%d",&n);
printf("/n enter the element:");
void bubble_sort(int *arr,int n)
{
   int i,j,temp,flag=o;
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
    {
    if(arr[j]>arr[j+1])
    {
    flag=1;
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
    if(flag==0)
    {
    return;
    }
    printf("/n th array sorted in acceding orderis:");
    for(i=0;i<n;i++)
	printf("/n%d",arr[i]);
    getch();
    }
