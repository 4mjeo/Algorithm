#include <stdio.h>
 
int main(void){
    int A, B;
    
    while(1){
        if(scanf("%d %d", &A, &B) == EOF) // EOF는 입력의 종료를 의미. 'Ctrl+Z (^Z)'로 시행
            break;
        else
            printf("%d\n", A+B);
    }
}