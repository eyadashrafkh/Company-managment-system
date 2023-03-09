#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "struct.h"
//MENU'S FUNCTIONS

void return_main()
{
    printf("Press any key to return to main menu...\n");
    getch();
}

void About_project()
{
    printf("=========================\nSystem  >  About project\n=========================\n");
    printf("\nProgramming 1 final Project\tFall 2021\tProf. Dr. Saleh El Shehaby and Dr. Magdy Abdelazeem\n");
    printf("\nParticipants:\n\n1.Eyad Ashraf Khamis\tID:7392 \tGroup 2\n2.Marah Mohamed Fawzy \tID:7578 \tGroup 3\n3.Menna Mohamed Omar\tID:7583 \tGroup 3\n4.Menna Mohamed walid \tID:7588 \tGroup 1\n\n\n");
    get_file_size(file_name);
    printf("------------------------------------------------------\nProperties of saved data on the currently loaded file:\n------------------------------------------------------\n");
    printf("File Name:%s\nFile Size:%ld bytes\nNumber of entries:%d\n\n",file_name,file_size,counter);
    return_main();
}

void thanks()
{
    system("cls");
    printf("\n\n\n\t\t\tThanks for using our system!!\n\n\n\n");
}

void main_menu()
{
    printf("=====================Welcome to our system=====================\n\n");
    printf("1.About  project\n");
    printf("2.Search in file\n");
    printf("3.Add to file\n");
    printf("4.Delete from file\n");
    printf("5.Modify in file\n");
    printf("6.Print sorted data from file\n");
    printf("7.Save data in file\n");
    printf("8.Quit\n");
}

#endif

//END OF MENU
