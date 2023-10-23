#include <stdio.h>

int sumOfDigits(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int s1 = sumOfDigits(n1);
    int s2 = sumOfDigits(n2);

    if (s1 < s2) {
        printf("%d %d\n", n1, n2);
    } else if (s1 > s2) {
        printf("%d %d\n", n2, n1);
    } else {
        if (n1 < n2) {
            printf("%d %d\n", n1, n2);
        } else {
            printf("%d %d\n", n2, n1);
        }
    }

    
}
