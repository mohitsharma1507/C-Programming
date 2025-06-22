#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SnakeWaterGun(char you, char comp)
{ 
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'w')
    {
        return 1;
    }
    if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
    
}
int main()
{
    char you, comp, i;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter 'S' for snake,'W' for water and 'g' for gun\n ");
    scanf("%c", &you);
    int result = SnakeWaterGun(you, comp);
    // printf("you chose %c and computer chose %c.", you, comp);
    // printf("\n\t******ScoreBoard******");
    // printf("\t You: is %d or Computer:  is %d\n", you, comp);
    // printf("\t**********************");
    // printf("Game No:", i);
    // printf("========================================================");
    // i++;
    // printf("\n\n##### Game Khatam Paisa Hajam #####");
    // printf("*******************************************");
    if (you < comp)
    {
        printf(
            "😭 Sorry You lose the game 😭\n computer win the "
            "game with score %d is",
            comp);
    }
    else if (you == comp)
    {
        printf(("😅 Game is Tie Play Again 😅"));
    }
    else
    {
        printf("😄 You Win the Game with score is %d \n 😄", you);
    }
    return 0;
}