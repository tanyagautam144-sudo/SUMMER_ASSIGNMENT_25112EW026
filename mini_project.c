// Hospital Management System using Arrays, Strings and Functions

#include <stdio.h>

int patientID[100], age[100];
char name[100][50];
char disease[100][50];
int n = 0;

// Function to add patients
void addPatient()
{
    int i, count;

    printf("\nEnter Number of Patients to Add: ");
    scanf("%d", &count);

    for(i = 0; i < count; i++)
    {
        printf("\nPatient %d\n", n + 1);

        printf("Enter Patient ID: ");
        scanf("%d", &patientID[n]);

        printf("Enter Patient Name: ");
        scanf(" %[^\n]", name[n]);

        printf("Enter Age: ");
        scanf("%d", &age[n]);

        printf("Enter Disease: ");
        scanf(" %[^\n]", disease[n]);

        n++;
    }

    printf("\nPatient Record Added Successfully!\n");
}

// Function to display all patients
void displayPatients()
{
    int i;

    if(n == 0)
    {
        printf("\nNo Patient Records Found!\n");
        return;
    }

    printf("\n========== PATIENT RECORDS ==========\n");
    printf("ID\tName\t\tAge\tDisease\n");
    printf("-------------------------------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-15s%d\t%s\n",
               patientID[i], name[i], age[i], disease[i]);
    }
}

// Function to search patient
void searchPatient()
{
    int id, i;

    printf("\nEnter Patient ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(patientID[i] == id)
        {
            printf("\nPatient Found!\n");
            printf("Patient ID : %d\n", patientID[i]);
            printf("Name       : %s\n", name[i]);
            printf("Age        : %d\n", age[i]);
            printf("Disease    : %s\n", disease[i]);
            return;
        }
    }

    printf("\nPatient Not Found!\n");
}

// Function to update disease
void updateDisease()
{
    int id, i;

    printf("\nEnter Patient ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(patientID[i] == id)
        {
            printf("Enter New Disease: ");
            scanf(" %[^\n]", disease[i]);

            printf("Disease Updated Successfully!\n");
            return;
        }
    }

    printf("\nPatient Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n====== HOSPITAL MANAGEMENT SYSTEM ======\n");
        printf("1. Add Patient\n");
        printf("2. Display All Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Disease\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addPatient();
                break;

            case 2:
                displayPatients();
                break;

            case 3:
                searchPatient();
                break;

            case 4:
                updateDisease();
                break;

            case 5:
                printf("\nThank You for Using the Hospital Management System!\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 5);

    return 0;
}