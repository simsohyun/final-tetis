#include <stdio.h>
#include <stdlib.h>

char answer[9][9] = {
    {32,32,32,32,32,32,32,32,32},
    {32,32,32,32,'1','2',32,'2','1'},
    {32,32,32,32,'1','2','5','2','1'},
    {32,32,32,32,32,32,32,32,32},
    {32,32,'5',32,'1','1','1','1','1'},
    {32,32,'3',32,'0','1','1','1','0'},
    {32,32,'1',32,'0','0','1','0','0'},
    {32,32,'3',32,'0','1','1','1','0'},
    {32,32,'5',32,'1','1','1','1','1'}};

char user[9][9] = {
    {32,32,32,32,32,32,32,32,32},
    {32,32,32,32,'1','2',32,'2','1'},
    {32,32,32,32,'1','2','5','2','1'},
    {32,32,32,32,32,32,32,32,32},
    {32,32,'5',32,'O','O','O','O','O'},
    {32,32,'3',32,'O','O','O','O','O'},
    {32,32,'1',32,'O','O','O','O','O'},
    {32,32,'3',32,'O','O','O','O','O'},
    {32,32,'5',32,'O','O','O','O','O'}};

void Map(char user[9][9], char answer[9][9]);
void rule();
void k_O(int i, int j);
void k_X(int i, int j);

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

void rule()
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
    printf("\n");
while(1){
    int count = 17;

    printf("  Enter Coordinates: ");
    scanf("%d %d", &i, &j);
    getchar();

    while(1)
    {
        printf("  Enter O or X(ONLY CAPITAL): ");
        scanf("%c", &k);
        getchar();

        i+=3; j+=3;
        
        if (k=='O'){
            system("clear"); printf("\n");
            k_O(i,j);
            break;
        }
        else if (k=='X'){
            system("clear"); printf("\n");
            k_X(i,j);
            break;
        }
        else{
            printf("  Invalid input!!\n\n");
        }
    }
    printf("\n");
    count-=1;
    if(count=0)
        break;
}

}

void k_O(int i, int j){
    while(1){
        if(answer[i][j] == '1'){
            user[i][j] = '*';
                
            for(i=0; i<=8; i++){
                for(j=0; j<=8; j++){
                    printf("%2c", user[i][j]);
                }
                printf("\n");    
            }
            break;
        }
        else {
            user[i][j] = 'X';
            for(i=0; i<=8; i++){
                for(j=0; j<=8; j++){
                    printf("%2c", user[i][j]);
                }
                printf("\n");
            }
            break;
        }
    }
}

void k_X(int i, int j){
    while(1){
        if(answer[i][j] == '1'){
            user[i][j] = '*';
                
            for(i=0; i<=8; i++){
                for(j=0; j<=8; j++){
                    printf("%2c", user[i][j]);
                }
                printf("\n");    
            }
            break;
        }
        else {
            user[i][j] = 'X';
            for(i=0; i<=8; i++){
                for(j=0; j<=8; j++){
                    printf("%2c", user[i][j]);
                }
                printf("\n");
            }
            break;
        }
    }
}
