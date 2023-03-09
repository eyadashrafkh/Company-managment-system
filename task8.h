//COMMAND 8
#include "struct.h"

void quit_system()
{
    int c=0;
    while(saved)
    {
        system("cls");
        if(c)
            printf("Invalid input................\n");
        printf("Are you sure you want to exit?\n");
        printf("1.YES\n2.NO\n");
        switch(getch())
        {
        case '1':
                thanks();
                exit(0);
        case '2':
            break;
        default:
            c=1;
            continue;
        }
        break;
    }
    while(!saved)
    {
        if(c)
            printf("Invalid input\n");
        printf("Exit without saving?\n");
        printf("1.YES\n2.Save and quit\n3.return to main menu\n");
        switch(getch())
        {
        case '1':
            thanks();
            exit(0);
        case '2':
            save();
            thanks();
            exit(0);
            continue;
        case '3':
            break;
        default:
            c=1;
            continue;
        }
        break;
    }
}


//END OF COMMAND 8
