#include <stdio.h>

int main()
{
    char name[50];
    int option;
    
    printf("================================\n");
    printf("           Start Game           \n");
    printf("================================\n");

    printf("Welcome to Hawkins!\n");
    printf("Test your Stranger Things knowledge!");
    printf("Please enter your name: ");
    scanf("%s",name);
    printf("Welcome To Hawkins %s! Let's get started!\n",name);

   printf("1. Start Quiz\n") 
   printf("2. Instructions\n");
   printf("3. Exit\n");

   printf("Please select an option: ");
   scanf("%d",&option);

   switch(option)
   {
    case 1:
        printf("Starting the quiz...\n");
        
        
        break;
    case 2:
        printf("Instructions:\n");
        printf("1. You will be asked a series of questions about Stranger Things.\n");
        printf("2. Choose the correct answer from the given options.\n");
        printf("3. Your score will be displayed at the end of the quiz.\n");
        printf("4. If you want to discontinue then enter exit\n")
        break;
    case 3:
        printf("Exiting the game...\n");
        break;
    default:
        printf("Invalid option. Please try again.\n");
        break;
   }







    return 0;
}