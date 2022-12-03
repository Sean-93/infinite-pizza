#include <stdio.h>
#include <windows.h>

void infinitePizzaIntro()
{
  printf("\n\tINFINITE PIZZA INITIALIZING...");
  Sleep(1000);
  printf("\n\n\t\t\t3");
  Sleep(1000);
  printf("\n\n\t\t\t2");
  Sleep(1000);
  printf("\n\n\t\t\t1\n");
  Sleep(1000);
}

// 2 DIFFERENT FUNCTIONS FOR PRINTING ASCII ART OF PIZZA- WITH MIRRORED PEPPERONI PATTERN (I CHOSE 2 SO THAT THE SPEED INCREMENT INCREASE IS MORE NOTICEABLE)

void printPizzaOne()
{
  printf("\n\t __________________________________\n\t(____(____(____(____)____)____)____)\n\t \\********************************/\n\t  \\********    ******************/\n\t   \\*****        ***************/\n\t    \\****        *****    *****/\n\t     \\*****    *****        **/\n\t      \\*************        */\n\t       \\**************    **/\n\t        \\******************/\n\t         \\****    ********/\n\t          \\*        *****/\n\t           \\        ****/\n\t            \\*    *****/\n\t             \\********/\n\t              \\******/\n\t               \\****/\n\t                \\**/\n\t                 \\/\n\n\n\n\n");
}

void printPizzaTwo()
{
  printf("\n\t __________________________________\n\t(____(____(____(____)____)____)____)\n\t \\********************************/\n\t  \\*******************    *******/\n\t   \\****************        ****/\n\t    \\******    *****        ***/\n\t     \\***        *****    ****/\n\t      \\**        ************/\n\t       \\***    *************/\n\t        \\******************/\n\t         \\********    ****/\n\t          \\*****        */\n\t           \\****        /\n\t            \\*****    */\n\t             \\********/\n\t              \\******/\n\t               \\****/\n\t                \\**/\n\t                 \\/\n\n\n\n\n");
}

void infinitePrintPizzaLoop()
{

  int pizzaPrintSleepMilliseconds = 3000;

  int i = 1;

  // WHILE LOOP FOR PRINTING WHEN DELAY IS MORE THAN 1000 MILLISECONDS

  while (i = 1 && pizzaPrintSleepMilliseconds > 1000)
  {
    printPizzaOne();
    Sleep(pizzaPrintSleepMilliseconds);
    printPizzaTwo();
    Sleep(pizzaPrintSleepMilliseconds);

    pizzaPrintSleepMilliseconds -= 500;

    // printf("%d", pizzaPrintSleepMilliseconds);
    printf("\n\tThis is a lot of pizza.");
  }

  // WHILE LOOP FOR PRINTING WHEN DELAY IS MORE THAN 500 MILLISECONDS

  while (i = 1 && pizzaPrintSleepMilliseconds > 100)
  {
    printPizzaOne();
    Sleep(pizzaPrintSleepMilliseconds);
    printPizzaTwo();
    Sleep(pizzaPrintSleepMilliseconds);

    pizzaPrintSleepMilliseconds -= 50;

    // printf("%d", pizzaPrintSleepMilliseconds);
    printf("\n\tOh no....");
  }

  // WHILE LOOP FOR PRINTING WHEN DELAY IS MORE THAN 500 MILLISECONDS

  while (i = 1 && pizzaPrintSleepMilliseconds > 50)
  {
    printPizzaOne();
    Sleep(pizzaPrintSleepMilliseconds);
    printPizzaTwo();
    Sleep(pizzaPrintSleepMilliseconds);

    pizzaPrintSleepMilliseconds--;

    // printf("%d", pizzaPrintSleepMilliseconds);
    printf("\n\tThere are WAY too many pizzas!");
  }

  // INFINITE WHILE LOOP FOR PRINTING WHEN DELAY IS EQUAL TO 1 MILLISECOND

  while (pizzaPrintSleepMilliseconds = 1)
  {
    printPizzaOne();
    Sleep(pizzaPrintSleepMilliseconds);
    printPizzaTwo();
    Sleep(pizzaPrintSleepMilliseconds);

    // printf("%d", pizzaPrintSleepMilliseconds);
    printf("\n\tINFINITE PIZZAAAAAA!!!");
  }
}

void main()
{
  infinitePizzaIntro();
  infinitePrintPizzaLoop();
}
