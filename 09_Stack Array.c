/* 
    FDS Assignment 7
	STACK USING ARRAY
	NAME: More Kishor Arjun
	Roll No_40
    Batch: S3
*/

#include<stdio.h>
int ch1,ch,n,data,i,top;          //Declare variable
int a[10];                 //declare array
void push();                //function declaration
void pop();  
void display(); 
int main()
{   
   top=-1;                  //initially top is -1
   printf("\n -----start----");                     
   printf("\n How many elements you want in stack:");     //take number of element
   scanf("%d",&n);
   
   do{
       printf("\n Enter which operation you want to perform on stack :");
       printf("\n 1.PUSH\t 2.POP \t 3.DISPLAY : ");
       scanf("%d",&ch); 
       switch(ch)
       { 
          case 1: //push
            {
                push();       //function calling
                break;
            }
          case 2: //pop
            {
                pop();      //function calling
                break;
            }
          case 3: //display
            {
            	display();    //function calling
            	break;
			}
       }
    printf("\n do you want to continue : 1.Yes \t 2.No :");
    scanf("%d",&ch1);
   }while(ch1!=2);
  return 0;
}

void push()
{
    if(top>=n-1)      //stack full condition
    {
        printf("\n The stack is full !!");
    }
    else
    {
	    printf("\n Insert element that you want: ");
        scanf("%d",&data);
        top++;              //increase top by 1
        a[top]=data;         //store data in array 
    }
}

void pop()
{
    if(top==-1)         //stack is empty 
    {
        printf("\n The stack is empty,you cannot use deletion operation!!");
    }
    else
    {
        data=a[top];
        printf("\n %d data is deleted from stack ",data); 
        top--;          //decrease top by 1 
    }
}

void display()
{
    printf("\n Display stack: ");
    for(i=0;i<=top;i++)
    {
        printf("\t\n %d",a[i]);    //display stack 
    }
}


/*OUTPUT : 

How many elements you want in stack:5

Enter which operation you want to perform on stack:
1. PUSH 2. POP 3. DISPLAY: 1
Insert element that you want: 40

do you want to continue: 1. Yes  2. No 1

Enter which operation you want to perform on stack:
1. PUSH 2. POP 3.DISPLAY: 1
Insert element that you want: 70

do you want to continue : 1. Yes  2. No 1

Enter which operation you want to perform on stack:
1. PUSH 2. POP 3.DISPLAY: 1
Insert element that you want: 96

do you want to continue: 1. Yes  2. No 1

Enter which operation you want to perform on stack:
1.PUSH 2. POP 3.DISPLAY : 3
Display stack:
40
70
96

do you want to continue: 1. Yes.  2. No:1 

Enter which operation you want to perform on stack:
1.PUSH 2.POP 3.DISPLAY : 2
96 data is deleted from stack

do you want to continue: 1. Yes  2.No :1

Enter which operation you want to perform on stack:
1.PUSH 2. POP 3.DISPLAY: 3
Display stack:
40
70

do you want to continue: 1. Yes  2.No :1

Enter which operation you want to perform on stack:
1.PUSH 2. POP 3. DISPLAY : 1
Insert element that you want: 85

do you want to continue : 1. Yes  2.No :1

Enter which operation you want to perform on stack:
1.PUSH 2.POP 3.DISPLAY: 3
Display stack:
40
70
85

do you want to continue : 1. Yes.  2.No :1

Enter which operation you want to perform on stack:
1.PUSH 2.POP 3.DISPLAY: 1
Enter which operation you want to perform on stack: 
1.PUSH 2.POP 3.DISPLAY: 1
Insert element that you want: 99

do you want to continue: 1. Yes   2.No :1

Enter which operation you want to perform on stack:
1.PUSH 2. POP 3.DISPLAY: 1
Insert element that you want: 107

do you want to continue : 1. Yes  2.No :1

Enter which operation you want to perform on stack:
1.PUSH 2. POP 3.DISPLAY: 1
The stack is full !!

do you want to continue: 1. Yes  2.No :1

Enter which operation you want to perform on stack:
1.PUSH 2. POP 3. DISPLAY: 3
Display stack:
40
70
85
99
107

do you want to continue: 1. Yes 2.No :1 

 Enter which operation you want to perform on stack:
1.PUSH 2. POP 3. DISPLAY: 2
107 data is deleted from stack

do you want to continue: 1. Yes. 2.No :1

Enter which operation you want to perform on stack :
1.PUSH 2.POP 3.DISPLAY: 2
99 data is deleted from stack

do you want to continue : 1. Yes  2.No :1

Enter which operation you want to perform on stack:
1.PUSH 2. POP 3.DISPLAY: 2
85 data is deleted from stack

do you want to continue: 1. Yes  2. No:1

Enter which operation you want to perform on stack:
1.PUSH 2.POP 3.DISPLAY: 2
70 data is deleted from stack 

do you want to continue: 1. Yes 2. No : 1

Enter which operation you want to perform on stack :
1.PUSH 2.POP 3.DISPLAY : 2
40 data is deleted from stack

Enter which operation you want to perform on stack :
 1.PUSH 2. POP 3. DISPLAY: 2
The stack is empty, you cannot use deletion operation!! 

do you want to continue: 1. Yes 2. No:2

Process exited after 232.4 seconds with return value 0 Press any key to continue.

 */

