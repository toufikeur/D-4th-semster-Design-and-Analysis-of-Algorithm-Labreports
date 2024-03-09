#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, l, sum_l = 0, cnt_liars = 0;
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &l);
            if (l == 0) {
                cnt_liars++;
            }
            sum_l += l;
        }

        if (cnt_liars > 1) {
            printf("-1\n"); // contradictory statements
        } else {
            int cnt_truth = n - cnt_liars;
            int max_liars = sum_l - cnt_truth;
            if (max_liars < 0) {
                max_liars = 0;
            }
            printf("%d\n", max_liars);
        }
    }

    return 0;
}

