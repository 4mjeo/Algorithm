#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int p,m,a[501]={0,},b=0;
        scanf("%d %d",&p,&m);
        for(int j=0;j<p;j++){
            int r;
            scanf("%d",&r);
            if(a[r] == 1) b++;
            else a[r] = 1;
        }
        printf("%d\n",b);
    }
    return 0;
}
