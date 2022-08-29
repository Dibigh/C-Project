	
	/**
          		  SAGARMATHA ENGINEERING COLLEGE STUDENT'S RECORD
        		---------------------------------------------------
	**/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>

// creating a structure of tag-name students

struct students
{
    char stu_name[100], department[100];
    
    struct Assestment_1_marks
	{
		int physics,Mathematics,Electrical,Drawing,Programming;
	}M1;
	 
	struct Assestment_2_marks
	{
		int physics,Mathematics,Electrical,Drawing,Programming;
	}M2;
	 
    char stu_number[100], stu_fathers_number[100], stu_mothers_number[100];
    char present_address[200], permanent_address[200];
    char stu_fathers_name[100], stu_mothers_name[100];
    char stu_blood_group[100];
    char university_name[100],semester[100], id[100];
    char college_name[100];
    int enrolled_year;
    
    struct DOB
	{
		int dd,mm,yy;
	}P;
	
};


// creating User-defined functions to perform specific tasks

void developers_info();
void menu();
void user_input();
void user_delete();
void user_search();
void all_records();
void user_add_more_details();
void modify();
void end_message();
void number_of_records();

// Main funtion

void main()
{
	developers_info();
	getch();
	
	system("cls");
	system("Color A");
	printf("\n\n");
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############           SAGARMATHA ENGINEERING COLLEGE          ############");
    printf("\n\t\t\t############                   SANEPA,LALIPUR      	       ############");
    printf("\n\t\t\t############                   BEI 2078 BATCH                  ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\n");
    menu();
}

// This function is used to Display the name of group members  

void developers_info()
{
	system("Color B");
	printf("\t\t\t\t\t\tTEAM MEMBERS:");
	printf("\n\n");
	system("Color B");
	printf("\n");
	printf("\t    *        ******    *    *    *****    *    *        *       ******      ");
	printf("\n\t   * *       *    *    *    *      *      **   *       * *      *         ");
	printf("\n\t  *   *      *   *     ******      *      *  * *      *   *     ******         ");
	printf("\n\t *  *  *     *    *    *    *      *      *   **     *  *  *         *     ");
	printf("\n\t*       *    ******    *    *    *****    *    *    *       *   ******     ");
	printf("\n");
	printf("\n");
	printf("\t*****      *****    ******    *****    *******    *    *");
	printf("\n\t*     *      *      *    *      *      *          *    *   ");
	printf("\n\t*     *      *      *   *       *      *  ****    ******       ");
	printf("\n\t*     *      *      *    *      *      *  *  *    *    *   ");
	printf("\n\t*****      *****    ******    *****    ****  *    *    *   ");
	printf("\n");
	printf("\n");
	printf("\t*    *    *****    *");
	printf("\n\t**   *      *      *      ");
	printf("\n\t*  * *      *      *         ");
	printf("\n\t*   **      *      *      ");
	printf("\n\t*    *    *****    ******     ");
}

// This function contains menu/options
void menu()
{
	int choice;
	do
	{
	printf("\n\t\t\t                 ************** MAIN MENU **************");
	printf("\n\n\t\t\t1.Add Student records");
        printf("\n\t\t\t2.Search Student");
        printf("\n\t\t\t3.View all records");
        printf("\n\t\t\t4.Delete Students Record");
        printf("\n\t\t\t5.Modify Student details");
        printf("\n\t\t\t6.Numbers of records");
		printf("\n\t\t\t0.Exit");
        printf("\n\n\n\t\t\tEnter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        	system("cls");
            user_input();
            break;
        case 2:
        	system("cls");
            user_search();
            break;
        case 3:
        	system("cls");
            all_records();
            break;
        case 4:
        	system("cls");
            user_delete();
            break;
        case 5:
        	system("cls");
        	int z;
        	COORD c;
        	c.X = 30;
    		c.Y = 8;
  			SetConsoleCursorPosition(
        	GetStdHandle(STD_OUTPUT_HANDLE), c);
  			printf("\n\t\t\tpress 1 to add more details");
        	printf("\n\t\t\tpress 2 to modify recorded details\n\t");
        	scanf("%d",&z);
			if(z==1)
			{
				user_add_more_details();	
			}
			else if(z==2)
			{
				modify();	
			}
			else
			{
				break;	
			}
        case 6:
        	system("cls");
        	number_of_records();
        	break;	
		case 0:
			system("cls");
            printf("\n\n\n\n\n\n\n\t\t\t\t\tThank you !!!\n\n\n\n\n");
            getch();
            getch();
			end_message();
			exit(1);
            break;
        default:
        	system("cls");
            printf("\n\n\n\t\t\tINVALID INPUT!!! Try again...\n\n");
        }
}while(1);
	
}

