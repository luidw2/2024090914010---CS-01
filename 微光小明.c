#include <stdio.h>
int main() {
    int code;
		printf("Show me your code,please.");
        for(int i=0;i<=1;i++){
             scanf("%d",&code);
            if(code >= 100000 && code <= 999999){
                printf("I am super hacker!");
                break;
        }
            else {printf("Fake code!");
              i=0;
            }
        }
    return 0;
}