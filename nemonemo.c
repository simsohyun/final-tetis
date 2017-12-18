#include <stdio.h>
#include <stdlib.h>
#include  "Coordinate_check.h"
#include "rule.h"

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
    {32,32,'5',32,'*','*','*','*','*'},
    {32,32,'3',32,'*','*','*','*','*'},
    {32,32,'1',32,'*','*','*','*','*'},
    {32,32,'3',32,'*','*','*','*','*'},
    {32,32,'5',32,'*','*','*','*','*'}};

void Map(char user[9][9], char answer[9][9]);
void k_O(int i, int j);
void k_X(int i, int j);

int count=17;
int life=3;

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
        while(1){
            int re;
            while(1){
                printf("  Enter 'X' Coordinate(1~5): ");
                scanf("%d", &i);
                getchar();
                if (i<1 || i>5)
                    printf("  The 'X' coordinate value is invalid!!\n\n");
                else
                    break;
            }

            while(1){
                printf("  Enter 'Y' Coordinate(1~5): ");
                scanf("%d", &j);
                getchar();
                if (j<1 || j>5)
                    printf("  The 'Y' coordinate value is invalid!!\n\n");
                else
                    break;
            }
        
            re = Coordinates_check(i,j);
            if (re == 0)
                break;
        }
        while(1)
        {
            printf("  Enter O or X(ONLY CAPITAL): ");
            scanf("%c", &k);
            getchar();
    
            if (k=='O'){
                i+=3; j+=3;
                system("clear"); printf("\n");
                k_O(i,j);
                break;
            }
            else if (k=='X'){
                i+=3; j+=3;
                system("clear"); printf("\n");
                k_X(i,j);
                break;
            }
            else{
                printf("  Invalid input!!\n\n");
            }
        }
        if (count<=0){
            printf("  ***** Congratulation *****\n");
            printf("  ***** It's Hourglass ! *****\n\n");
            break;
        }
        if (life<=0){
            printf("  ***** Game Over *****\n\n");
            break;
        }
    }
}

void k_O(int i, int j){
    int l;
    while(1){
        if(answer[i][j] == '1'){
            user[i][j] = 'O';
                
            for(i=0; i<=8; i++){
                for(j=0; j<=8; j++){
                    printf("%2c", user[i][j]);
                }
                printf("\n");    
            }
            printf("\n");
            printf("  The O,X input was correct.\n\n");
            count-=1;
            break;
        }
        else {
            for(i=0; i<=8; i++){
                for(j=0; j<=8; j++){
                    printf("%2c", user[i][j]);
                }
                printf("\n");
            }
            printf("\n");
            life-=1;
            printf("  The O,X input was incorrect. There are %d remaining games of life. \n\n", life);
            break;
        }
    }
}

void k_X(int i, int j){
    int l;
    while(1){
        if(answer[i][j] == '1'){
            for(i=0; i<=8; i++){
                for(j=0; j<=8; j++){
                    printf("%2c", user[i][j]);
                }
                printf("\n");    
            }
            printf("\n");
            life-=1;
            printf("  The O,X input was incorrect. There are %d remaining games of life. \n\n", life);
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
            printf("\n");
            printf("  The O,X input was correct.\n\n");
            break;
        }
    }
}