// This function is used to read datas from users and store in file
void user_input()
{
	system("cls");
	system("color D");
	struct students A[100];
	int i,num;
	FILE *pf;
	pf=fopen("record.txt","r");
	if(pf!=NULL)
	{
		printf("\n\n\n\n\t\t\t\t!!!File is already created. It contains data");
		getch();
		getch();
		fclose(pf);
	}
	else
	{
	pf=fopen("record.txt","w");	
	printf("\n\n\n\n\t\t\tEnter the numbers of records you want to add: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{	
		printf("\n\t\t\tEnter Your Name: ");
		scanf("\n\t\t\t%[^\n]s",A[i].stu_name);
		printf("\n\t\t\tEnter your Date of Birth (dd/mm/yy): ");
		scanf("\n\t\t\t%d,%d,%d",A[i].P.dd,A[i].P.mm,A[i].P.yy);
		printf("\n\t\t\tEnter your Father's name: ");
		scanf("\n\t\t\t%[^\n]s",A[i].stu_fathers_name);
		printf("\n\t\t\tEnter your Mother's name: ");
		scanf("\n\t\t\t%[^\n]s",A[i].stu_mothers_name);
		printf("\n\t\t\tEnter your Temporary address: ");
		scanf("\n\t\t\t%[^\n]s",A[i].present_address);
		printf("\n\t\t\tEnter your Permanent address: ");
		scanf("\n\t\t\t%[^\n]s",A[i].permanent_address);
		printf("\n\t\t\tEnter your phone number: ");
		scanf("\n\t\t\t%[^\n]s",A[i].stu_number);
		printf("\n\t\t\tEnter your Father's phone number: ");
		scanf("\n\t\t\t%[^\n]s",A[i].stu_fathers_number);
		printf("\n\t\t\tEnter your Mother's phone number: ");
		scanf("\n\t\t\t%[^\n]s",A[i].stu_mothers_number);
		printf("\n\t\t\tEnter your Blood group: ");
		scanf("\n\t\t\t%[^\n]s",A[i].stu_blood_group);
		printf("\n\t\t\tEnter your College name: ");
		scanf("\n\t\t\t%[^\n]s",A[i].college_name);
		printf("\n\t\t\tEnter your Enrolled year: ");
		scanf("\n\t\t\t%d",&A[i].enrolled_year);
		printf("\n\t\t\tEnter your Department name: ");
		scanf("\n\t\t\t%[^\n]s",A[i].department);
		printf("\n\t\t\tEnter your Semester: ");
		scanf("\n\t\t\t%[^\n]s",A[i].semester);
		printf("\n\t\t\tEnter your ID: ");
		scanf("\n\t\t\t%[^\n]s",A[i].id);
		printf("\n\t\t\tEnter your University name: ");
		scanf("\n\t\t\t%[^\n]s",A[i].university_name);
		fwrite(&A[i],sizeof(struct students),1,pf);
	}
		fclose(pf);

	}
}

