//program for the project work...1(CBIT professional bodies system ...)
#include<stdio.h>
#include<conio.h>
#include<string.h>

void HOMEPAGE()                                                                                      
{
	
printf("\n");
printf("\n");
printf("\n");
printf("\t\t ******************************************************************\n");
printf("\t\t *    ******          ********        ******          **********  *\n");
printf("\t\t *  **       **       *      *       *      *         *           *\n");
printf("\t\t * *                  *      *       *       *        *           *\n");
printf("\t\t * *                  *      *       *       *        *           *\n");
printf("\t\t * *                  ********       ********         **********  *\n");
printf("\t\t * *                  *              *       *                 *  *\n");
printf("\t\t * *                  *              *       *                 *  *\n");
printf("\t\t *  **       **       *              *      *                  *  *\n");
printf("\t\t *    ******          *               ******          **********  *\n");
printf("\t\t ******************************************************************\n");
printf("\n\t\t Chaitanya Bharathi institute of technology Proffesional Bodies System......\n");
printf("\n");
printf("\n");

printf("*********************************");printf("\t\t\t\t*********************************\n");
printf("*\t\t\t\t*\t\t\t\t*\t\t\t\t*\n");
printf("*\t\t\t\t*\t\t\t\t*\t\t\t\t*\n");
printf("*\t//Technical clubs//\t*\t\t\t\t*    //Extra Circular clubs//\t*\n");
printf("*\t\t\t\t*\t\t\t\t*\t\t\t\t*\n");
printf("*  a.ROBOTICS&INNOVATION\t*\t\t\t\t*  a.Chaitanya Samskruthi\t*\n");
printf("*  b.CEA   \t\t\t*\t\t\t\t*  b.Chaitanya Seva\t\t*\n");
printf("*  c.MEA   \t\t\t*\t\t\t\t*  c.Chaitanya REETHI   \t*\n");
printf("*  d.IEEE  \t\t\t*\t\t\t\t*  d.Chaitanya KREEDA\t\t*\n");
printf("*  e.COSC  \t\t\t*\t\t\t\t*  e.Chaitanya SMRITHI\t\t*\n");
printf("*  f.IICHE  \t\t\t*\t\t\t\t*\t\t\t\t*\n");
printf("*\t\t\t\t*\t\t\t\t*\t\t\t\t*\n");
printf("*\t\t\t\t*\t\t\t\t*\t\t\t\t*\n");
printf("*\t\t\t\t*\t\t\t\t*\t\t\t\t*\n");
printf("*********************************\t\t\t\t*********************************\n");
}


	int LOGINPAGE()
	{
	int opt;                                                        
	printf("\n\n\n1. CBIT OFFICE LOGIN:\t\t\t\t\t\t");
	printf("2. CBIT STUDENT LOGIN:\t");
	printf("\n\n\nSelect one of the above login option:");
	scanf("%d",&opt);
	return opt;
   }
 
 void TECHMENU()
{   printf("\n--------------------------------------------------------------------\n");
	printf("\t\tTechnical Clubs:\t\t\t\t\t");
	printf("\n--------------------------------------------------------------------\n");
	printf(" 1.CEA\n 2.MEA\n 3.ROBOTICS&INNOVATON\n 4.SAE,ASME\n 5.IEEE\n 6.IEEE Student Branch\n 7.IEEE Signal processing society SPS");
	printf(" 8.Makers of India\n 9.IETE  STUDENTS FORUM\n 9.COSC(CSE)\n 10.COSC(IT)\n 11.IICHE\n 12.Biotechnology\n 13.Digital Transactions Competence");
	printf(" 14.Ramnaujan Maths Club\n");
	printf("\n--------------------------------------------------------------------\n");
}

