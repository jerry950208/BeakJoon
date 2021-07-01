#include <stdio.h>

long long dp[1000000];

int main(){
        int N;
        dp[0]=1;
        dp[1]=2;
        scanf("%d",&N);
        for(int i=2; i<N; i++){
                dp[i]=(dp[i-1] + dp[i-2])%15746;
        }

        printf("%lld\n",dp[N-1]);
        return 0;
}
