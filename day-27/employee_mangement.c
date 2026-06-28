//Write a program to Create employee management system
#include<stdio.h>
struct employee 
{
    int age ;
    char name[50];
    char gender[20];
    int salary ;
    char department[50];
    int idno  ;
    char designation[50];
    int phone ;
};
int main()
{
    struct employee s[100];
    int id ;
    int choice , i  ;
    char found ;
    int count = 0 ;

    do {

        // Display Menu
        printf("\n EMPLOYEE RECORD MANAGEMENT SYSTEM \n");
        printf("1. Add employee\n");
        printf("2. View All employee\n");
        printf("3. Search employee\n");
        printf("4. Update employee \n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            // add employee
            case 1:

            printf("\nenter id of employee:");
            scanf("%d",&s[count].idno);
            printf("\nenter name of employee :");
            scanf("%s",&s[count].name);
            printf("\nenter gender of the employee :");
            scanf("%s",&s[count].gender);
            printf("\nenter department :");
            scanf("%s",&s[count].department);
            printf("\nenter designation:");
            scanf("%s",&s[count].designation);
            printf("\nenter phone no :");
            scanf("%d",&s[count].phone);
            printf("\nenter salary of employee:");
            scanf("%d",&s[count].salary);


            count++;

            printf("\nemployee added succesfully");
            break;
            // viewing students
            case 2:
            if(count == 0){
                printf("\nno records found");

            }
            else {
                printf("\n employee Records \n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\n id of employee: %d\n",s[i].idno);
            
                        printf("\n name of employee : %s\n",s[i].name);
           
                        printf("\n gender of the employee: %s\n",s[i].gender);
          
                        printf("\n department : %s\n",s[i].department);
            
                        printf("\n designation: %s\n",s[i].designation);
            
                        printf("\n phone no : %d\n",s[i].phone);
            
                        printf("\n salary of employee: %d\n",s[i].salary);

            
                    }
            }break;
          //search
            case 3: 
            found = 0 ;
            printf("Enter id to Search: ");
                scanf("%d", &id);

                 for(i = 0; i < count; i++)
                {
                    if(s[i].idno == id)
                    {
                        printf("\nStudent Found\n");
                        printf("\n id of employee: %d\n",s[i].idno);
            
                        printf("\n name of employee : %s\n",s[i].name);
           
                        printf("\n gender of the employee: %s\n",s[i].gender);
          
                        printf("\n department : %s\n",s[i].department);
            
                        printf("\n designation: %s\n",s[i].designation);
            
                        printf("\n phone no : %d\n",s[i].phone);
            
                        printf("\n salary of employee: %d\n",s[i].salary);
                        
                        found = 1;
                        break;


        }
        if(found == 0){
            printf("\nemployee not found");
        }
        break ;
//update
        case4:
        found = 0 ;
        printf("enter id to update:");
        scanf("%d",&id);

        
                for(i = 0; i < count; i++){

                     if(s[i].idno == id)
        {printf("\nenter id of employee:");
        scanf("%d",&s[count].idno);
        printf("\nenter new name of employee :");
        scanf("%s",&s[count].name);
        printf("\nenter new gender of the employee :");
        scanf("%s",&s[count].gender);
        printf("\nenter new department :");
        scanf("%s",&s[count].department);
        printf("\nenter  new designation:");
        scanf("%s",&s[count].designation);
        printf("\nenter new phone no :");
        scanf("%d",&s[count].phone);
        printf("\nenter new salary of employee:");
        scanf("%d",&s[count].salary);

printf("Record Updated Successfully!\n");

                        found = 1;
                        break;

} 
                }

                if(found == 0)
                {
                    printf("employee Not Found!\n");
                }

                break;
                                 // exit
                 case 5 :

                printf("\nThank You! Program Ended.\n");
                break;
            }
            
        }
        
    }
    while(choice !=5);

    return 0;
}