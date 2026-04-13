#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;   // FIX 1: initialize sum

    printf("Enter a number: ");
    scanf("%d", &n);   // FIX 2: add &

    for(i = 1; i <= n; i++)   // FIX 3: remove extra semicolon
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}


