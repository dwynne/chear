#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    printf("%3s %6s\n", "C", "F");

    for (float fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    {
        printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
}