void EXTRAMENU()
{
    printf("\n--------------------------------------------------------------------\n");
	printf(" \t\tExtra Circular Activities:\t\t\t");
	printf("\n--------------------------------------------------------------------\n");
	printf(" 1.Chaitanya Samskruthi\n\ta.Chaitanya Lasya\n\tb.Chaitanyah Geethi\n\tc.Chaitanya Vaadya\n\td.Chaitanya Chaya\n\te.Chaitanya Sahithi\n");
	printf(" 2.Chaitanya Seva \n\ta.NSS\n\tb.Street Cause\n\tc.Enggineers without Borders\n");
	printf(" 3.Chaitanya Reethi\n\ta.Parivirtha\n\tb.Energy Savers club\n\tc.Chaitanya Teja\n\td.Chaitanya Svaasthya\n");
	printf(" 4.Chaitanya Kreeda\n 5.Chaitanya Smrithi\n");
	printf("\n-------------------------------------------------------------------\n");
}


void PRINT_TECHCLUBS()
{

struct details
{   
    int sno;
    char clb[100];
    char name[100];
    char mobile[12];
	char dept[100];
};
struct details  club[15];
int i;
while(i<15)
{
	club[i].sno=i+1;
	i++;
}
   
  strcpy(club[0].clb,"CEA\t\t\t\t\t");
  strcpy(club[1].clb,"MEA\t\t\t\t\t");
  strcpy(club[2].clb,"Robotics&innovation\t\t\t");
  strcpy(club[3].clb,"SAE,ASME\t\t\t\t");
  strcpy(club[4].clb,"IEEE\t\t\t\t\t");
  strcpy(club[5].clb,"IEEE CBIT student Branch\t\t");
  strcpy(club[6].clb,"IEEE CBIT sinal processing society process");
  strcpy(club[7].clb,"makers of india\t\t\t\t");
  strcpy(club[8].clb,"ISF\t\t\t\t\t");
  strcpy(club[9].clb,"COSC\t\t\t\t\t");
  strcpy(club[10].clb,"COSC\t\t\t\t\t");
  strcpy(club[11].clb,"IICHE\t\t\t\t\t");
  strcpy(club[12].clb,"Bioengineering&Biotechnology\t\t");
  strcpy(club[13].clb,"Digital Transactions Competence\t\t");
  strcpy(club[14].clb,"Ramanujan Maths Club\t\t\t");
  
  strcpy(club[0].name,"MS.N,Lalitha Kumari\t\t\t\t\t\t");
  strcpy(club[1].name,"Dr.S.Soloman Raj ,asst.prof;Sri.P.Kiran Kumar ,asst.prof");
  strcpy(club[2].name,"Smt.P.Anjani Devi ,asst.prof\t\t\t\t\t");
  strcpy(club[3].name,"Dr.G.Laxmaiah ,prof\t\t\t\t\t\t");
  strcpy(club[4].name,"Dr.P.Venkata Prasad ,prof\t\t\t\t\t");
  strcpy(club[5].name,"G.Mallikarjuna Rao ,asst.prof\t\t\t\t\t");
  strcpy(club[6].name,"Sri.T.Sridar ,asst.prof;Sri Ranjith Pulyala ,asst.prof\t");
  strcpy(club[7].name,"Sri P Sathish ,asst.prof;Sri N.Jagan Mohan Reddy\t");
  strcpy(club[8].name,"G.Mallikarjuna Rao ,asst.prof\t\t\t\t\t");
  strcpy(club[9].name,"Mr.R.Srikanth,asst.prof\t\t\t\t\t\t");
  strcpy(club[10].name,"Mr.R.Srikanth,asst.prof\t\t\t\t\t\t");
  strcpy(club[11].name,"Dr.Harsha Nagar ,asst.prof;Dr.P.V.Naga Prapurna,Associate Prof");
  strcpy(club[12].name,"Dr.G.Vijaya Laxmi,asst.prof\t\t\t\t\t");
  strcpy(club[13].name,"Dr.Naga Raja Prasad Goli,asst prof\t\t\t\t");
  strcpy(club[14].name,"Dr.Mamatha Thakur ,asst prof\t\t\t\t\t");
  
   strcpy(club[0].mobile,"9032809270");
   strcpy(club[1].mobile,"9949655133");
   strcpy(club[2].mobile,"7032576934");
   strcpy(club[3].mobile,"9849959218");
   strcpy(club[4].mobile,"9848753742");
   strcpy(club[5].mobile,"9866047394");
   strcpy(club[6].mobile,"8801206497");
   strcpy(club[7].mobile,"9177545484");
   strcpy(club[8].mobile,"9866047394");
   strcpy(club[9].mobile,"8978259394");
   strcpy(club[10].mobile,"8978259394");
   strcpy(club[11].mobile,"9581971643");
   strcpy(club[12].mobile,"9849664939");
   strcpy(club[13].mobile,"9885191683");
   strcpy(club[14].mobile,"9618778184");
   
   strcpy(club[0].dept,"Civil"); 
   strcpy(club[1].dept,"Mechanical "); 
   strcpy(club[2].dept,"Mechanical ");
   strcpy(club[3].dept,"Mechanical ");
   strcpy(club[4].dept,"Electrical and Electronics ");
   strcpy(club[5].dept,"Electrical and Communications");
   strcpy(club[6].dept,"Electrical and Communications ");
   strcpy(club[7].dept,"Electrical and Communications ");
   strcpy(club[8].dept,"Electrical and Communications ");
   strcpy(club[9].dept,"Computer Science ");
   strcpy(club[10].dept,"Information Technology ");
   strcpy(club[11].dept,"Chemical  engineering");
   strcpy(club[12].dept,"Bio Technology");
   strcpy(club[13].dept,"MCA");
   strcpy(club[14].dept,"Mathematics");
   
   
   
  printf("\n\n\n=======================================================================================================================================================================\n");
  printf("\t\t\t\t\t\t\t\tWELCOME TO CBIT  CLUB MANAGEMENT SYSTEM\t\t\t\t\t\t\t\t");
  printf("\n=======================================================================================================================================================================\n");

  printf("S.No       Technical club  \t\t\t\t      Name of the faculty/Co-Ordinator\t\t\t\t\tMobileno\t\tDepartment\n");
  printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
  for(i=0;i<15;i++)
  printf("%d\t%s\t%s\t%s\t %s\n",i+1,club[i].clb,club[i].name,club[i].mobile,club[i].dept);
   printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}

