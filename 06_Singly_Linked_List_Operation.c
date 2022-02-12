/*
    FDS assignment 6
	OPERATIONS ON SINGLE LINKED LIST
	NAME: More Kishor Arjun
	Roll No_40
    Batch: S3
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	// node structure
	struct SLLNODE
	{
		int data;
		struct SLLNODE *link;	
	}*head=NULL,*p,*n,*q;                   // head = poimter to first in SLL t=temp n=nelwy created node
	
	int d,ch,ch1,ch2,key,i;
	printf("\n---------------------* Welcome in SLL Program *----------------------------");
                                        	// creating the NODE Dynamically.
	do{
		n=(struct SLLNODE *)malloc(sizeof(struct SLLNODE));
		printf("\n Enter The Data Which U Want to Create in Node :");
		scanf("%d",&d);
		n->data=d;                          // Assign the data
		n->link=NULL;
		if(head==NULL)
		{
			head=n;
			p=head;
		}
		else
		{
			p->link=n;
			p=n;
		}
		
		printf("\n Do U Want to Add New Node In Ur Linked List ? ");
		printf("\n 1-YES \t 2-NO : ");
		scanf("%d", &ch);
	}while(ch!=2);
	
	// display the Linked list
	printf("\n Content of Linked List is ::");
	p=head;
	while(p!=NULL)
	{
		printf("\t %d-->",p->data);
		p=p->link;
	}
	
		do{
		printf("\n ------------------------------------------------------------------------------");
		printf("\n Enter the choice which operation u want to perfrom??");
		printf("\n 1-Insert a Node at Begining \n 2-Insert a Node at END \n 3-Insert at specific location \n 4-delet from front \n 5-delet from end \n 6-delet from specific position \n 7-display:");
		scanf("%d",&ch1);
		printf("\n ------------------------------------------------------------------------------");
	
		switch(ch1)
		{
			printf("\n ------------------------------------------------------------------------------");
			case 1: // Insert at Front
			    printf("\n --- INSERT AT FRONT ---");
				n=(struct SLLNODE *)malloc(sizeof(struct SLLNODE));
				printf("\n Enter the data which u want to create in node :");
				scanf("%d",&d);
				if(head == NULL)  
		        {  
		            printf("\n not possible ::");  
		        }  
		        else  
		        {  
		            n->data = d;  
		            n->link = head;  
		            head = n;  
		        }
		        printf("\n Content of Linked List After Insert At First Position ::");
				p=head;
				while(p!=NULL)
				{
					printf("\t %d-->",p->data);
					p=p->link;
				}
				printf("\n ------------------------------------------------------------------------------");
			break;
			
			case 2: // Insert at END
				// 1. create a node
				printf("\n --- INSERT AT END ---");
				n=(struct SLLNODE *)malloc(sizeof(struct SLLNODE));
				printf("\n Enter the data which u want to create to copy in node :");
				scanf("%d",&d);
				n->data=d; // Assign the data
				n->link=NULL;
				// 2. CHECK for SLL is EMPTY
				if(head==NULL)
				{
					head=n;
				}
				else
				{
					p=head;
					while(p->link!=NULL)	
					{
						p=p->link;
					}
					p->link=n;
								
				}
				// displayed the LL
				printf("\n Content of LL is ::");
				p=head;
				while(p!=NULL)
				{
					printf("\t %d-->",p->data);
					p=p->link;
				}
				printf("\n ------------------------------------------------------------------------------");
			break;
				
			case 3: //insert at specific location
			    printf("\n ----INSERT AT SPECIFIC LOCATION----");
			    if(head==NULL)
			    {
			    	printf("\n You can Perform operation :");
				}
				else  
		        {  
		            printf("Enter the location");  
		            scanf("%d",&key);         
		            n->data = d;  
		            p=head;  
		            for(i=0;i<key;i++)  
		            {  
		                p = p->link;  
		                if(p == NULL)  
		                {  
		                    printf("\ncan't insert\n");  
		                }  
		            }  
		            n->link = p->link;   
		            p ->link = n;   
		            printf("\nNode inserted");  
		        }
		        printf("\n Content of LL is ::");
				p=head;
				while(p!=NULL)
				{
					printf("\t %d-->",p->data);
					p=p->link;
				}
				printf("\n ------------------------------------------------------------------------------");
			break;
			
			case 4: //delet from front
				printf("\n ----DELET FROM FRONT---- ");  
			    if(head==NULL)
			    {
			    	printf("\n You can Perform operation :");
				}
				else
				{
					p=head;
					head=head->link;
					free(p);
				}
				printf("\n Content of Linked List after deleting from front ::");
	            p=head;
	            while(p!=NULL)
	            {
		            printf("\t %d-->",p->data);
			        p=p->link;
		        }   
				printf("\n ------------------------------------------------------------------------------");
			break;
			
			case 5: //delet from end
			    printf("\n -- DELET FROM END --");
			    if(head==NULL)
			    {
			    	printf("\n You cant perform deletion :");
				}
				else if(head->link != NULL)
				{
					p=head;
					while(p->link != NULL)
					{
						q=p;
						p=p->link;
				    }
				    free(p);
				    q->link=NULL;
				}
				else
				{
					p=head;
					head=NULL;
					free(p);
				}
			    printf("\n Content of LL after deleting last element ::");
			    p=head;
				while(p!=NULL)
				{
					printf("\t %d-->",p->data);
					p=p->link;
				}		
			break;
			
			case 6: //delet from specific location
			    printf("\n Enter which element(key) you want to delet : ");
			    scanf("%d",key);
			    p=head;
			    while(p != NULL)
			    {
			    	if(p->data != key)
			    	{
			    		q=p;
			    		q=p->link;
					}
					else
					break;
				} 
				q->link=p->link;
				free(p);
				printf("\n Content of Linked List after deleting key element ::");
			    p=head;
				while(p!=NULL)
				{
					printf("\t %d-->",p->data);
					n=p->link;
				}
				printf("\n ------------------------------------------------------------------------------");
			break;
			
			case 7:  //display list
		    	printf("\n Content of Linked List is ::");
				p=head;
				while(p!=NULL)
				{
					printf("\t %d-->",p->data);
					p=p->link;
				}
				printf("\n ------------------------------------------------------------------------------");
			break;
			
		}
	    	printf("\n Do u want to continue with other operations ?:");
		    printf("\n 1-YES \t 2-NO : ");
	    	scanf("%d", &ch2);
    	}while(ch2!=2);
		return 0;
}

