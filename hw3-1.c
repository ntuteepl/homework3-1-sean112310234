#include <stdio.h>

int main(){
int a,b;

scanf("%d",&a);

for(b=2; b<a && a%b!=0; ++b);

if(a==b){

printf("YES");
}
else{

printf("NO");
}
}


