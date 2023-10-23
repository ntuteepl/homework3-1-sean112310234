#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);
    
    int c = 1;  
    

    if ((s2>d1)||(s2>d3)||(s3>d1)||(s3>d2)||(s1>d2)||(s1>d3
    )) {
        c++;
    }
    

    if (s3 < d1 || s3 < d2) {
        c++; 
    }
    
    printf("%d", c);
    
    
}
