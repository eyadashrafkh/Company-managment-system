//COMMAND 3
#include "struct.h"

void add()
{
    printf("=========================\nSystem  >  ADD directory\n=========================\n\n");
    printf("Enter data of employee...\n\n");

    int c=0;
    char ch='1';
    char ID[10];

    while(ch=='1')
    {
         do
        {
            if(c)
                printf("\nInvalid input...\n\n");
            c++;
            printf("Enter ID(1234): ");
            scanf("%s",ID);
            getchar();
        }while(!isvalid_ID(ID));
        arr[counter].ID=atoi(ID);

        c=0;

        do
        {
            if(c)
                printf("\nInvalid input...\n\n");
            c++;
            printf("Enter first name: ");
            scanf(" %s",arr[counter].first_name);
        }while(!check_name(arr[counter].first_name));

        c=0;

        do
        {
            if(c)
                printf("\nInvalid input...\n\n");
            c++;
            printf("Enter last name: ");
            scanf(" %s",arr[counter].last_name);
        }while(!check_name(arr[counter].last_name));

        c=0;

        do
        {
            if(c)
                printf("\nInvalid input...\n\n");
            c++;
            printf("Enter salary (12345): ");
            scanf("%f",&arr[counter].salary);
        }while(arr[counter].salary<=0);

        c=0;

        do
        {
            if(c)
                printf("\nInvalid date...\n\n");
            c++;
            printf("Enter date of birth(dd mm yyyy): ");
            scanf("%d %d %d",&arr[counter].birth_date.day,&arr[counter].birth_date.month,&arr[counter].birth_date.year);
        }while(arr[counter].birth_date.day<=0 || arr[counter].birth_date.day>31 || arr[counter].birth_date.month<=0 || arr[counter].birth_date.month>12 || arr[counter].birth_date.year<1900 || arr[counter].birth_date.year>2022);

        c=0;

        printf("Enter address(ex:221 b.baker street): ");
        scanf(" %[^\n]",arr[counter].address);

        do
        {
            if(c)
                printf("\nInvalid number...\n\n");
            c++;
            printf("Enter phone(01*********): ");
            scanf("%s",arr[counter].phone_number);
        }while(!check_phone(arr[counter].phone_number));

        c=0;

        do
        {
            if(c)
                printf("\nInvalid email...\n\n");
            c++;
            printf("Enter email(ex:******@domain.com): ");
            scanf(" %s",arr[counter].email);
        }while(!check_email(arr[counter].email,counter));

        c=0;

        counter++;

        printf("\n\nEnter 1 to continue or 0 to return to main menu...\n\n");
        ch=getch();
    }

    printf("Successfully added data\n\n");

    saved=0;

    return_main();
}

//END OF COMMAND 3
