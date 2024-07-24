#include <stdio.h>
int main() {
    int burger[3], drink[2], a=2001, b=2001;
    for(int i=0;i<3;i++) {
        scanf("%d",&burger[i]);
        if(burger[i] < a) a = burger[i];
    }
    for(int i=0;i<2;i++) {
        scanf("%d",&drink[i]);
        if(drink[i] < b) b = drink[i];
    }
    printf("%d",a+b-50);
    return 0;
}