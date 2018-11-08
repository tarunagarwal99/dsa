#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,temp,arr[10];
clrscr();
printf("/n enter the number of element in the array:");
scanf("%d",&n);
printf("/n enter the element:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    if(arr[j]>arr[j+1])
    {
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
    }
    }
    printf("/n th array sorted in acceding orderis:");
    for(i=0;i<n;i++)
	printf("/n%d",arr[i]);
    getch();
    }
