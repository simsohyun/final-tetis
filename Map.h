void Map(char user[9][9], char answer[9][9])
{

    extern int count;
    extern int life;

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

