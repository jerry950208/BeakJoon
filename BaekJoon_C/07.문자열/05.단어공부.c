#include <stdio.h>
#include <string.h>
#define MAX 1000000

int arr[MAX];
int alpa[26];
int max, count;

int main()
{
    char input[MAX];
    int num = 0, size;

    scanf("%s", input);
    size = strlen(input);

    for (int i = 0; i < size; i++)
    {
        if (input[i] > 90)
        {
            input[i] -= 32;
        }
        input[i] -= 'A';
        alpa[input[i]] += 1;
        if (alpa[input[i]] > max)
        {
            max = alpa[input[i]];
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (alpa[i] == max)
        {
            count++;
            num = i;
        }
    }

    if (count > 1)
        printf("?\n");
    else if (count == 1)
        printf("%c\n", num + 'A');
    return 0;
}
