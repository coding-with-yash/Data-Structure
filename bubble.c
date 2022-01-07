// Bubble Sorting
// 11 23 34 45 56 89

#include<stdio.h>
int main()
{
int i,j,n,a[50],temp;

printf("\n How Many Elements You have to insert=");
scanf("%d",&n);

printf("\n Enter the Array Elements = ");

	for (i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	

for (i=0; i<n; i++)
{

 for (j=i+1; j<n; j++)
 {
	
	
	if(a[i]>a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
  }
}
printf("\n Bubble Sorted Array Elements = ");
	
	for (i=0; i<n; i++)
	{
		printf("%d \t",a[i]);
	}

printf("\n");
return 0;
}
