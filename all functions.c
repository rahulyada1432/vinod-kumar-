#include<stdio.h>
int main()
{
	int count,a,e,n1,n2,i,j,b,r,pos1,pos2,h;
	printf("1->insertion sort \n 2->merge sort \n 3->ascending order \n 4->descending order \n 5->smallest number \n 6->biggest number \n 7->swapping");
	printf("enter the option");
	scanf("%d",&h);
	if(h==1)
	{
		insertion_sort();
	}
		if(h==2)
	{
		merge_sort();
	}
		if(h==3)
	{
		swapping();
	}
		if(h==4)
	{
		smallest_number();;
	}
		if(h==5)
	{
		biggest_number();
	}
		if(h==6)
	{
		ascending_order();
	}
		if(h==7)
	{
		descending_order();
	}
}
	void insertion_sort()
{
	int n,b,r,i;
	printf("enter the size of array");
	scanf("%d",&n);
	int array[n];
	printf("the elements are");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	printf("enter the position to be replaced: ");
	scanf("%d",&b);
	printf("enter the value");
	scanf("%d",&r);
    array[b]=r;
    printf("the replaced array");
    for(i=0;i<n;i++)
    {
    	printf("%3d",array[i]);
	}
}
void merge_sort()
{
    int n,b,r,i,n1,n2,j;
	printf("enter the size of array");
	scanf("%d",&n);
	int array[n];
	printf("the elements are");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	printf("Enter the size of the array1: ");
	scanf("%d",&n1);
	int array1[n1];
    printf("Enter the elements of array1: ");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("Enter the size of the array2: ");
	scanf("%d",&n2);
	int array2[n2];
    printf("Enter the elements of array2: ");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&array2[i]);
	}
	int array3[n1+n2];
	for(i=0;i<n1;i++)
	{
		array3[i]=array1[i];
	}
	 
	for(i=n1,j=0;i<(n1+n2),j<n2;j++,i++)
	{
		array3[i] = array2[j];
	}
	printf("\n Merged array=:");
	for(i=0;i<(n1+n2);i++)
	{
		printf("\n %3d",array3[i]);
	}
}

void swapping()
{
    int n,b,r,i,pos1,pos2;
	printf("enter the size of array");
	scanf("%d",&n);
	int array[n];
	printf("the elements are");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	printf("enter the first position");
	scanf("%d",&pos1);
	printf("enter the second position");
	scanf("%d",&pos2);
	int temp=array[0];
	temp=array[pos1];
	array[pos1]=array[pos2];
	array[pos2]=temp;
	for(i=0;i<n;i++)
	{
		printf("%3d",array[i]);
	}
}
void smallest_number()
{
    int n,b,r,i;
	printf("enter the size of array");
	scanf("%d",&n);
	int array[n];
	printf("the elements are");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	int temp=array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]<temp)
		temp=array[i];
	}
	printf("\n smallest number of array[i]=temp is %d",temp);
}
void biggest_number()
{
    int n,b,r,i;
	printf("enter the size of array");
	scanf("%d",&n);
	int array[n];
	printf("the elements are");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	int temp=array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]>temp)
		temp=array[i];
	}
	printf("\n biggest number of array[i]=temp is %d",temp);
}
	void ascending_order()
{
    int n,b,r,i,j;
	printf("enter the size of array");
	scanf("%d",&n);
	int array[n];
	printf("the elements are");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	int temp=0;
	for(i=0;i<n;i++)
	{	
		for( j=i+1;j<n;j++)
		{	
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}	
	printf("\n Ascending order of array");
	for(i=0;i<n;i++)
		{
			printf("\n %d",array[i]);
		}
}
void descending_order()
{
    int n,b,r,i,j;
	printf("enter the size of array");
	scanf("%d",&n);
	int array[n];
	printf("the elements are");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	int temp=0;
	for(i=0;i<n;i++)
	{		
		for( j=i+1;j<n;j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("\n descending order of array");
	for(i=0;i<n;i++)
	{
		printf("\n %d",array[i]);
	}
}

