#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("\n*********WELCOME TO GAMES WORLD********\n");
    do
    {
        if (nguesses == 10)
        {
            printf("-----x----------------x--------");
            printf("\n bs yeh tak khel tha boss chlo ghar jao or sojao😒\n");
            printf("-----x----------------x--------");
            break;
        }
        printf("Guess the number between 1to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number dal dey jyada bda number dal rha hai \n");
        }
        else if (guess < number)
        {
            printf("higher number dal dey jyada chota number dal rha hai \n");
        }
        else
        {
            printf("tum ne sahi number dal ree baba %d attempts😎😎\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}