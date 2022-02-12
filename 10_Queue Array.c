
#include<stdio.h>
#include<stdlib.h>

int arr[100];    //array declaration
void enqueue();   //function declaration
void dequeue();
void display();
int rear=-1;     //initially position 
int front=-1; 
int main()
{
int size,ch,ch2;
printf("\n How many element you want in array :");
scanf("%d",&size);
do{
     printf("\n enter which operation you want to perform:");
     printf("\n 1.Enqueue \t 2.Dequeue \t 3.display:");
     scanf("%d",&ch);
switch(ch)
{
  case 1:
     enqueue(size);    //function callling
  break;
  case 2:
     dequeue();       //function callling
  break;
  case 3:
     display();      //function callling
  break;

}printf("\n Do you want to continue? \n 1.yes \t 2.No");
 scanf("%d",&ch2);
    
}while(ch2!=2);
return 0;
}

void enqueue(int size)
{
   int data;
   if(rear==size-1)    //queue full condition
   {
      printf("\n Queue Full");
   }
   else
   {
      if(front==-1)      //inserting element in queue
      front=0;
      printf("\n Enter element in queue::");
	      scanf("%d",&data);
	      rear++;      //increase rear by 1 
	      arr[rear]=data;
   }
}
void dequeue()
{
   if(front==rear)      //queue empty condition
   {
      printf("\n Queue is empty..");
   }
   else
   {
      printf("\n Element deleted is %d",arr[front]);
      front++;      //increase front by 1
   }
}

void display()
{
  int i;
  if(front==-1)     //queue empty condition
  {
     printf("\n Queue is Empty....");
  }
  else
  {
     printf("\n Display Queue...:");
     for(i=front;i<=rear;i++)    //displaying queue
     {
       printf("\t %d",arr[i]);   
     }
  }
}

/* OUTPUT:
 How many element you want in array :4
enter which operation you want to perform:
1. Enqueue 2.Dequeue 3.display :1
Enter element in queue::40

Do you want to continue?
1.yes 2.No 1

enter which operation you want to perform:
 1. Enqueue 2.Dequeue 3.display:1
Enter element in queue::30

Do you want to continue? 1.yes 2. No 1

enter which operation you want to perform:
1. Enqueue  2.Dequeue 3.display:3
40
30

Do you want to continue?1.yes 2. No 1

enter which operation you want to perform:
1. Enqueue  2.Dequeue  3.display:2
Element deleted is 40

Do you want to continue?1.yes 2. No 1

enter which operation you want to perform: 
1. Enqueue 2.Dequeue 3.display:3
Display Queue...:
30

Do you want to continue? 1. yes 2. No 1

enter which operation you want to perform: 
1. Enqueue 2.Dequeue 3.display: 2
Queue is empty..

Do you want to continue?1.yes 2. No 1

enter which operation you want to perform:
 1. Enqueue 2.Dequeue 3.display:1
Enter element in queue::78

Do you want to continue?1.yes 2. No1

enter which operation you want to perform:
 1. Enqueue 2.Dequeue 3.display:1
Enter element in queue::85

Do you want to continue? 1.yes 2. No1

enter which operation you want to perform:
1. Enqueue 2.Dequeue 3.display:1
 
enter which operation you want to perform:
 1. Enqueue 2.Dequeue 3.display:1
Queue Full

Do you want to continue? 1.yes 2. No 2
*/