// This function is used to delete record of students
void user_delete()
{
	struct students A;
	char name[100];
	char c[10];
	int found=0;
	int i=0,k=0;
	system("cls");
	system("color D");
	FILE *pf,*pf1;
	pf=fopen("record.txt","r");
	pf1=fopen("temp.txt","w");
	printf("\n");
	printf("\n\t\t\t");
	printf("Record you want to delete: ");
	scanf("\n\n\t\t\t%[^\n]s",name);
	while(fread(&A,sizeof(struct students),1,pf))
	{
		i=k;
		k++;
	if(strcmp(name,A.stu_name)!=0)
		{
		fwrite(&A,sizeof(struct students),1,pf1);
		found =1;
//      printf("\n\t\t\t\t\t");
//		printf("\n\t\t\t\t\t        The record you select is :-");
//		printf("\n\t\t\t\t\t---------------------------------------------");
//		printf("\n\n\t\t\tStudent's name: ");
//		puts(A[i].stu_name);
//		printf("\t\t\tDate of Birth: ");
//		printf("%d/%d/%d",A[i].P.dd,A[i].P.mm,A[i].P.yy);
//		printf("\n\t\t\tStudent's Father's name: ");
//		puts(A[i].stu_fathers_name);
//		printf("\t\t\tStudent's Mother's name: ");
//		puts(A[i].stu_mothers_name);
//		printf("\t\t\tStudent's Temporary address: ");
//		puts(A[i].present_address);
//		printf("\t\t\tStudent's Permanent address: ");
//		puts(A[i].permanent_address);
//		printf("\t\t\tStudent's Phone number: ");
//		puts(A[i].stu_number);
//		printf("\t\t\tStudent's Father's phone number: ");
//		puts(A[i].stu_fathers_number);
//		printf("\t\t\tStudent's Mother's phone number: ");
//		puts(A[i].stu_mothers_number);
//		printf("\t\t\tStudent's Blood Group: ");
//		puts(A[i].stu_blood_group);
//		printf("\t\t\tStudent's College name: ");
//		puts(A[i].college_name);
//		printf("\t\t\tStudent's enrolled year: ");
//		printf("%d",A[i].enrolled_year);
//		printf("\n\t\t\tStudent's Department name: ");
//		puts(A[i].department);
//		printf("\t\t\tStudent's semester: ");
//		puts(A[i].semester);
//		printf("\t\t\tStudent's ID: ");
//		puts(A[i].id);
//		printf("\t\t\tStudent's University name: ");
//		puts(A[i].university_name);
		}
		
	}
		fclose(pf);
		fclose(pf1);
		remove("record.txt");
		rename("temp.txt","record.txt");
//		if(found)
//		{
//			
//			printf("\n\n\t\t\t\tDo you want to delete this record: ");
//			printf("\n\t\t[!!!!! Once deleted can be recovered]");
//			scanf("%s",c);
//			if(c =="Y"||c =="y")
//			{
//			
//			printf("\n\t\t\tPress any key to continue......");
//			getch();
//			
//			printf("\n\t\t\tRecord deleted Succesfully");
//			getch();
//			}	
//		
//		}
//		if(!found)
//		{
//			printf("\n\t\t\tRecord doesnot found");
//			getch();
//		}
//			fclose(pf);
//			fclose(pf1);
//	
}

// This function used to search record of students by id
void user_search()
{
	char name[100];
	int found=0;
	system("cls");
	system("color D");
	struct students A;
	FILE *pf;
	int i,k; 
	pf= fopen("record.txt","r");
	if(pf == NULL)
	{
		printf("File not found");
		getch();
	}
	printf("\n\t\t\t");
	printf("Name you want to search: ");
	scanf("\n\n\t\t\t%[^\n]",name);
	//gets(name);
	while(fread(&A,sizeof(struct students),1,pf))
	{
	if(strcmp(name,A.stu_name)==0)
		{
		found =1;
		printf("\n\n\t\t\t\t\t");
		printf("\n\n\t\t\t\t\t        The record you searched is :-");
		printf("\n\n\t\t\t\t\t---------------------------------------------");
		printf("\n");
		printf("\n\n\t\t\tStudent's name: ");
		puts(A.stu_name);
		printf("\t\t\tDate of Birth: ");
		printf("%d/%d/%d",A.P.dd,A.P.mm,A.P.yy);
		printf("\n\t\t\tStudent's Father's name: ");
		puts(A.stu_fathers_name);
		printf("\t\t\tStudent's Mother's name: ");
		puts(A.stu_mothers_name);
		printf("\t\t\tStudent's Temporary address: ");
		puts(A.present_address);
		printf("\t\t\tStudent's Permanent address: ");
		puts(A.permanent_address);
		printf("\t\t\tStudent's Phone number: ");
		puts(A.stu_number);
		printf("\t\t\tStudent's Father's phone number: ");
		puts(A.stu_fathers_number);
		printf("\t\t\tStudent's Mother's phone number: ");
		puts(A.stu_mothers_number);
		printf("\t\t\tStudent's Blood Group: ");
		puts(A.stu_blood_group);
		printf("\t\t\tStudent's College name: ");
		puts(A.college_name);
		printf("\t\t\tStudent's enrolled year: ");
		printf("%d",A.enrolled_year);
		printf("\n\t\t\tStudent's Department name: ");
		puts(A.department);
		printf("\t\t\tStudent's semester: ");
		puts(A.semester);
		printf("\t\t\tStudent's ID: ");
		puts(A.id);
		printf("\t\t\tStudent's University name: ");
		puts(A.university_name);
		}
	}
		
	
		if(found!=1)	
		{
			printf("\n\n\t\t\t\tYour search record not found !!");
		}

	getch();
	getch();
	fclose(pf);
	
}

