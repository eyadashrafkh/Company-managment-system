//COMMAND 4
#include "struct.h"

void Delete_data()
{
    char fname[30],lname[30];
    int n=counter;
    printf("============================\nSystem  >  Delete directory\n============================\n\n");
    printf("Enter 0 in the first name to cancel.\n\n");
    printf("Enter first name:");
    scanf("%s",fname);
    if(*fname=='0')
    {
        printf("\n\n\tProcess Canceled.\n\n");
        return;
    }
    printf("Enter last name:");
    scanf("%s",lname);
    for(int i=0;i<counter;i++)
    {
        if(!strcasecmp(fname,arr[i].first_name) && !strcasecmp(lname,arr[i].last_name))
            {
                for(int j=i;j<counter-1;j++)
                {

                    temp1=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp1;
                }
                counter--;
            }
    }

    if(!(n-counter))
    {
        printf("Name not found...\n\n");
    }
    else
        {
            printf("\n%d entry(ies) has been deleted from the system.......\n\n",n-counter);
            saved=0;
        }
    return_main();
}

//END OF COMMAND 4
