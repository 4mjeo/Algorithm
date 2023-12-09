#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        int r=1;
        if(i<2) r=-1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                r=-1;
                break;
            }
        }
        if(r==1) printf("%d\n",i);
    }
    return 0;
}