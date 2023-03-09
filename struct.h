#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
#include <string.h>
#include <math.h>
#include <conio.h>

typedef struct
{
    int day;
    int month;
    int year;
}date;

typedef struct
{
    float salary;
    int ID;
    date birth_date;
    char first_name[30];
    char last_name[30];
    char address[100];
    char phone_number[30];
    char email[100];
}employee;

FILE*f;
int counter=0;
employee arr[100];
char file_name[]="company.txt";
long file_size;
int loaded_file;
int saved;
employee temp1;

void get_file_size(char *filename)
{
    f=fopen(file_name,"r");
    fseek(f,0L,SEEK_END);
    file_size=ftell(f);
    fseek(f,0L,SEEK_SET);
}

int check_Load(char*filename)
{
    counter=0;
    if(!(f=fopen(filename,"r")))
        return 0;
    while(!feof(f))
    {
        fscanf(f,"%d,",&arr[counter].ID);
        fscanf(f,"%[^,],",arr[counter].last_name);
        fscanf(f,"%[^,],",arr[counter].first_name);
        fscanf(f,"%f,",&arr[counter].salary);
        fscanf(f,"%d-%d-%d,",&arr[counter].birth_date.day,&arr[counter].birth_date.month,&arr[counter].birth_date.year);
        fscanf(f,"%[^,],",arr[counter].address);
        fscanf(f,"%[^,],",arr[counter].phone_number);
        fscanf(f,"%[^\n]\n",arr[counter].email);
        if(arr[counter].birth_date.day!=0)
            counter++;
    }
    fclose(f);
    if(!counter)
        return -1;
    else
        return 1;
}

void Load_file()
{
    loaded_file=check_Load(file_name);
    get_file_size(file_name);
}

int isvalid_ID(char ID[])
{
    for(int i=0;ID[i]!='\0';i++)
    {
        if(!(ID[i]>='0' && ID[i]<='9'))
            return 0;
    }
    for(int i=0;i<counter;i++)
    {
        if(atoi(ID)==arr[i].ID)
            return 0;
    }
    return 1;
}

int check_name(char x[])
{
    int z=strlen(x);
    for(int j=0;j<z;j++)
    {
        if(!((x[j]>='a'&&x[j]<='z') || (x[j]>='A'&&x[j]<='Z')))
            return 0;
    }
    return 1;
}

int check_email(char*email,int n)//Validation of email
{
    int flag=0,i;

    if(email[0]=='@')
        return 0;

    for(i=0;i<counter;i++)
    {
        if(!strcasecmp(arr[i].email,email) && (i!=n))
            return 0;
    }

    for(i=0;i<strlen(email);i++)
    {
        if(email[i]==' ')
            return 0;
    }

    for(i=0;email[i]!='\0';i++)
    {
        if(email[i]=='@')
            flag=1;
    }
    if(flag)
    {
        if(email[i-4]=='.' && email[i-3]=='c' && email[i-2]=='o' && email[i-1]=='m' && email[i]=='\0')
        {
            if(email[i-5]!='@')
                return 1;
            else
                return 0;
        }
        else
            return 0;
    }
    else
        return 0;
}

int check_phone(char number[40])//Validation of phone number
{
    int i;
    if(number[0]=='0' && number[1]=='1' && ( number[2]=='0' || number[2]=='1' || number[2]=='2' || number[2]=='5' ))
        {
           for(i=3;number[i]!='\0';i++)
           {
               if( !(number[i]>='0') || !(number[i]<='9'))
                return 0;
           }
           if(i==11)
              return 1;
              else
                return 0;
        }
    else
        return 0;
}


#endif
