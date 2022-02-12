/*
FDS ASSIGNMENT :01
structure manipulaton with pointer and without pointer...
   NAME: More Kishor Arjun
   Roll no : 40
   Batch : S3
   WITHOUT POINTER:.....
*/
#include<stdio.h>
int main()
{
//account number, Name of customer,srno, acccount type,total amount, mobile number:
	int i,n,ch,ch2,new,value,choice1,str1;
	char cust_name[50];
	struct bank
{      
        int srno;
		char cust_name[20],acc_type[20];                 
		char acc_no[60];  
		float total_amount;
	    char  phno[20];
}bank[50];
	
	printf("\n.......AUTODESK BANK.......");
	printf("\n How many customers record u want to store::");
	scanf("%d", &n);                       
	printf("\n Enter Information::\n");
	
	for(i=0;i<n;i++)
	{  	
	    printf("_____________________________________________________________________");
        printf("\n Enter account number ::");
		scanf("%s", bank[i].acc_no);
	    printf(" Enter customer name ::");
        scanf("%s", bank[i].cust_name);	   
        printf(" Enter Account type ::");
    	scanf("%s", bank[i].acc_type);
		printf(" Enter total amount ::");
		scanf("%f", &bank[i].total_amount);
		printf(" Enter mobile number ::");
		scanf("%s", bank[i].phno);
	}
	printf("\n Following Information is in Autodesk Bank ::");
    printf("\nsr.no \t Account No.\t\tcustomer_Name\t Account Type \t Total Amount \t Mb.Number ");
	for(i=0;i<n;i++)
	{
		printf("\n %d \t %s\t%s\t \t %s \t %f \t %s ",i+1,bank[i].acc_no,bank[i].cust_name,bank[i].acc_type,bank[i].total_amount,bank[i].phno);		
	}
	do{
		printf("\n Which operation you want to perfrom? ");
		printf("\n 1.Insert a new record \n 2.Delete a record \n 3.Search a record\n 4.Display \n 5.Edit or Modify the Record \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\n # Insert a new bank record in Created Database ::");
                    printf("\n Enter account number ::");
	            	scanf("%s", bank[i].acc_no);
	                printf(" Enter customer name ::");
                    scanf("%s", bank[i].cust_name);	   
                    printf(" Enter Account type ::");
                	scanf("%s", bank[i].acc_type);
		            printf(" Enter total amount ::");
	            	scanf("%f", &bank[i].total_amount);
	            	printf(" Enter mobile number ::");
		            scanf("%s", bank[i].phno);
					n++;
                	printf(" Information of New customer added sucessfully!!!");
                	printf("\n %d \t %s\t%s\t \t %s \t %f \t %s ",i+1,bank[i].acc_no,bank[i].cust_name,bank[i].acc_type,bank[i].total_amount,bank[i].phno);		

				   	break;
				   	
			case 2: printf("\n # Delete a record in Created Database");
			        printf("\nEnter serial number::");
			        scanf("%d",&new);
			        
			        if (new < 0 || new > n)
			        {
			           printf ("\n Invalid Data Entered..");
                    }
                    else
                    {
                        // Copy next element value to current element 
                        for (i = new - 1; i < n - 1; i++)
                        {
                            bank[i] = bank[i + 1];
                        }
                     n--;
	                 printf ("\n\n\n information after delete a record ::");
	        	     printf("\nsr.no \t Account No.\t\tcustomer_Name\t Account Type \t Total Amount \t Mb.Number ");
	                    for (i = 0; i < n; i++)
	                    {
	                    	printf("\n %d \t %s\t%s\t \t %s \t %f \t %s ",i+1,bank[i].acc_no,bank[i].cust_name,bank[i].acc_type,bank[i].total_amount,bank[i].phno);		
                        }
                    }
		        	break;
	    	
			case 3: printf ("Enter the name you want to search  :: ");
	                scanf ("%s", cust_name);
	                for (i = 0; i < n; i++)
	                {
	                   value = strcmp (cust_name, bank[i].cust_name);	//compairing both the string using strmp() function 
	                 if (value == 0)
	                 	{
	                 		printf("\nsr.no \t Account No.\t\tcustomer_Name\t Account Type \t Total Amount \t Mb.Number ");
	                 		printf("\n %d \t %s\t%s\t \t %s \t %f \t %s ",i+1,bank[i].acc_no,bank[i].cust_name,bank[i].acc_type,bank[i].total_amount,bank[i].phno);		
		                    break;
		                }
	                }
	                if (value != 0)
	                {
	                   printf ("Result not found ");
	                   break;
	                }
	        break;
	           	
			case 4: printf("\n # Display the Database");
			    	printf("\n Following Information is in AUTODESK BANK ::");
	                printf("\nsr.no \t Account No.\t\tcustomer_Name\t Account Type \t Total Amount \t Mb.Number ");
                	for(i=0;i<n;i++)
			    	{
	                	printf("\n %d \t %s\t%s\t \t %s \t %f \t %s ",i+1,bank[i].acc_no,bank[i].cust_name,bank[i].acc_type,bank[i].total_amount,bank[i].phno);		
	             	}
				    break;
				    	    
			case 5: printf("\n # Modify or Edit the Record in Created Database:");
			          printf("\nEnter the customer name you want to search  :: ");
                     scanf("%s", cust_name);
                     for (i = 0; i < n; i++)
                    {
                       value = strcmp(cust_name, bank[i].cust_name);
                       if (value == 0)
                    {
                    printf("What do you want to change ::");
                    printf("\n1.customer name \n2.account type\n3.amount\n4.mobile number ");
                    scanf("%d", &choice1);

                    switch (choice1)
                    {
                        case 1:
                            printf("\n 1.New Customer Name :: ");
                       	    scanf("%s", &bank[i].cust_name);
                        break;

                        case 2:
                            printf("\n 2. New account type :: ");
                       		scanf("%s", &bank[i].acc_type);
                        break;
                        
                        case 3:
                            printf("\n 3. New Amount:: ");
                            scanf("%f", &bank[i].total_amount);
                        break;
                        
                        case 4:
                            printf("\n 4. New mobile no:: ");
                            scanf("%s", bank[i].phno);
                        break;
                    }
                    break;
                    }
                      if (value != 0)
                      {
                           printf("OOPs !! Invalid data found ");
                      }
                    break;
			break;
                 	}
	    }printf("\n Do you want to Continue?  \n  \t1. Y \t 2. N: ");
		scanf("%d",&ch2);
    }
	while(ch2!=2);
return 0;
}

	

