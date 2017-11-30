#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu;
    
    system("clear");
    printf("\n");

    printf("  ***** T E T R I S *****\n");
    printf("  1. Game Start\n");
    printf("  2. Game Rules\n");
    printf("  3. Exit\n");

    while(1)
    {
        printf("  Please select a menu: ");
        scanf("%d", &menu);
    
        switch(menu)
        {
        case 1:
            system("clear");
            printf("\n");

            return 0;
        case 2:
            system("clear");
            printf("  < Game Rules > \n\n");
            printf("  1. A single \" Single Person TETRIS \" uses a block of blocks to complete the line, causing the score to go up.\n");
            printf("  2. It consists of 1 to 10 levels. (As the steps go up, the speed goes up.)\n");
            printf("  3. When you reach a certain point, it becomes level - up.\n");
            printf("  4. You can use a directional key to rotate the block.\n");

            printf("\n");
            return 0;
        case 3:
            printf("  Shut down your game.\n");
            return 0; 
        default:
            printf("  You have entered the wrong menu.\n\n");
        }
    }
    return 0;
}

