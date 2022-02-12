#include <stdio.h>  
#include <stdlib.h>  
void push();   //function declaration
void pop();  
void display();  
struct node       //structure
{  
  int ele;  
  struct node *next;  
};  
struct node *head;  
  
int main ()  
{  
    int ch;
    printf("\n--------------------stack-----------------------------\n");
    printf("\n Choose which operation you want to perform :");  
    do{
        printf("\n1.Push\t2.Pop\t3.Show\t4.Exit : ");  
        scanf("%d",&ch);  
        switch(ch)  
        {  
            case 1:  
            {   
                push();    //function calling
                break;  
            }  
            case 2:  
            {  
                pop();  //function calling
                break;  
            }  
            case 3:  
            {  
                display();  //function calling
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
        } 
    } while(ch!=4);
return 0;
} 
 
void push ()  
{  
    int ele;    //memory allocation using malloc
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf(" NOT POSSIBLE!!! ");   
    }  
    else   
    {  
        printf(" Enter the Element that you want to store: ");  
        scanf("%d",&ele);    //inserting element
        if(head==NULL)  
        {         
            ptr->ele = ele;  
            ptr-> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->ele = ele;  
            ptr->next = head;  
            head=ptr;  
        }  
    }  
}  
  
void pop()  
{  
    int item,ele;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = head->ele;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
		printf("\n %d Element deleted from stack", item);    //deleting element  
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  //stack empty condition
    {  
        printf(" Stack is empty\n");  
    }  
    else  
    {  
        printf(" Printing Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf(" %d\n",ptr->ele);  
            ptr = ptr->next;    //printing element 
        }  
    }  
}  

/* OUTPUT: 
Choose which operation you want to perform: 
1.Push 2.Pop 3.Show 4.Exit: 1 
Enter the Element that you want to store: 48

1.Push 2.Pop 3.Show 4.Exit: 1
 Enter the Element that you want to store: 78

1.Push 2.Pop 3.Show 4.Exit : 1 
Enter the Element that you want to store: 50

1.Push 2.Pop 3.Show 4.Exit : 1 
Enter the Element that you want to store: 90

1.Push 2.Pop 3.Show 4.Exit : 3
Printing Stack elements
90
50
78
40

1.Push 2.Pop 3.Show 4.Exit: 2
90 Element deleted from stack 

1.Push 2.Pop 3.Show 4.Exit : 2
50 Element deleted from stack 

1.Push 2. Pop 3.5how 4.Exit : 2
78 Element deleted from stack
 
1.Push 2.Pop 3.Show 4.Exit : 3 
Printing Stack elements 40

1.Push 2.Pop 3.Show 4.Exit : 2
40 Element deleted from stack 

1.Push 2. Pop 3.Show 4.Exit : 3 
Stack is empty

1. Push 2. Pop 3.Show 4.Exit : 4
Exiting....

*/
