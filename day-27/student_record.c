//Write a program to Create student record management system.
#include<stdio.h>
struct Student
{
    int rollNo;
    char name[50];
    int age;
    char course[30];
    float marks;
    float percentage;
    char grade;
    char gender[20] ;
};

int main()
{
    struct Student s[100];   // Array to store 100 student records

    int count = 0;           // Number of students stored
    int choice, i;
    int roll;
    int found;

    do {

        // Display Menu
        printf("\n STUDENT RECORD MANAGEMENT SYSTEM \n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            // ADD STUDENT 
            case 1:

                printf("\nEnter Roll Number: ");
                scanf("%d", &s[count].rollNo);

                printf("Enter Name: ");
                scanf(" %[^\n]", s[count].name);

                printf("Enter Age: ");
                scanf("%d", &s[count].age);

                printf("Enter Gender: ");
                scanf("%s", s[count].gender);

                printf("Enter Course: ");
                scanf(" %[^\n]", s[count].course);

                printf("Enter Marks: ");
                scanf("%f", &s[count].marks);

                count++;

                printf("\nStudent Added Successfully!\n");
                break;
                // VIEW STUDENTS
            case 2:

                if(count == 0)
                {
                    printf("\nNo Records Found!\n");
                }
                else
                {
                    printf("\n Student Records \n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\nStudent %d\n", i + 1);

                        printf("Roll Number : %d\n", s[i].rollNo);
                        printf("Name        : %s\n", s[i].name);
                        printf("Age         : %d\n", s[i].age);
                        printf("Gender      : %s\n", s[i].gender);
                        printf("Course      : %s\n", s[i].course);
                        printf("Marks       : %.2f\n", s[i].marks);
                    }
                }
                break;

                 //  SEARCH STUDENT 
            case 3:

                found = 0;

                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                for(i = 0; i < count; i++)
                {
                    if(s[i].rollNo == roll)
                    {
                        printf("\nStudent Found\n");

                        printf("Roll Number : %d\n", s[i].rollNo);
                        printf("Name        : %s\n", s[i].name);
                        printf("Age         : %d\n", s[i].age);
                        printf("Gender      : %s\n", s[i].gender);
                        printf("Course      : %s\n", s[i].course);
                        printf("Marks       : %.2f\n", s[i].marks);

                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Student Not Found!\n");
                }

                break;
//  UPDATE STUDENT 
            case 4:

                found = 0;

                printf("Enter Roll Number to Update: ");
                scanf("%d", &roll);

                for(i = 0; i < count; i++)
                {
                    if(s[i].rollNo == roll)
                    {
                        printf("Enter New Name: ");
                        scanf(" %[^\n]", s[i].name);

                        printf("Enter New Age: ");
                        scanf("%d", &s[i].age);

                        printf("Enter New Gender: ");
                        scanf("%s", s[i].gender);

                        printf("Enter New Course: ");
                        scanf(" %[^\n]", s[i].course);

                        printf("Enter New Marks: ");
                        scanf("%f", &s[i].marks);

                        printf("Record Updated Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student Not Found!\n");
                }

                break;
                                 // exit
                 case 5:

                printf("\nThank You! Program Ended.\n");
                break;

            //INVALID CHOICE 
            default:

                printf("\nInvalid Choice! Please Try Again.\n");
        }


    } while(choice!=5);
return 0;
}
