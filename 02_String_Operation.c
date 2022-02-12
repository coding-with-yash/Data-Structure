/*
FDS ASSIGNMENT :02
WRITE A C PROGRAM FOR STRING OPERATIONS..
   NAME: More Kishor Arjun
   Roll no : 40
   Batch : S3
*/

#include<stdio.h>
int main()
{
	char str1[50],str2[50] ;                 
	int ch,ch2;
	int i=0,j=0,len=0;
	printf("----------------------------------------------------------------------------------");
    printf("\n Welcome in String Library !!!");
	printf("\n Which Operation you want to perform on string ? ");
	printf("\n Your Choices are: \n\t 1. Length of the given String \t  2. Compare the Two given String \n\t 3. Reverse the string \t\t  4. Copy the string \n\t 5. Palindrome or not ");
   	printf("\n----------------------------------------------------------------------------------");
    do{
	
	printf("\n Enter your choice : ");
	scanf("%d", &ch);

	printf(" Enter the String: ");
   	scanf("%s",str1);
	
	switch(ch)
	{	   
	     case 1: //length of given string 
		    {
		       while(str1[len]!='\0')
                    {
                     	len++;
				    }
			    printf(" Length of given String is: %d ",len);
			    printf("\n----------------------------------------------------------------------------------");
	        }
            break;
            
        case 2: // Compare 2 given strings:
            {
           		printf(" Enter the Second String to compare: ");
            	scanf("%s",str2);
    	   	    {
    	         	while(str1[i]!='\0' && str2[j]!='\0')
    	    	        if(str1[i]==str2[j])
    	             	{
				             i++;
    	    	             j++;
    	                }
    	                else
    	            break;
		    	}
		    	if(str1[i]==str2[j])
			         printf(" Given Strings are Same !!");
		    	else
			          printf(" Given strings are not same !!");
			}
		    printf("\n----------------------------------------------------------------------------------");
           	break;
           	
		case 3: // Reverse the given string:
		    {
		       while(str1[i]!='\0')
				{
					i++;
				}
				for(i=i-1;i>=0;i--)
				{
					str2[j++]=str1[i];
				}
				str2[j]='\0';
				printf(" Reverse String is: %s",str2);
	    	}
	    	printf("\n----------------------------------------------------------------------------------");
	    	break;
	    	
		case 4: // Copy the given string:
	    	{  
               while(str1[i]!='\0')
                {
                	str2[i]=str1[i];
                	i++;
                }
                str2[i]='\0';
                printf(" The Copied String: %s",str2);
		    }
	     	printf("\n----------------------------------------------------------------------------------");
	    	break;
	    	
		case 5: // Verify palindrome or not:
		    {
    	    	while(str1[i] != '\0')                    
    		    {
    		    	i++;
		    	}
    	        j=i-1;//palindrome
    	       	i=0;
    		    while(i>=j)
    		    { 
    			    if(str1[i]==str1[j])
			        {
			    	    i++; j--;
				    }
		    	else
		    	    {
			    	    break;
		    	    }
		        }
	         	if(str1[i]==str1[j])
	            	printf(" String is Palindrome ");
	        	else
	             	printf(" String is not Palindrome ");
	        }
	        printf("\n----------------------------------------------------------------------------------");
	    	break; 
			default : printf("   Error !! This choice is not available !  ");  
		}
            printf("\n Do you want to Continue?  \n  \t1. Y \t 2. N :-> ");
	      	scanf("%d",&ch2);
	      	printf("\n----------------------------------------------------------------------------------");

	}
	while(ch2!=2);
return 0;
}


/*OUTOUT ->>
------------------------------------------------------------------------------
Welcome in String Library !!! 
Which Operation you want to perform on string?
Your Choices are:
      1. Length of the given String    2. Compare the Two given String
      3. Reverse the string            4. Copy the string
      5. Palindrome or not
------------------------------------------------------------------------------
Enter your choice: 1 
Enter the String: ENGINEERING .
Length of given String is: 11
------------------------------------------------------------------------------
    Do you want to Continue? 1. Y 2. N :-> 1
------------------------------------------------------------------------------
Enter your choice : 2 
Enter the String: ENGINEERING .
Enter the Second String to compare: engineering 
Given strings are not same !! 
------------------------------------------------------------------------------
    Do you want to Continue? 1. Y 2. N :-> 1
------------------------------------------------------------------------------
Enter your choice: 3 
Enter the String: SANJIVANI .
Reverse String is: INAVIJNAS .
------------------------------------------------------------------------------
    Do you want to Continue? 1. Y 2. N:-> 1
------------------------------------------------------------------------------
Enter your choice: 4 
Enter the String: SANJIVANI .
The Copied String: SANJIVANI .
  ----------------------------------------------------------------------------
    Do you want to Continue? 1. Y 2. N:-> 1
------------------------------------------------------------------------------
Enter your choice: 5 
Enter the String: SANJIVANI 
String is not Palindrome 
------------------------------------------------------------------------------
    Do you want to Continue? 1. Y 2. N:-> 1
------------------------------------------------------------------------------
Enter your choice: 5 
Enter the String: MADAM 
String is Palindrome 
------------------------------------------------------------------------------
    Do you want to Continue? 1. Y 2. N:-> 2
------------------------------------------------------------------------------
Process exited...*/
