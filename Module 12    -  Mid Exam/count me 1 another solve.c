#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int divided_by_2 = 0;
    int divided_by_3 = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            divided_by_2++;

        }
        if (arr[i] % 3 == 0) {
            divided_by_3++;
        }
    }

    printf("%d %d\n", divided_by_2, divided_by_3);

    return 0;
}
