//COMMAND 5
#include "struct.h"

void Menu()
{
    printf("......................Choose which field to modify.....................\n");
    printf("1.First name\n");
    printf("2.Last name\n");
    printf("3.Date of birth\n");
    printf("4.Salary\n");
    printf("5.Address\n");
    printf("6.Phone number\n");
    printf("7.Email\n");
    printf("8.Exit modification\n\n");
    printf("Enter your choice:\n");
}

void modify_data()
{
    printf("============================\nSystem  >  Modify directory\n============================\n\n");
    char ID[10];
    int i;

    int c=0;

    do
    {
        if(c)
            printf("\nInvalid ID enter the it again...\n\n");
        c++;
        printf("Enter the ID of the user needed to be modified: ");
        scanf("%s",ID);
        getchar();
    }while(!isvalid_ID(ID));
    c=atoi(ID);
    for(i=0;c!=arr[i].ID && i<counter;i++);
    if(c==arr[i].ID)
    {
        printf("ID found...\n");
        while(1)
        {
            system("cls");
            Menu();
           switch(getch())
            {
                case '1':
                    {
                        c=0;
                        do
                        {
                            if(c)
                                printf("\nInvalid input...\n\n");
                            c++;
                            printf("Enter first name: ");
                            scanf(" %s",arr[counter].first_name);
                        }while(!check_name(arr[counter].first_name));
                        printf("\nFirst name modified successfully...\n");
                    }
                    break;
                 case '2':
                    {
                        c=0;
                        do
                        {
                            if(c)
                                printf("\nInvalid input...\n\n");
                            c++;
                            printf("Enter last name: ");
                            scanf(" %s",arr[counter].last_name);
                        }while(!check_name(arr[counter].last_name));
                        printf("\nLast name modified successfully...\n");
                    }
                    break;
                 case '3':
                    {
                        c=0;
                        do
                        {
                             if(c)
                                 printf("Invalid date enter it again...\n");
                            c++;
                            printf("Enter a modified date of birth(dd mm yyyy): ");
                            scanf("%d %d %d",&arr[i].birth_date.day,&arr[i].birth_date.month,&arr[i].birth_date.year);
                        }while(arr[i].birth_date.day<=0 ||arr[i].birth_date.day>31 || arr[i].birth_date.month<=0 ||arr[i].birth_date.month>12 || arr[i].birth_date.year<1900 || arr[i].birth_date.year>2022);
                        printf("\nDate of birth modified successfully...\n");
                    }
                    break;
                 case '4':
                     {
                         c=0;
                         do
                         {
                             if(c)
                                printf("Invalid input enter it again...");
                             c++;
                             printf("Enter a modified salary(5*****): ");
                             scanf("%f",&arr[i].salary);
                         }while(arr[i].salary<=0);
                         printf("\nSalary modified successfully...\n");
                    }
                    break;
                 case '5':
                    {
                    printf("Enter a modified address: ");
                    scanf(" %[^\n]",arr[i].address);
                    printf("\nAddress modified successfully...\n");
                    }
                    break;
                  case '6':
                     {
                         c=0;
                         do
                         {
                              if(c)
                                  printf("invalid phone number enter it again...\n");
                              c++;
                              printf("Enter a modified phone number(01*********): ");
                              scanf("%s",arr[i].phone_number);
                          }while(!check_phone(arr[i].phone_number));
                          printf("\nPhone number modified successfully...\n");
                     }
                     break;
                 case '7':
                    {
                         c=0;
                         do
                         {
                             if(c)
                                 printf("Invalid email enter it again...\n");
                             c++;
                             printf("Enter a modified email(ex:******@gmail.com): ");
                             scanf(" %[^\n]",arr[i].email);
                        }while(!check_email(arr[i].email,i));
                        printf("\nEmail modified successfully...\n");
                    }
                    break;
                 case '8':
                     {
                         printf("\nExiting modification...\n\n");
                         return;
                     }
                    break;
                 default:
                     printf("Invalid input enter it again...\n\n");
            }
            printf("\nEnter any key to continue...\n");
            getch();
            saved=0;
         }
    }
    else
        printf("This ID does not exist...\n\n");

    return_main();
}

//END OF COMMAND 5
