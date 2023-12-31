#include <stdio.h>
int gcd(int a, int b) {
    if(b==0) return a;
    else return gcd(b, a%b);
}
int lcm(int a, int b, int c) {
    return c * (a/c) * (b/c);
}
int main() {
    int x,y,z;
    scanf("%d %d",&x,&y);
    z = gcd(x,y);
    printf("%d\n", z);
    printf("%d\n", lcm(x, y, z));
    return 0;
}