// This function used to add more details or for editing purpose
void user_add_more_details()
{
	system("cls");
	system("color D");
	struct students B;
	char X;
	int i,num;
	FILE *pf;
	pf=fopen("record.txt","a");
	if(pf == NULL)
	{
		printf("File not found");
		getch();
	}
	
		do
		{	
			printf("\n\t\t\tEnter Your Name: ");
			scanf("\n\t\t\t%[^\n]s",B.stu_name);
			printf("\n\t\t\tEnter your Date of Birth (dd/mm/yy): ");
			scanf("\n\t\t\t%d,%d,%d",&B.P.dd,&B.P.mm,&B.P.yy);
			printf("\n\t\t\tEnter your Father's name: ");
			scanf("\n\t\t\t%[^\n]s",B.stu_fathers_name);
			printf("\n\t\t\tEnter your Mother's name: ");
			scanf("\n\t\t\t%[^\n]s",B.stu_mothers_name);
			printf("\n\t\t\tEnter your Temporary address: ");
			scanf("\n\t\t\t%[^\n]s",B.present_address);
			printf("\n\t\t\tEnter your Permanent address: ");
			scanf("\n\t\t\t%[^\n]s",B.permanent_address);
			printf("\n\t\t\tEnter your phone number: ");
			scanf("\n\t\t\t%[^\n]s",B.stu_number);
			printf("\n\t\t\tEnter your Father's phone number: ");
			scanf("\n\t\t\t%[^\n]s",B.stu_fathers_number);
			printf("\n\t\t\tEnter your Mother's phone number: ");
			scanf("\n\t\t\t%[^\n]s",B.stu_mothers_number);
			printf("\n\t\t\tEnter your Blood group: ");
			scanf("\n\t\t\t%[^\n]s",B.stu_blood_group);
			printf("\n\t\t\tEnter your College name: ");
			scanf("\n\t\t\t%[^\n]s",B.college_name);
			printf("\n\t\t\tEnter your Enrolled year: ");
			scanf("\n\t\t\t%d",&B.enrolled_year);
			printf("\n\t\t\tEnter your Department name: ");
			scanf("\n\t\t\t%[^\n]s",B.department);
			printf("\n\t\t\tEnter your Semester: ");
			scanf("\n\t\t\t%[^\n]s",B.semester);
			printf("\n\t\t\tEnter your ID: ");
			scanf("\n\t\t\t%[^\n]s",B.id);
			printf("\n\t\t\tEnter your University name: ");
			scanf("\n\t\t\t%[^\n]s",B.university_name);
			fwrite(&B,sizeof(struct students),1,pf);
			getch();
			system("cls");
			COORD c;
        	c.X = 28;
    		c.Y = 8;
  			SetConsoleCursorPosition(
        	GetStdHandle(STD_OUTPUT_HANDLE), c);
        	printf(" Record added Sucessfully !!!!");
        	getch();
        	getch();
			printf("\n\t\t\tEnter your University name: ");
			printf("\n\t\t\tDo you want to add more records: ");
			scanf("%c",&X);
		}while(toupper(X)=='Y');
		fclose(pf);

	
}

