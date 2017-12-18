int Coordinates_check(int i, int j){
    extern char user[9][9];
    i+=3; j+=3;
    if (user[i][j] == '*')
        return 0;
    else if (user[i][j] == 'O' || user[i][j] == 'X'){
        printf("  The coordinates already entered.\n\n");
        return 1;
    }
}
