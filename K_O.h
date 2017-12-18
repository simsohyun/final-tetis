void k_O(int i, int j){
extern char answer[9][9];
extern char user[9][9];
extern int count;
extern int life;

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
