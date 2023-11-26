# include <stdio.h>
int main(){
    int dp[1000001]={0};
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1];
        if(i%3==0){
            dp[i]=dp[i] < dp[i/3] ? dp[i] : dp[i/3];
        }
        if(i%2==0){
            dp[i] = dp[i] < dp[i/2] ? dp[i] : dp[i/2];
        }
        dp[i]++;
    }
    printf("%d",dp[n]);
    return 0;
}