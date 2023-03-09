#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"
#include "task7.h"
#include "task8.h"


int main()
{
    printf("\n######################\nWelcome to our system\n######################\n");
    printf("\n\n\nEnter any key to start");
    getch();
    saved=1;
    Load_file(file_name);
    while(1)
    {
        system("cls");
        main_menu();
        switch(getch())
        {
        case '1':
            system("cls");
            About_project();
            break;
        case '2':
            system("cls");
            search_Lname();
            break;
        case '3':
            system("cls");
            add();
            break;
        case '4':
            system("cls");
            Delete_data();
            break;
        case '5':
            system("cls");
            modify_data();
            break;
        case '6':
            system("cls");
            print_sort();
            break;
        case '7':
            system("cls");
            save_data();
            break;
        case '8':
            system("cls");
            quit_system();
            break;
        }
    }
    return 0;
}

