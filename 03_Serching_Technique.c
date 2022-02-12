/*
    FDS ASSIGNMENT: 04
    searching (linear search,binary search)
	NAME: More Kishor Arjun
	Roll No_40
    Batch: S3
*/

#include<stdio.h>
int main()
{   
    int arr[20];
	int i,n;
    printf("\n ---------------------------------- START -------------------------------------------------");
    printf("\n How Many Elements You Want in Array:");
    scanf("%d",&n);
    printf("\n ENTER ELEMENTS :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n-------------------------------------------------------------------------------------------");
    printf("\n Array :");
    for(i=0; i<n; i++)
    {
        printf("\t %d",arr[i]);
    }
    printf("\n-------------------------------------------------------------------------------------------");
    printf("\n Select Searching Technique That U Want to Apply:");
    int l,h,m,find,ch,ch2,j,k;
	int temp=0,index;
	do{
	    printf("\n 1.Linear Search \t 2.Binary Search :");
	    scanf("\n%d",&ch);
	
	    switch(ch)
		{
	        case 1://linear search
		        printf("\n--------------------------------------------------------------------------------------");
		        printf("\n :: LINEAR SEARCH ::");
		        printf("\n Enter Element that U Want to Search in Array : ");
		        scanf("%d",&find);
		        {
		            for(i=0;i<=n;i++)
		            {
		                if(find==arr[i])
		                {   
					        printf("\n %d Element is Found at %d Position .",find,i+1);
					        break;
		                }
		            }
		            if(find!=arr[i])
		            {
		                printf("\n Element is Not Present in Array ");
		            }
		        }
		        printf("\n-------------------------------------------------------------------------------------");
	        break;
	
	        case 2://binary search
		        printf("\n-------------------------------------------------------------------------------------");
		        printf("\n :: BINARY SEARCH WITH SELECTION SORT::");
		        printf("\n Array After Sorting: ");
		        for(i=0;i<(n-1);i++)
		        {
		            for(j=i+1;j<n;j++)
		            {
		                if(arr[i]>arr[j])
		                {
		                    temp=arr[i];
		                    arr[i]=arr[j];
		                    arr[j]=temp;
		                }
		            }
		        }
		        for(i=0;i<n;i++)
		        {
		            printf("\t %d",arr[i]);
		        }
		        printf("\n Enter Element that U Want to Search in Array :");
		        scanf("%d",&find);
		        l=0;
		        h=n-1;
		        m=(l+h)/2;
		        while(l<=h)
		        {
		            if (arr[m]<find)
		                l=m+1;
		            else if(arr[m]==find)
		            {
		                printf("\n  %d element is Found At %d Postion .",find, m+1);
		                break;
		            }
		            else
		                h=m-1;
		                m=(l+h)/2; 
		        }
		        if(l>h)
		        {
		            printf("\n  %d is Not Present in Array .",find);
		        }
		        printf("\n-------------------------------------------------------------------------------------");
	        break;
	    }
	    printf("\n\n Do You Want to Continue With Other Operations :\t 1.Yes \t 2.No : ");
	    scanf("%d",&ch2);
    }while(ch2!=2);
    return 0;
}

