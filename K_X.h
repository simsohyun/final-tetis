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
