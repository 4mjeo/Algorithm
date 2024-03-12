#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n%4 == 1 || n%4==3) printf("CY");
    else printf("SK");
    return 0;
}