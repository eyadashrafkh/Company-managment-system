//COMMAND 6
#include "struct.h"

void sort_menu()
{
    printf(".........................choose which type of sorting.........................\n");
    printf("1.Sort by last name (from a to z)\n");
    printf("2.Sort by last name (from z to a)\n");
    printf("3.Sort by date of birth ascending order\n");
    printf("4.Sort by date of birth descending order\n");
    printf("5.Sort by salary ascending order\n");
    printf("6.Sort by salary descending order\n");
    printf("7.Exit sorting\n");
}


void print_asc()
{
    for(int i=0;i<counter;i++)
        {
            printf("ID: %d\n",arr[i].ID);
            printf("First name: %s\n",arr[i].first_name);
            printf("Last name: %s\n",arr[i].last_name);
            printf("Salary: %.2f\n",arr[i].salary);
            printf("Birth date: %d-%d-%d\n",arr[i].birth_date.day,arr[i].birth_date.month,arr[i].birth_date.year);
            printf("Address: %s\n",arr[i].address);
            printf("Phone number: %s\n",arr[i].phone_number);
            printf("Email: %s\n\n",arr[i].email);
        }
}

void print_des()
{
    for(int i=counter-1;i>=0;i--)
        {
            printf("ID: %d\n",arr[i].ID);
            printf("First name: %s\n",arr[i].first_name);
            printf("Last name: %s\n",arr[i].last_name);
            printf("Salary: %.2f\n",arr[i].salary);
            printf("Birth date: %d-%d-%d\n",arr[i].birth_date.day,arr[i].birth_date.month,arr[i].birth_date.year);
            printf("Address: %s\n",arr[i].address);
            printf("Phone number: %s\n",arr[i].phone_number);
            printf("Email: %s\n\n",arr[i].email);
        }
}


void SortByLname()
{
    for(int i=0;i<counter-1;i++)
        {
        for(int j=0;j<counter-1-i;j++)
        {
            if(strcasecmp(arr[j].last_name,arr[j+1].last_name)>0)
            {
                temp1=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp1;
            }
        }
    }
}

void SortByDOB()
{
    for(int i=0;i<counter-1;i++)
    {
        for(int j=0;j<counter-i-1;j++)
        {
            if(arr[j].birth_date.year>arr[j+1].birth_date.year)
            {
                temp1=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp1;
            }
            else if(arr[j].birth_date.year==arr[j+1].birth_date.year)
            {
                if(arr[j].birth_date.month>arr[j+1].birth_date.month)
                {
                    temp1=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp1;
                }
                else if(arr[j].birth_date.month==arr[j+1].birth_date.month)
                {
                    if(arr[j].birth_date.day>arr[j+1].birth_date.day)
                    {
                        temp1=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp1;
                    }
                }
            }
        }
    }
}
void SortBySalary()
{
    for(int i=0;i<counter-1;i++)
    {
        for(int j=0;j<counter-i-1;j++)
        {
            if(arr[j].salary>arr[j+1].salary)
                {
                    temp1=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp1;
                }
        }
    }
}

void print_sort()
{

        printf("=============================\nSystem  >  Sorting directory\n=============================\n\n");
        sort_menu();
        switch(getch())
        {
        case '1':
            {
                SortByLname();
                printf("The data has been sorted by last name from a to z successfully..........................\n");
                print_asc();
            }
        break;
        case '2':
            {
                SortByLname();
                printf("The data has been sorted by last name from z to a successfully..........................\n");
                print_des();
            }
        break;
        case '3':
            {
                SortByDOB();
                printf("The data has been sorted in a descending order by date of birth successfully..........................\n");
                print_asc();
            }
        break;
        case '4':
            {
                SortByDOB();
                printf("The data has been sorted in a ascending order by date of birth successfully..........................\n");
                print_des();
            }
        break;
        case '5':
            {
                SortBySalary();
                printf("The data has been sorted in a ascending order by salary successfully..........................\n");
                print_asc();
            }
        break;
        case '6':
            {
                SortBySalary();
                printf("The data has been sorted in a descending order by salary successfully..........................\n");
                print_des();
            }
        break;
        case '7':
            {
                printf("\nExiting Sorting...\n");
                return;
            }
        break;
        default:
        printf("\nInvalid input...\n");
        }

    saved=0;

    return_main();
}

//END OF COMMAND 6
