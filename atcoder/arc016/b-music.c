#include<stdio.h>

int main()
{
    int n, count = 0, i;
    char stat[10] = ".........";
    char row[12];

    scanf("%d", &n);
    while (n--) {
        scanf ("%s", row);
        for (i = 0; i < 9; i ++) {
            if (row[i] == 'o' && stat[i] != 'o')
                count ++;
            if (row[i] == 'x')
                count ++;
            stat[i] = row[i];
        }
    }

    printf("%d\n", count);
    return 0;
}