void SAMSKRUTHI()
{
	
int i=0;
struct extraclb
{
   int sno;
   char nam[100];
   char faculty[100];
   char cofaculty[100];
   long long int fatyno;
   	
};
 
 struct extraclb one[5];
 
 strcpy(one[0].nam,"Chaitanya Lasya\t");
 strcpy(one[0].faculty,"Sri P.R.K.Prasad ,asst.prof");
 strcpy(one[0].cofaculty,"Smt.T.L.Lalithamba ,Sr.assistant");
 one[0].fatyno=9848223473;
 
 strcpy(one[1].nam,"Chaitanya Geethi");
 strcpy(one[1].faculty,"Sri.G.Natraj,asst.prof\t");
 strcpy(one[1].cofaculty,"Dr.Bishwambhar Mishra,asst.prof\t");
 one[1].fatyno=7036442532;
 
 strcpy(one[2].nam,"Chaitanya Vadya\t");
 strcpy(one[2].faculty,"Dr.B.sreenivas Reddy,prof");
 strcpy(one[2].cofaculty,"Sri M.Shipley,TechGr-ii,asst.prof");
 one[2].fatyno=9912085108;
 
 strcpy(one[3].nam,"Chaitanya Chaya\t");
 strcpy(one[3].faculty,"Sri.srinivas Andoju,asst.prof");
 strcpy(one[3].cofaculty,"Sri.T.N.Aditya,asst.prof\t\t");
 one[3].fatyno=9985868153;
 
 strcpy(one[4].nam,"Chaitanya Sahithi");
 strcpy(one[4].faculty,"Dr.G.Suresh Babu,prof\t");
 strcpy(one[4].cofaculty,"Smt.A.Vijaya Laxmi,asst.prof\t");
 one[4].fatyno=9849533161;
 
  printf("\n\n\n=======================================================================================================================================================================\n");
  printf("\t\t\t\t\t\t\t\tWELCOME TO  CHAITANYA SAMSKRUTHI CLUB\t\t\t\t\t\t\t\t");
  printf("\n=======================================================================================================================================================================\n");

  printf("S.No        Club  \t\tName of the faculty/Co-Ordinator\t  Name of the Co-CoOrdinator\t\t\t\tMobileno\n");
  printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 for(i=0;i<5;i++)
 printf("%d\t%s\t%s\t\t%s\t\t\t\%lld\t\t\n",i+1,one[i].nam,one[i].faculty,one[i].cofaculty,one[i].fatyno);
  
  printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

}
void SEVA()
{

   int i=0;
struct extraclb
{
   int sno;
   char nam[100];
   char faculty[100];
   char cofaculty[100];
   long long int fatyno;
   	
};
 
 struct extraclb two[4];
 
   strcpy(two[0].nam,"Chaitanya Seva\t\t\t");
 strcpy(two[0].faculty,"Dr.M.Swamy Das,prof&JD-Academics");
 strcpy(two[0].cofaculty,"Dr.M.GaneshwarRao,prof\t\t");
 two[0].fatyno=9490316979;

 strcpy(two[1].nam,"NSS\t\t\t\t");
 strcpy(two[1].faculty,"Dr.M.GaneshwarRao,prof\t\t");
 strcpy(two[1].cofaculty,"Sri K.Sudarsshan Reddy,Asst.prof");
 two[1].fatyno=9291522525;
 
 strcpy(two[2].nam,"Street Cause\t\t\t");
 strcpy(two[2].faculty,"Dr.A.Vani,Assoc.prof\t\t");
 strcpy(two[2].cofaculty,"Dr.P.Kowstubha,Assoc.prof\t");
 two[2].fatyno=9676402006;
 
strcpy(two[3].nam,"Engineers without Borders\t");
 strcpy(two[3].faculty,"Sri M.Thiruathaiah,Asst.prof\t");
 strcpy(two[3].cofaculty,"Sri C.Srisailam,Asst.prof\t");
 two[3].fatyno=9032838993;
 
 
 
  printf("\n\n\n=======================================================================================================================================================================\n");
  printf("\t\t\t\t\t\t\t\tWELCOME TO  CHAITANYA SEVA CLUB\t\t\t\t\t\t\t\t");
  printf("\n=======================================================================================================================================================================\n");

  printf("S.No        Club  \t\t\t\tName of the faculty/Co-Ordinator\t\tName of the Co-CoOrdinator\t\t\t\tMobileno\n");
  printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 for(i=0;i<4;i++)
 printf("%d\t%s\t%s\t\t%s\t\t\t\%lld\t\t\n",i+1,two[i].nam,two[i].faculty,two[i].cofaculty,two[i].fatyno);
  
  printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}

