#include <stdio.h>
#include <stdlib.h>

main(){
    int a = 5, b = 4, c = 3, d = 2;
printf("a = 5, b = 4, c = 3, d = 2\n\n");
    if(a <= b + 1) {
        printf("a <= b + 1 is True\n");
        }
        else{
            printf("a <= b + 1 is False\n");
        }
        if(a < b && c > b) {
            printf("a < b && c > b is True\n");
        }
        else{
            printf("a < b && c > b is False\n");
        }
        if(a >= c || d >=5){
            printf("a >= c || d >=5 is True\n");
        }
        else{
            printf("a >= c || d >=5 is False\n");
        }
        if(!(a > b)){
            printf("!(a > b) is True\n");
        }
        else {
            printf("!(a > b) is False\n");
        }
        if( b >= a && !(d < b)){
            printf("b >= a && !(d < b) is True\n");
        }
        else {
            printf("b >= a && !(d < b) is False\n");
        }
        return 0;
}