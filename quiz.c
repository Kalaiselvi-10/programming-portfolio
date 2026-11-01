#include<stdio.h>

int main()
{
int answer, score = 0;
printf("WELCOME TO QUIZ GAME!\n");
printf("\n1. Which language is used for web developement?\n");
printf("1. HTML\n2. C\n3. Java\n");
printf("Enter answer: ");
scanf("%d", &answer);
if(answer == 1) score++;

printf("\n2. Which is the brain of computer?\n");
printf("1. Monitor\n2. CPU\n3. Keyboard\n");
printf(Enter answer: ");
sacnf("%d", &answer);

if(answer == 2) score++;

printf("1. Python\n2. Mouse\n3. Printer\n");
printf("Enter answer: ");
scanf("%d", &answer);

if(answer == 1) score++;

printf("\nYour score: %d/3\n", score);

return 0;
}
