#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));
    printf("Welcome to the world of gussing numbers\n");
    random= rand() % 100 + 1;
    do
    {
        printf("\nplease enter your guess between (1-100): ");
        scanf("%d",&guess);
        no_of_guess++;
        if(guess<random)
        {
            printf("Guess a larger number");
        }
        else if(guess>random)
        {
            printf("Guess a smaller number");
        }
        else
        {
            printf("Congratulation!!!\n you guessed a number in: %d attempts \n",no_of_guess);
        }
    } while (guess!=random);
    printf("Buy Buy Thanks for playing\n");
    printf("Doveloped by :Keshav Sharma\n");
    return 0;
}