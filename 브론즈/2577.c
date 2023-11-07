#include <stdio.h>
int main(){
    int arr[10]={0,};
	int a,b,c,n;
	scanf("%d %d %d",&a,&b,&c);
	int sum = a*b*c;
	while(sum>0){
	    n = sum%10;
	    arr[n]++;
	    sum/=10;
	}
	for(int i=0;i<10;i++){
	    printf("%d\n",arr[i]);   
	}
	return 0;
}