#include <stdio.h>
#include <string.h>

int main() {
    int n, m, w, i, l;
    char c[105];
    while (scanf("%d\n", &n) != EOF) {
        gets(c);
        m = w = 0;
        l = strlen(c);
        for (i = 0; i < l; i++) {
            if (c[i] == 'M') m++;
            else w++;
            if (m - w > n || w - m > n) {
                if (m - w > n && i + 1 < l && c[i + 1] == 'W') {
                    w++;
                    i++;
                }
                else if (w - m > n && i + 1 < l && c[i + 1] == 'M') {
                    m++;
                    i++;
                }
                else {
                    break;
                }
            }
        }
        printf("%d\n", i);
    }
    return 0;
}
