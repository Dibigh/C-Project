	
	/**
          		  SAGARMATHA ENGINEERING COLLEGE STUDENT'S RECORD
        		---------------------------------------------------
	**/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<ctype.h>

// creating a structure of tag-name students

struct students
{
    char stu_name[50], department[20];
    float Assestment_1_marks, Assestment_2_marks; 
    long long int stu_number, stu_fathers_number, stu_mothers_number;
    char present_address[200], permanent_address[200];
    char stu_fathers_name[50], stu_mothers_name[50];
    char stu_blood_group[7];
    char university_name[100], section[20], semester[5], id[20];
    char college_name[100], hsc_board[20];
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
void user_add_more_details();
void end_message();
void ask_user();

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
	printf("\t\t\t                 ************** MAIN MENU **************");
	printf("\n\n\t\t\t1.Add Student");
        printf("\n\t\t\t2.Search Student");
        printf("\n\t\t\t3.Delete Student");
        printf("\n\t\t\t4.Update Student details");
        printf("\n\t\t\t0.Exit");
        printf("\n\n\n\t\t\tEnter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            user_input();
            break;
        case 2:
            user_search();
            break;
        case 3:
            user_delete();
            break;
        case 4:
            user_add_more_details();
            break;
        case 0:
            printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
            exit(1);
            break;
        default:
        	system("cls");
            printf("\n\n\n\t\t\tINVALID INPUT!!! Try again...\n\n");
        }
}while(choice!=0);
	
}

// This function is used to read datas from users and store in file
void user_input()
{
	
}

// This function is used to delete record of students
void user_delete()
{
	
}

// This function used to search record of students by id
void user_search()
{
	
}

// This function used to add more details or for editing purpose
void user_add_more_details()
{
	
	
}


// This function is to ask user whether to continue or not
void ask_user()
{


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
	exit(1);
}
