#include<stdio.h>
#include"project.h"
int main()

{  
   char ch;int i;
    int opt,pt;char user[18],pwd[18];

 struct uid
 {
 	char username[50];
 	char password[50];
 };
	  struct uid id1[5],id2[5];
    
    strcpy(id1[0].username,"official1");
 	strcpy(id1[0].password,"official1pwd");
 	strcpy(id2[0].username,"student1");
 	strcpy(id2[0].password,"student1pwd");
 	
 	 strcpy(id1[1].username,"official2");
 	strcpy(id1[1].password,"official2pwd");
 	strcpy(id2[1].username,"student2");
 	strcpy(id2[1].password,"student2pwd");
 	
 	 strcpy(id1[2].username,"official3");
 	strcpy(id1[2].password,"official3pwd");
 	strcpy(id2[2].username,"student3");
 	strcpy(id2[2].password,"student3pwd");
 	
 	 strcpy(id1[3].username,"official4");
 	strcpy(id1[3].password,"official4pwd");
 	strcpy(id2[3].username,"student4");
 	strcpy(id2[3].password,"student4pwd");
 	
 	 strcpy(id1[4].username,"official5");
 	strcpy(id1[4].password,"official5pwd");
 	strcpy(id2[4].username,"student5");
 	strcpy(id2[4].password,"student5pwd");
 	
 	
     int j,flag,status=0;
	 HOMEPAGE();
     opt=LOGINPAGE();
   
	system("cls");
	switch(opt)
{
	case 1:printf("Enter the username:");
	       scanf("%s",user);
	       for(i=0;i<5;i++)
	       { 
	         status=strcmp(id1[i].username,user);
	         if(status==0)
	         break;
	        }
		    if(status==0)
	       {
		   printf("Enter the password:\n");
		   fflush(stdout);
	       for(j=0;;j++)
		   {   
		       pwd[j]=getch();
		    if(pwd[j]==13)
		   break;
		   if(pwd[j]==8)
		   {
		   	j=j-2;
		   	printf("\b");
		   	continue;
		   }
		   printf("*");
	       }
	       pwd[j]='\0';
	        }
	       else
	        printf("\nincorrect username..\n") ;
	    
	       flag=strcmp(id1[i].password,pwd);
	       if(flag==0)
	       {
	       	system("cls");
			   printf("\t\t\t\tLOGIN SUCESSFUL\n\n");
			   TECHMENU();
			   EXTRAMENU();
		   }
		   else printf("\nincorrect password..");
		   break;
	case 2:printf("Enter the username:");
	       scanf("%s",user);
	       for(i=0;i<5;i++)
	       { 
	         status=strcmp(id2[i].username,user);
	         if(status==0)
	         break;
	        }
		    if(status==0)
	       {
		   printf("Enter the password:\n");
		   fflush(stdout);
	       for(j=0;;j++)
		   {   
		       pwd[j]=getch();
		    if(pwd[j]==13)
		   break;
		    if(pwd[j]==8)
		   {
		   	j=j-2;
		   	printf("\b");
		   	continue;
		   }
		    printf("*");
	       }
	       pwd[j]='\0';
	        }
	       else
	        printf("\nincorrect username..") ;
	       flag=strcmp(id2[i].password,pwd);
	       if(flag==0)
	       {
	       	system("cls");
			   printf("\t\t\t\tLOGIN SUCESSFUL\n\n");
			   TECHMENU();
			   EXTRAMENU();
			   CLUBDETAILS();
		   }
		   else printf("\nincorrect password..");
	     
	       
	    break;
   
	       
	default:printf("\nSorry,you have choosen wrong option.Please select the correct option....");
} 

return 0;

}
	
	

