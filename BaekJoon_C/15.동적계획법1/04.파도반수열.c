#include <stdio.h>

long long dp[101];

int main(){
        int T,N;
        scanf("%d",&T);

        for(int i=0; i<3; i++)
                dp[i] = 1;

        for(int i=0; i<T; i++){
                scanf("%d",&N);
                for(int j=3; j<N; j++){
                        if(dp[j] == 0)
                                dp[j] = dp[j-2] + dp[j-3];
                }
                printf("%lld\n",dp[N-1]);
        }
        return 0;
}
