//COMMAND 2
#include "struct.h"
#include "menu.h"

void search_Lname()
{
    int c=0,NOR=0;
    char lastname[30];
    printf("============================\nSystem  >  Search directory\n============================\n\n");
    printf("Enter employee's last name:");
    scanf(" %s",lastname);
    for(int i=0;i<counter;i++)
    {
        if(!strcasecmp(lastname,arr[i].last_name))
            NOR++;
    }
    if(NOR)//Number of results
        {
            if(NOR==1)
                printf("\nFound 1 match...\n\n");
            else
                printf("\nFound %d matches...\n\n",NOR);

            for(int i=0;i<counter;i++)
            {
                if(!strcasecmp(lastname,arr[i].last_name))
                    {
                        printf("%d-ID:%d\n",++c,arr[i].ID);
                        printf("Last name:%s\n",arr[i].last_name);
                        printf("First name:%s\n",arr[i].first_name);
                        printf("Salary:%.2f\n",arr[i].salary);
                        printf("Birth of date:%d-%d-%d\n",arr[i].birth_date.day,arr[i].birth_date.month,arr[i].birth_date.year);
                        printf("Address:%s\n",arr[i].address);
                        printf("Phone number:%s\n",arr[i].phone_number);
                        printf("Email:%s\n\n",arr[i].email);
                    }
            }
            return_main();
        }
    else
    {
        printf("\nUnknown name\n\n");
        c=0;
        while(1)
        {
            if(c)
                printf("Invalid input\n");
            printf("Enter 1 to reenter the name or 0 to return to main menu...\n");
            char ch=getch();
            switch(ch)
            {
                case '0':
                    return_main();
                    break;
                case '1':
                    system("cls");
                    search_Lname();
                    break;
                default:
                    c=1;
                    continue;
            }
            break;
        }
    }
}


//END OF COMMAND 2
