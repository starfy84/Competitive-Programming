#include <stdio.h>
#include <stdbool.h>
int main() {
    int c;
    bool t=false,f=false;
    scanf("%i",&c);
    for(int x = 0 ; x < c ; x++){
        int a;
        char b[6];
        scanf("%i",&a);
        switch(a){
            case 1:
                scanf("%s",&b);
                if(b[0] == 't' && t){
                    printf("false");
                }
                else if(b[0] == 't' && !t){
                    printf("true");
                    t = true;
                }
                else if(b[0] == 'f' && f){
                    printf("false");
                }
                else if(b[0] == 'f' && !f){
                    printf("true");
                    f = true;
                }  
                break;
            case 2:
                scanf("%s",&b);
                if(b[0] == 't' && t){
                    printf("true");
                    t = false;
                }
                else if(b[0] == 't' && !t){
                    printf("false");
                }
                else if(b[0] == 'f' && f){
                    printf("true");
                    f = false;
                }
                else if(b[0] == 'f' && !f){
                    printf("false");
                }  
                break;
            case 3:
                scanf("%s",&b);
                if(b[0] == 't'){
                    printf("%i",t?1:-1);
                }
                else if(b[0] == 'f'){
                    printf("%i",f?0:-1);
                }
                break;
            case 4:
                if(f){
                    printf("false");
                }
                if(t){
                    printf(" true");
                }
                break;
        }
        printf("\n");
    }
    return 0;
}