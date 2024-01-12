#include <stdio.h>
int main() {
    int n,m;
    char a;
    int x1=-1, y1=-1, x2=-1, y2=-1;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf(" %c",&a);
            if(a == '1'){
                if(x1 == -1) {
                    x1 = i; 
                    y1 = j;
                }
                else {
                    x2 = i; 
                    y2 = j;
                }
            }
        }
    }
    printf("%d\n",abs(x2-x1) + abs(y2-y1));
    return 0;
}
