#include <stdio.h>

int main()
{
    int a[100];
    int n,choice,i,j,k,temp,min,key,ch;
    printf("\n ---------------------------------- START -------------------------------------------------");
    printf("\n How Many Numbers Do you want to Enter ::");
    scanf("%d",&n);
    
    printf("\n\tEnter The Numbers ::");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\n\nThe Numbers before Sorting::");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    
    do{
    printf("\n\nWhich operation do you want perform ::");
    printf("\n1.Bubble sort\n2.Selection sort\n3.Insertion Sort\n\n=>");
    scanf("\n%d",&choice);
    
    switch(choice)
    {
        case 1 : //BUBBLE SORTING
    printf("\n-----------------------------------BUBBLE SORT------------------------------------------");    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    printf("\n PASS::%d::",i+1);
    for(k=0;k<n;k++)
    {
        printf("\t%d",a[k]);
    }
    }
    
    printf("\n\nAfter the Bubble Sort ::");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n-------------------------------------------------------------------------------------------");

    break;
    
    case 2:  //SELECTION SORT
    printf("\n------------------------- SELECTION SORT -------------------------------------------------");
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min]=temp;
        
    printf("\n PASS::%d::",i+1);
    for(k=0;k<n;k++)
    {
        printf("\t%d",a[k]);
    }
    }
    
    printf("\n\nAfter the Selection Sort ::");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n-------------------------------------------------------------------------------------------");
    break;
    
    case 3:   //INSERTION SORT
    printf("\n------------------------------INSERTION SORT---------------------------------------");
    for(i=1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1] = key;
      
    printf("\n PASS::%d::",i);
    for(k=0;k<n;k++)
    {
        printf("\t%d",a[k]);
    }
    }
    
    printf("\n\nAfter the Insertion Sort ::");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n-------------------------------------------------------------------------------------------");
    break;
    }
    printf("\n\nDo you want to continue ?\n1.Yes\t2.No\n\n:>");
    scanf("%d",&ch);
    }while(ch!=2);
    return 0;
}
