//q4
#include <stdio.h>

int main()
{
    int ans, score=0;
    printf("QUIZ APPLICATION");
    printf("1. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n");
    printf("Enter your answer");
    scanf("%d",&ans);
    if(ans==2)
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong Correct answer is Mars.\n");
    }
    printf("\n2. How many continents are there in the world?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer");
    scanf("%d", &ans);
    if(ans==3)
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong Correct answer is 7.\n");
    }
    printf("\n3. Which is the largest ocean in the world?\n");
    printf("1. Atlantic Ocean\n2. Indian Ocean\n3. Pacific Ocean\n4. Arctic Ocean\n");
    printf("Enter your answer");
    scanf("%d",&ans);
    if(ans == 3)
    {
        printf("Correct\n");
        score++;
    }
    else
    {
        printf("Wrong Correct answer is Pacific Ocean.\n");
    }

    printf("RESULT");
    printf("Your Score %d/3\n", score);
    if(score==3)
        printf("Excellent\n");
    else if(score == 2)
        printf("Good Job \n");
    else
        printf("Better Luck Next Time\n");

    return 0;
}