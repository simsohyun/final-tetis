void rule()
{
    char num;
    system("clear"); printf("\n");
    printf("  ********** N E M O N E M O **********\n\n");
    printf("  1. The game is to draw a hidden picture by looking at the figures on the left and right sides of the picture.\n\n");
    printf("  2. One digit is the number of squares that can be filled continuously.\n\n");
    printf("  3. Multiple numbers require more than one space between digits and digits.\n\n");
    printf("  4. If the wrong input is more than 3 times, the game ends.\n\n");

    while(1)
    {
        printf("  Please enter(Back = 'b') : ");
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
    }
