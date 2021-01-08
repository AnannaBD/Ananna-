// Acending and Descending Order in array

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[1000],tmp[1000],size,i,j,temp;
printf("Enter the size of the array element");
scanf("%d",&size);
printf("\nEnter value of Array Elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		tmp[i]=arr[i];
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	clrscr();
	printf("\n-------------------------------------------");
	printf("\n Original\tAccending\tDescending");
	printf("\n-------------------------------------------");
	for(i=0,j= size-1;i<size;i++,j--)
	{
		printf("\n%d\t\t%d\t\t%d",tmp[i],arr[i],arr[j]);
	}
	getch();
}
