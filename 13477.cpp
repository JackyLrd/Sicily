#include <stdio.h>
int main() {
    int num;
    int i, j;
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        if (i != 0)
        for (j = 1; j <= i + 1; j++) {
            printf("%d ", j);
        }
        for (j = i; j >= 2; j--) printf("%d ", j);
        printf("1\n");
    }
    return 0;
}
