#include <stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int i, a, b, j, k;
    char tt[3][3], name1[15], name2[15];
    char answer;
    pf("Enter player 1 name\n");
    gets(name1);
    pf("Enter player 2 name\n");
    gets(name2);
    do
    {

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                tt[i][j] = ' ';
            }
        }

        for (i = 1; i <= 5; i++)
        {
            int r = 1;
            printf("user 1 turn enter row and column number\n");
            while (r == 1)
            {
                sf("%d %d", &a, &b);
                if (tt[a - 1][b - 1] != 'X' && tt[a - 1][b - 1] != 'O')
                {
                    break;
                }
                pf("the place you are trying to enter already has a value so enter again\n");
            }

            tt[a - 1][b - 1] = 'X';
            for (k = 1; k < 4; k++)
            {
                for (j = 1; j < 4; j++)
                {
                    printf(" %c", tt[k - 1][j - 1]);
                    if (j == 3)
                    {
                        continue;
                    }
                    printf(" %c", 179);
                }
                printf("\n");
                if (k == 3)
                {
                    continue;
                }
                for (j = 0; j < 9; j++)
                {
                    if (j == 3 || j == 6)
                    {
                        printf("%c", 179);
                    }
                    printf("%c", 196);
                }
                printf("\n");
            }
            if ((tt[0][0] == 'X' && tt[0][1] == 'X' && tt[0][2] == 'X') || (tt[1][0] == 'X' && tt[1][1] == 'X' && tt[1][2] == 'X') || (tt[2][0] == 'X' && tt[2][1] == 'X' && tt[2][2] == 'X') || (tt[0][0] == 'X' && tt[1][0] == 'X' && tt[2][0] == 'X') || (tt[0][1] == 'X' && tt[1][1] == 'X' && tt[2][1] == 'X') || (tt[0][2] == 'X' && tt[1][2] == 'X' && tt[2][2] == 'X') || (tt[0][0] == 'X' && tt[1][1] == 'X' && tt[2][2] == 'X') || (tt[0][2] == 'X' && tt[1][1] == 'X' && tt[2][0] == 'X'))
            {
                pf("%s wins", name1);
                break;
            }
            if (i == 5)
            {
                printf("DRAW");
                break;
            }
            printf("user 2 turn enter row and column number\n");
            while (r == 1)
            {
                sf("%d %d", &a, &b);
                if (tt[a - 1][b - 1] != 'X' && tt[a - 1][b - 1] != 'O')
                {
                    break;
                }
                pf("the place you are trying to enter already has a value so enter again\n");
            }
            tt[a - 1][b - 1] = 'O';
            for (k = 1; k < 4; k++)
            {
                for (j = 1; j < 4; j++)
                {
                    printf(" %c", tt[k - 1][j - 1]);
                    if (j == 3)
                    {
                        continue;
                    }
                    printf(" %c", 179);
                }
                printf("\n");
                if (k == 3)
                {
                    continue;
                }
                for (j = 0; j < 9; j++)
                {
                    if (j == 3 || j == 6)
                    {
                        printf("%c", 179);
                    }
                    printf("%c", 196);
                }
                printf("\n");
            }
            if ((tt[0][0] == 'O' && tt[0][1] == 'O' && tt[0][2] == 'O') || (tt[1][0] == 'O' && tt[1][1] == 'O' && tt[1][2] == 'O') || (tt[2][0] == 'O' && tt[2][1] == 'O' && tt[2][2] == 'O') || (tt[0][0] == 'O' && tt[1][0] == 'O' && tt[2][0] == 'O') || (tt[0][1] == 'O' && tt[1][1] == 'O' && tt[2][1] == 'O') || (tt[0][2] == 'O' && tt[1][2] == 'O' && tt[2][2] == 'O') || (tt[0][0] == 'O' && tt[1][1] == 'O' && tt[2][2] == 'O') || (tt[0][2] == 'O' && tt[1][1] == 'O' && tt[2][0] == 'O'))
            {
                pf("%s wins", name2);
                break;
            }
        }
        printf("\nDo you want to play again \n\nType y for yes and type n for no\n");
        scanf("%c", &answer);

    } while (answer == 'y');

    return 0;
}