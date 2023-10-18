include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);
    
    int cars_needed = 1;  
    

    if (s2 < d1) {
        cars_needed++;
    }
    

    if (s3 < d1 || s3 < d2) {
        cars_needed++; 
    }
    
    printf("%d", cars_needed);
    
    return 0;
}

