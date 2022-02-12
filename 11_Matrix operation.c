/*
    FDS ASSIGNMENT: 11
    Matrix operations
	NAME: More Kishor Arjun
	Roll No_40
    Batch: S3
*/

#include<stdio.h>
//2-D Array declaration
int a[10][10],b[10][10],add[20][20],min[50][50],mul[50][50];
int i,j,r1,c1,r2,c2,k;  
void take1();//function declaration
void take2();//function declaration
void sum();//function declaration
void sub();//function declaration
void multi();//function declaration

void take1()  //to read and display first matrix
{
	//matrix first 
	printf("\nEnter Elements for 1st Matrix:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n MATRIX A IS: \n"); //display matrix
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}

void take2() //to read and display second matrix
{
	//matrix second 
	printf("\nEnter Elements for 2nd Matrix:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n MATRIX B IS: \n");  //display
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
}

void sum() //to display addition
{
//if the rows and column of both matrices are same then addition perform
if(r1==r2 && c1==c2)
{
     for(i=0;i<r1;i++)
     {
	    for(j=0;j<c1;j++)
	    add[i][j]=a[i][j]+b[i][j];
     }
     printf("The sum is \n");
     for(i=0;i<r1;i++)
     {
	    for(j=0;j<c1;j++)
	    {
	       printf("\t%d",add[i][j]);
	    }
	    printf("\n");
     }
}
else
 {
   printf("Addition is Not possible..\n");
 }
}	


void sub()
{
//if the rows and column of both matrices are same then substraction perform
if(r1==r2 && c1==c2)
{
     for(i=0;i<r1;i++)
     {
	    for(j=0;j<c1;j++)
	    min[i][j]=a[i][j]-b[i][j];
     }
     printf("The substraction is \n");
     for(i=0;i<r1;i++)
     {
	    for(j=0;j<c1;j++)
	    {
	       printf("\t%d",min[i][j]);
	    }
	    printf("\n");
     }
}
else
 {
   printf("Substraction is Not possible..\n");
 }
}

void multi()
{
/*if column of first matrix and row of second matrix is 
same then only we can perform multiplication*/
if(c1!=r2)
  printf("\n The matrices cant be multiplied with each other.");
else
{
     for(i=0;i<r1;i++)
     {
	    for(j=0;j<c1;j++)
	    {
	       mul[i][j]=0;
	    	for(k=0;k<r2;k++)
	    	{
		   	    mul[i][j]+=a[i][k]*b[k][j];
		    }
		}
     }
     printf("The Multiplication is \n");
     for(i=0;i<r1;i++)
     {
	    for(j=0;j<c2;j++)
	    {
	       printf("\t%d",mul[i][j]);
	    }
	    printf("\n");
     }
}	
}	

int main()
{
	int ch;
	printf("\n Enter number of rows and column for 1st Matrix:");
	scanf("%d %d",&r1,&c1);
	{
	    take1(); //function callling
    }
	printf("\n Enter number of rows and column for 2nd Matrix:");
	scanf("%d %d",&r2,&c2);
    {
	   take2(); //function callling
    }
    do{
    printf("\n Which operation you want:\t1.Addition\t2.Substraction\t3.multiplication\t4.Exit:");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1:
		printf("ADDITION OPERATION::");
	    sum();  //function callling
	    break;
	    case 2:
	    printf("SUBSTRACTION OPERATION::");
		sub();  //function callling
		break;
		case 3:
		printf("MULTIPLICATION OPERATION::");
		multi();   //function callling
		break;
		case 4:
		printf("\nExiting....");
		break;
    }
    }while(ch!=4);
	return 0;
}

/*output::
Enter number of rows and column for 1st Matrix:2
2

Enter Elements for 1st Matrix:8
9
5
-1

 MATRIX A IS:
        8       9
        5       -1

 Enter number of rows and column for 2nd Matrix:2
2

Enter Elements for 2nd Matrix:-2
3
4
0

 MATRIX B IS:
        -2      3
        4       0

 Which operation you want:      1.Addition      2.Substraction  3.multiplication        4.Exit:1
ADDITION OPERATION::The sum is
        6       12
        9       -1

 Which operation you want:      1.Addition      2.Substraction  3.multiplication        4.Exit:2
SUBSTRACTION OPERATION::The substraction is
        10      6
        1       -1

 Which operation you want:      1.Addition      2.Substraction  3.multiplication        4.Exit:3
MULTIPLICATION OPERATION::The Multiplication is
        20      24
        -14     15

 Which operation you want:      1.Addition      2.Substraction  3.multiplication        4.Exit:4

Exiting....
-----------------------------------------------------------------------------------------------------
Enter number of rows and column for 1st Matrix:3
3

Enter Elements for 1st Matrix:4
1
2
3
7
8
5
9
6

 MATRIX A IS:
        4       1       2
        3       7       8
        5       9       6

 Enter number of rows and column for 2nd Matrix:2
2

Enter Elements for 2nd Matrix:4
5
6
1

 MATRIX B IS:
        4       5
        6       1

 Which operation you want:      1.Addition      2.Substraction  3.multiplication        4.Exit:1
ADDITION OPERATION::Addition is Not possible..

 Which operation you want:      1.Addition      2.Substraction  3.multiplication        4.Exit:2
SUBSTRACTION OPERATION::Substraction is Not possible..

 Which operation you want:      1.Addition      2.Substraction  3.multiplication        4.Exit:3
MULTIPLICATION OPERATION::
 The matrices cant be multiplied with each other.
 Which operation you want:      1.Addition      2.Substraction  3.multiplication        4.Exit:4

Exiting....
--------------------------------
*/
