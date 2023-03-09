//COMMAND 7
#include "struct.h"

void save()
{
    f=fopen(file_name,"w");
    for(int i=0;i<counter;i++)
        {
            fprintf(f,"%d,",arr[i].ID);
            fprintf(f,"%s,",arr[i].last_name);
            fprintf(f,"%s,",arr[i].first_name);
            fprintf(f,"%.2f,",arr[i].salary);
            fprintf(f,"%d-%d-%d,",arr[i].birth_date.day,arr[i].birth_date.month,arr[i].birth_date.year);
            fprintf(f,"%s,",arr[i].address);
            fprintf(f,"%s,",arr[i].phone_number);
            fprintf(f,"%s\n",arr[i].email);
        }

    fclose(f);
}

void save_data()
{
    printf("==========================\nSystem  >  Save directory\n==========================\n\n");

    save();

    printf("\t\tSuccessfully saved the file\n\n");

    saved=1;

    return_main();
}

//EMD OF COMMAND 7
