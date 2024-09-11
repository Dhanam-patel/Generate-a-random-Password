#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    char number;
    int upper = 125, lower = 35;
    number = (rand()) % (upper - lower + 1) + lower;
  
    srand(time(NULL));
    /*printf("Enter number of characters you for password: ");
    scanf("%d", &n);*/  //the commented part won't work in VS CODE if you want to generate a randome password of your wish length then you must use a different compiler or an online compiler here you have to manually change the length of password

    for (int i = 1; i <= 5; i++)
    {
        number = (rand()) % (upper - lower + 1) + lower;
        printf("  %c", number);
    }
    

    return 0;
}