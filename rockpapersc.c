/*
Project Tittle: Rock-Paper-Scissor
Student Name: Jashanjot Singh
Branch: Information Technology

Hi Sir/Mam, It is Informed to you that this project is made by me during the training peroid of TR-101.
Thankyou.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void starline()
{
    printf("\n");
    for (int i = 0; i < 10; i++)
        printf("*****");
    printf("\n");
}
int comp_turn()
{
    int rd = rand() % 3 + 1;
    return rd;
}
int main()
{

    int user_choice = 0;
    while (1)
    {
        starline();
        printf("WELCOME TO THE GAME: ROCK-PAPER-SCISSOR");
        printf("\n1. START");
        printf("\n2. EXIT");
        scanf("%d", &user_choice);
        if (user_choice == 1)
        {
            starline();
            while (1)
            {
                int ch;
                printf("\nSelect Your Option:");
                printf("\n1.ROCK");
                printf("\n2.PAPER");
                printf("\n3.SCISSOR");
                printf("\n4.Exit the Game");
                printf("\nEnter: ");
                scanf("%d", &ch);

                if (ch > 0 && ch < 4)
                {
                    int comp = comp_turn();
                    starline();
                    if (comp == 1)
                        printf("\nComputer Ji! Choosed Rock");
                    else if (comp == 2)
                        printf("\nComputer Ji! Choosed Paper");
                    else
                        printf("\nComputer Ji! Choosed Scissor");
                    if (ch == comp)
                        printf("TIE!,YOU BOTH CHOOSES THE SAME");
                    else if ((ch == 1 && comp == 3) || (ch == 2 && comp == 1) || (ch == 3 && comp == 2))
                    {
                        starline();
                        printf("Hurray! You Won");
                        starline();
                    }
                    else if ((ch == 1 && comp == 2) || (ch == 2 && comp == 3) || (ch == 3 && comp == 1))
                    {
                        printf("Oops! You Loss");
                        starline();
                    }
                }
                else if (ch == 4)
                    exit(0);
                else
                {
                    printf("Please, Enter a Valid Choice\n");
                }
            }
        }
        else if (user_choice == 0)
            exit(0);
        else
            printf("Please, Enter a Valid Choice");
    }
    return 0;
}