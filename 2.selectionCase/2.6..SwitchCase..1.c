// WAP TO DISPLAY ADD, SUBTRACT, MULTPLY, DIVIDE  AND REMINDER USING SWITCH CASE.

#include <stdio.h>
int main ()
{
    int a,b;
    char s;
    printf ("Enter two numbers: \t ");
    scanf("%d %d",&a,&b);
    printf("Enter symbol: \n '+' for Addition \n '-' for subtraction \n '*' for multiply \n '/' for division\n  '%%' for reminder \n" );
    scanf(" %c",&s);
    switch (s)
      { 
          case '+':    printf("Add= %d.", a+b);                break;
          case '-':    printf("Subtraction= %d.", a-b);        break;
          case '*':    printf("Multiplition= %d.", a*b);       break;
          case '/':    printf("Division= %d.", a/b);           break;
          case '%':   printf("Reminder= %d.", a%b);           break;
          default:     printf("Wrong Entry.");
      }
return 0;
}