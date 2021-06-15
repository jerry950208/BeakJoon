#include <stdio.h>
#include <string.h>
//2 5 8 11 14 18 21 25
int main()
{
    char dial[16];
    int size, sum = 0;
    scanf("%s", dial);
    size = strlen(dial);
    for (int i = 0; i < size; i++)
    {
        dial[i] -= 'A';
        if (dial[i] >= 0 && dial[i] <= 2)
            sum += 3;
        else if (dial[i] >= 3 && dial[i] <= 5)
            sum += 4;
        else if (dial[i] >= 6 && dial[i] <= 8)
            sum += 5;
        else if (dial[i] >= 9 && dial[i] <= 11)
            sum += 6;
        else if (dial[i] >= 12 && dial[i] <= 14)
            sum += 7;
        else if (dial[i] >= 15 && dial[i] <= 18)
            sum += 8;
        else if (dial[i] >= 19 && dial[i] <= 21)
            sum += 9;
        else if (dial[i] >= 22 && dial[i] <= 25)
            sum += 10;
    }
    printf("%d", sum);
    return 0;
}
