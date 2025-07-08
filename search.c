#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 1, 50};
    int n;
    
    printf("Enter a Number to find\n");
    scanf("%d", &n);

    for(int i =0; i < 7; i++) {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 1;
        }
    }
     printf ("Not found\n");
     return 1;
}