#include <stdio.h>
#include <math.h>
int main() {
    int n,p = 0;
    scanf("%i",&n);
    while(n!=1){
        for(int x = 2; x <= sqrt(n);x++){
            if(n%x == 0){
                n -= n / x;
                p += x-1;
                goto composite;
            }
        }
        n -= 1;
        p += n;
        composite:;
    }
    printf("%i",p);
    return 0;
}