#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 1 || n >= 50) {
        printf("n is not inside 50\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (isPrime(num)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