void REETHI()
 {
 
   int i=0;
struct extraclb
{
   int sno;
   char nam[100];
   char faculty[100];
   char cofaculty[100];
   long long int fatyno;
   	
};
  struct extraclb three[5];
 
 strcpy(three[0].nam,"Chaitanya Reethi");
 strcpy(three[0].faculty,"Dr.P.Prabhakar Reddy,prof");
 strcpy(three[0].cofaculty,"Dr.P.V.Nagaprapurna,Assoc.prof\t");
 three[0].fatyno=9885256057;

 strcpy(three[1].nam,"Parivirtha\t");
 strcpy(three[1].faculty,"Smt.K.Manasa ,Asst.prof\t");
 strcpy(three[1].cofaculty,"Smt.M.Karthika Kishore,Asst.prof");
 three[1].fatyno=8333090365;

strcpy(three[2].nam,"Enery Savers Club");
 strcpy(three[2].faculty,"Dr.T.Muralikrishna,Asst.prof");
 strcpy(three[2].cofaculty,"Dr.N.Vasntha Gour,Asst.prof\t\t");
 three[2].fatyno=9052221446;
 
 strcpy(three[3].nam,"Chaitanya Teja");
 strcpy(three[3].faculty,"Dr.P.Prabhakar Reddy,prof");
 strcpy(three[3].cofaculty,"Smt.V.Sandhya,Asst.prof\t");
 three[3].fatyno=9701540189;

 strcpy(three[4].nam,"Chaianya Svaasthya");
 strcpy(three[4].faculty,"Dr.P.V.Naga Prapurna,Assoc.prof");
 strcpy(three[4].cofaculty,"Sri.Sreenivas Andoju,Asst.prof\t\t");
 three[4].fatyno=9000356111;
 
  printf("\n\n\n=======================================================================================================================================================================\n");
  printf("\t\t\t\t\t\t\t\tWELCOME TO  CHAITANYA REETHI CLUB\t\t\t\t\t\t\t\t");
  printf("\n=======================================================================================================================================================================\n");
  printf("S.No        Club  \t\tName of the faculty/Co-Ordinator\t  Name of the Co-CoOrdinator\t\t\t\tMobileno\n");
  printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 for(i=0;i<3;i++)
 printf("%d\t%s\t%s\t\t%s\t\t\t\%lld\t\t\n",i+1,three[i].nam,three[i].faculty,three[i].cofaculty,three[i].fatyno);
  
  printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}

