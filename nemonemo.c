#include <stdio.h>
#include <stdlib.h>

char answer[9][9] = {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ','1','2',' ','2','1'},
    {' ',' ',' ',' ','1','2','5','2','1'},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ','5',' ','1','1','1','1','1'},
    {' ',' ','3',' ','0','1','1','1','0'},
    {' ',' ','1',' ','0','0','1','0','0'},
    {' ',' ','3',' ','0','1','1','1','0'},
    {' ',' ','5',' ','1','1','1','1','1'}};

char user[9][9] = {
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ','1','2',' ','2','1'},
    {' ',' ',' ',' ','1','2','5','2','1'},
    {' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ','5',' ','O','O','O','O','O'},
    {' ',' ','3',' ','O','O','O','O','O'},
    {' ',' ','1',' ','O','O','O','O','O'},
    {' ',' ','3',' ','O','O','O','O','O'},
    {' ',' ','5',' ','O','O','O','O','O'}};

void Map(char user[9][9], char answer[9][9]);
int rule();

int main()
{
    system("clear"); printf("\n");
    printf("  ***** N E M O N E M O *****\n");
    printf("  1. Game Start\n");
    printf("  2. How to\n");
    printf("  3. Exit\n\n");
    
    while(1)
    {
        int menu;

        printf("  Please select a menu: ");
        scanf("%d", &menu);
        getchar();

        switch(menu){
            case 1:
                system("clear"); printf("\n");
                Map(user, answer);                
                return 0;
            case 2:
                rule();
                return 0;
            case 3:
                printf("  Shut down your game.\n\n");
                return 0;
            default:
                printf("  You have entered the wrong menu.\n\n");
        }
    }
    return 0;
}

int rule()
{
    char num;
    system("clear"); printf("\n");
    printf("  ***** N E M O N E M O *****\n\n");
    printf("  1. The game is to draw a hidden picture by looking at the figures on the left and right sides of the picture.\n\n");
    printf("  2. One digit is the number of squares that can be filled continuously.\n\n");
    printf("  3. Multiple numbers require more than one space between digits and digits.\n\n");
    
    while(1)
    {
        printf("  Please enter(Back = 'b') ; ");
        scanf("%c",&num);
        getchar();

        if(num == 'b')
        {
            system("clear");
            main();
            break;
        }
        else
        {
            printf("  Please enter a word. \n\n");
        }
    }

    return 0;
}

void Map(char user[9][9], char answer[9][9])
{
    int i, j, a, b;
    char k;
    
    for(a=0; a<=8; a++){
        for(b=0; b<=8; b++){
            printf("%2c", user[a][b]);}
        printf("\n");
    }

    printf("  Enter Coordinates: ");
    scanf("%d %d", &i, &j);
    getchar();

    while(1)
    {
        printf("  Enter O or X(ONLY CAPITAL): ");
        scanf("%c", &k);
        getchar();

        if (k=='O'){
            break;
        }
        else if (k=='X'){
            break;
        }
        else{
            printf("  Invalid input!!\n\n");
        }
    }

    i+=3; j+=3;
    if(k='O')
    {
        if(answer[i][j] == 1)
            user[i][j] = '■';
        else
            user[i][j] = 'X';
    }
    if(k='X')
    {
        if(answer[i][j] == 1)
            user[i][j] == '■';
        else
            user[i][j] == 'X';
    }
    printf("\n");
}
