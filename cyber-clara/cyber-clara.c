#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    char (*firstNames)[20];
    char (*lastNames)[20];
    firstNames = malloc(sizeof *firstNames * n);
    lastNames = malloc(sizeof *lastNames * n);

    unsigned int uniqueNames = n;

    for (int i = 0; i < n; i++) 
    {
        scanf("%s", firstNames[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        scanf("%s", lastNames[i]);
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int ii = i + 1; ii < n; ii++) 
        {
            if (strcmp(firstNames[i], firstNames[ii]) == 0 && strcmp(lastNames[i], lastNames[ii]) == 0)
            {   
                uniqueNames--;
                break;
            }
        }
    }

    printf("%d", uniqueNames);

    return 0;
}   