void  KREEDA()
{

 int i=0;
struct extraclb
{
   int sno;
   char nam[100];
   char faculty[100];
   char cofaculty[100];
   long long int fatyno;
   	
};
 struct extraclb four[3];
 
 strcpy(four[0].nam,"Chaianya Kreeda\t");
 strcpy(four[0].faculty,"Dr.G.Shyam Mohan Reddy,Head");
 strcpy(four[0].cofaculty,"  Dr.M.V.Krishna Rao ,prof\t\t");
 four[0].fatyno=9490754235;
 
  
  printf("\n\n\n=======================================================================================================================================================================\n");
  printf("\t\t\t\t\t\t\t\tWELCOME TO  CHAITANYA KREEEDA CLUB\t\t\t\t\t\t\t\t");
  printf("\n=======================================================================================================================================================================\n");
  printf("S.No        Club  \t\tName of the faculty/Co-Ordinator\t  Name of the Co-CoOrdinator\t\t\t\tMobileno\n");
  printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 for(i=0;i<1;i++)
 printf("%d\t%s\t%s\t\t%s\t\t\t\%lld\t\t\n",i+1,four[i].nam,four[i].faculty,four[i].cofaculty,four[i].fatyno);
  
  printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}
 
  void SMRITHI()
 {
  int i=0;
struct extraclb
{
   int sno;
   char nam[100];
   char faculty[100];
   char cofaculty[100];
   long long int fatyno;
   	
};
   struct extraclb five[3];
  
   strcpy(five[0].nam,"Chaitanya Smrithi");
   strcpy(five[0].faculty,"Dr.Suresh Pabboju");
   strcpy(five[0].cofaculty,"Dr.K.Sagar,prof");
   five[0].fatyno=9849400136;
 
  printf("\n\n\n=======================================================================================================================================================================\n");
  printf("\t\t\t\t\t\t\t\tWELCOME TO  CHAITANYA SMRITHI CLUB\t\t\t\t\t\t\t\t");
  printf("\n=======================================================================================================================================================================\n");
  printf("S.No        Club  \t\tName of the faculty/Co-Ordinator\t  Name of the Co-CoOrdinator\t\t\t\tMobileno\n");
  printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
 for(i=0;i<1;i++)
 printf("%d\t%s\t%s\t\t%s\t\t\t\%lld\t\t\n",i+1,five[i].nam,five[i].faculty,five[i].cofaculty,five[i].fatyno);
  
  printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
}
 
 void CLUBDETAILS()
 
 {  int pt;
			   printf("\n\n\t\t\t\t\t****MENU****\t\n");
			   printf("1.Technical Clubs\t\t2.Chaitanya  SAMSKRUTHI \t\t3.Chaitanya SEVA\n4.Chaitanya REETHI\t\t5.Chaitanya KREEDA\t\t\t6.Chaitanya SMRITHI.\n");
			   printf("\n\nENTER THE CLUB NO TO VIEW DETAILS FROM THE MENU ...\n");
			   scanf("%d",&pt);
			   system("cls");
			    switch(pt)
			    {  case 1:PRINT_TECHCLUBS();
			              break;
			       case 2:SAMSKRUTHI();
			             break;
			       case 3:SEVA();
			              break;
			       case 4:REETHI();
			             break;
			       case 5:KREEDA();
			             break;
			       case 6:SMRITHI();
			             break;
			       default:printf("Wrong input..");
			    	
				}
			}




 
 