// This function is used to display numbers of records
void number_of_records()
{
	struct students J;
	system("cls");
	system("color D");
	int count=0;
	FILE *pf;
	pf=fopen("record.txt","r");
	while(fread(&J,sizeof(struct students),1,pf))
	{
		count++;
	}
	printf("\n\t\t\tThe numbers of records is %d",count);
	getch();
	getch();
	fclose(pf);
}

// This function is used to modify previous recorded data
void modify()
{
	struct students D;
	system("cls");
	system("color D");
	FILE *pf;
	int i,k; 
	pf= fopen("record.txt","r");
	if(pf == NULL)
	{
		printf("File not found");
		getch();
	}
	while(fread(&D,sizeof(struct students),1,pf))
	{
		
	}
	
}

// This function is used to view all the recorded records
void all_records()
{
	//struct students D[10];
	struct students D;
	system("cls");
	system("color D");
	FILE *pf;
	int i,k; 
	pf= fopen("record.txt","r");
	if(pf == NULL)
	{
		printf("File not found");
		getch();
	}
	i=0;
	//while(fread(&D[k],sizeof(struct students),1,pf)!=NULL)
	printf("\n\n\t\t\t\t\t     The recorded records are as follows :-");
	printf("\n\n\t\t\t\t\t---------------------------------------------");
	printf("\n");
	while(fread(&D,sizeof(struct students),1,pf))
	{
		k=i;
		i++;
		printf("\n\t\t %d)",i);
		printf("\tStudent's name: ");
		puts(D.stu_name);
		printf("\t\t\tDate of Birth: ");
		printf("%d/%d/%d",D.P.dd,D.P.mm,D.P.yy);
		printf("\n\t\t\tStudent's Father's name: ");
		puts(D.stu_fathers_name);
		printf("\t\t\tStudent's Mother's name: ");
		puts(D.stu_mothers_name);
		printf("\t\t\tStudent's Temporary address: ");
		puts(D.present_address);
		printf("\t\t\tStudent's Permanent address: ");
		puts(D.permanent_address);
		printf("\t\t\tStudent's Phone number: ");
		puts(D.stu_number);
		printf("\t\t\tStudent's Father's phone number: ");
		puts(D.stu_fathers_number);
		printf("\t\t\tStudent's Mother's phone number: ");
		puts(D.stu_mothers_number);
		printf("\t\t\tStudent's Blood Group: ");
		puts(D.stu_blood_group);
		printf("\t\t\tStudent's College name: ");
		puts(D.college_name);
		printf("\t\t\tStudent's enrolled year: ");
		printf("%d",D.enrolled_year);
		printf("\n\t\t\tStudent's Department name: ");
		puts(D.department);
		printf("\t\t\tStudent's semester: ");
		puts(D.semester);
		printf("\t\t\tStudent's ID: ");
		puts(D.id);
		printf("\t\t\tStudent's University name: ");
		puts(D.university_name);

//		printf("\n\n\t\t\tStudents name: ");
//		puts(D.stu_name);
	}
		//printf("\n\n\t\t\tStudents name");
		//printf("\t\t\tStudents address");

/* Alternative way to print using for loop

	for(i=0;i<k;i++)
	{
		printf("\n\n\t\t\t");
		printf("\n\n\t\t\tStudents name: ");
		puts(D[i].stu_name);
		printf("\t\t\t");
		printf("\t\t\tStudents address: ");
		puts(D[i].permanent_address);
		
	}
*/	

	getch();
	getch();
	fclose(pf);
}

// This function is the termination part of this programme
void end_message()
{
	system("color 4");
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
	printf("\n\n\t\t *******     *    *     ******         *******    *     *    *****                  ");
	printf("\n\t\t    *        *    *     *              *          * *   *    *     *        ");
	printf("\n\t\t    *        *    *     *              *          *  *  *    *     *       ");
	printf("\n\t\t    *        ******     ******         *******    *   * *    *     *       ");
	printf("\n\t\t    *        *    *     *              *          *    **    *     *       ");
	printf("\n\t\t    *        *    *     ******         *******    *     *    *****      ");
	getch();
	getch();
	exit(1);
}
