#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);
    
    int c ; 
    if((d1<=s2&&d2<=s3)||(d2<=s3&&d3<=s1)||(d3<=s2&&d2<=s1)||
    (d1<=s3&&d3<=s2)||(d2<=s1&&d1<=s3)||(d3<=s1&&d1<=s2))
    {
        c=1;
    }
    
    else if( (d1>=s2&&d1>=s3&&d3>=s1)||(d1>=s3&&d2>=s1&&d3>=s2)) {
        c=3; 
    }
    else{
        c=2;
    }
    
    printf("%d", c);
}


