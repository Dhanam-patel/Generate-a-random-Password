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
    printf("Enter number of characters you for password: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        number = (rand()) % (upper - lower + 1) + lower;
        printf("  %c", number);
    }
    

    return 0;
}
