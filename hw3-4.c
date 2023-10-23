#include <stdio.h>
int main() {
    int a, b;
    scanf("%d", &a);
    int A[4] = {a/1000,(a%1000)/100,(a%100)/10,a%10};
    scanf("%d", &b);
    int B[4] = {b/1000,(b%1000)/100,(b%100)/10,b%10};

    int c = 0; 
    int d = 0; 

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (A[i] == B[j] && i != j) {
                c += 1;}
            if (A[i] == B[j] && i == j) {
                d += 1;}
        }
    }

    printf("%dA %dB", d, c);

    return 0;
}
