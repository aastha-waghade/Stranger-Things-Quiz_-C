#include <stdio.h>

int main()
{
    char name[50];
    int option, answer, score = 0;

    printf("================================\n");
    printf("      Stranger Things Quiz      \n");
    printf("================================\n");
    printf("Welcome to Hawkins!\n");
    printf("Test your Stranger Things knowledge!");

    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Welcome To Hawkins %s! Let's get started!\n", name);

    do
    {
        printf("1. Start Quiz\n");
        printf("2. Instructions\n");
        printf("3. Exit\n");

        printf("Please select an option: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                score = 0;

                printf("Starting the quiz...\n");

                printf("Question 1: What is the name of the parallel dimension in Stranger Things?\n");
                printf("1. The Upside Down\n");
                printf("2. The Shadow Realm\n");
                printf("3. The Dark World\n");
                printf("4. The Other Side\n");
                printf("Please enter your answer: ");
                scanf("%d", &answer);

                if(answer == 1)
                {
                    score++;
                }

                printf("Question 2: What is Eleven's favorite food?\n");
                printf("1. Pizza\n");
                printf("2. Eggo Waffles\n");
                printf("3. Burger\n");
                printf("4. Donuts\n");
                printf("Please enter your answer: ");
                scanf("%d", &answer);

                if(answer == 2)
                {
                    score++;
                }

                printf("Question 3: What is the name of the town where Stranger Things is primarily set?\n");
                printf("1. Hawkins\n");
                printf("2. Sunnydale\n");
                printf("3. Riverdale\n");
                printf("4. Hill Valley\n");
                printf("Please enter your answer: ");
                scanf("%d", &answer);

                if(answer == 1)
                {
                    score++;
                }

                printf("Question 4: What is Dustin's pet creature originally called?\n");
                printf("1. Dart\n");
                printf("2. Demo\n");
                printf("3. Spike\n");
                printf("4. Shadow\n");
                printf("Please enter your answer: ");
                scanf("%d", &answer);

                if(answer == 1)
                {
                    score++;
                }

                printf("Question 5: Who is Eleven's adoptive father figure?\n");
                printf("1. Steve Harrington\n");
                printf("2. Jim Hopper\n");
                printf("3. Bob Newby\n");
                printf("4. Murray Bauman\n");
                printf("Please enter your answer: ");
                scanf("%d", &answer);

                if(answer == 2)
                {
                    score++;
                }

                printf("Question 6: What is the name of the shopping mall introduced in Season 3?\n");
                printf("1. Starcourt Mall\n");
                printf("2. Hawkins Mall\n");
                printf("3. Star Plaza\n");
                printf("4. Hawkins Square\n");
                printf("Please enter your answer: ");
                scanf("%d", &answer);

                if(answer == 1)
                {
                    score++;
                }

                printf("Question 7: Which character is known for saying \"Friends don't lie\"?\n");
                printf("1. Max\n");
                printf("2. Nancy\n");
                printf("3. Eleven\n");
                printf("4. Robin\n");
                printf("Please enter your answer: ");
                scanf("%d", &answer);

                if(answer == 3)
                {
                    score++;
                }

                printf("Question 8: What instrument does Eddie Munson famously play?\n");
                printf("1. Guitar\n");
                printf("2. Drums\n");
                printf("3. Piano\n");
                printf("4. Violin\n");
                printf("Please enter your answer: ");
                scanf("%d", &answer);

                if(answer == 1)
                {
                    score++;
                }

                printf("Question 9: What is the name of the main villain associated with the Upside Down in Season 4?\n");
                printf("1. Vecna\n");
                printf("2. The Mind Flayer\n");
                printf("3. Demogorgon\n");
                printf("4. The Shadow Monster\n");
                printf("Please enter your answer: ");
                scanf("%d", &answer);

                if(answer == 1)
                {
                    score++;
                }

                printf("Question 10: What is the name of the high school attended by many of the main characters?\n");
                printf("1. Hawkins High School\n");
                printf("2. Hawkins Central High\n");
                printf("3. Hawkins Public School\n");
                printf("4. Hawkins Senior Academy\n");
                printf("Please enter your answer: ");
                scanf("%d", &answer);

                if(answer == 1)
                {
                    score++;
                }

                printf("\n================================\n");
                printf("          QUIZ COMPLETED\n");
                printf("================================\n");
                printf("Player: %s\n", name);
                printf("Your Score: %d / 10\n", score);

                if(score == 10)
                {
                    printf("Excellent! You are a Stranger Things Expert!\n");
                }
                else if(score >= 7)
                {
                    printf("Great job! You really know Hawkins!\n");
                }
                else if(score >= 5)
                {
                    printf("Good job! Keep watching Stranger Things!\n");
                }
                else
                {
                    printf("Keep exploring Hawkins!\n");
                }

                break;

            case 2:
                printf("\nInstructions:\n");
                printf("1. You will be asked 10 questions.\n");
                printf("2. Each question has 4 options.\n");
                printf("3. Enter the correct option number.\n");
                printf("4. Each correct answer gives you 1 point.\n");
                printf("5. Your final score will be displayed at the end.\n");
                break;

            case 3:
                printf("Thanks for playing, %s!\n", name);
                break;

            default:
                printf("Invalid option! Please select 1, 2, or 3.\n");
        }

    } while(option != 3);

    return 0;
}