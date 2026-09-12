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
   }







    return 0;
}