

    #include <stdio.h>
    int couples[200000] = {0};
    int main() {
        int group, counter1, counter2, flag, first, second;
        scanf("%d", &group);
        while (group != 0) {
            flag = 1;
            for (counter1 = 1; counter1 <= group; counter1++) {
                scanf("%d %d", &first, &second);
                couples[first] = counter1;
                couples[second] = counter1;
            }
            while (couples[1] == couples[2 * group]) {
                for (counter1 = 1; counter1 < 2 * group - 1; counter1++)
                    couples[counter1] = couples[counter1 + 1];
                group--;
            }
            while (group >= 2) {
                flag = 0;
                for (counter1 = 1; counter1 <= 2 * group; counter1++) {
                    if (couples[counter1] == couples[counter1 + 1]) {
                        for (counter2 = counter1; counter2 <= 2*group-2; counter2++)
                            couples[counter2] = couples[counter2 + 2];
                        group--;
                        flag = 1;
                    }
                }
                if (flag != 1) break;
            }
            if (flag == 0) printf("No\n");
            else printf("Yes\n");
            scanf("%d", &group);
        }
        return 0;
    }


