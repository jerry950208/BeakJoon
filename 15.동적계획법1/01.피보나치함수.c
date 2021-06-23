#include <stdio.h>

int dp[41][2];

int main(){
        int T,N;
        dp[0][0]=1;
        dp[1][1]=1;
        scanf("%d",&T);
        for(int i=0; i<T; i++){
                scanf("%d",&N);
                if(dp[N][0]==0 && dp[N][1]==0)
                        for(int j=2; j<=N; j++){
                                dp[j][0]= dp[j-1][0] + dp[j-2][0];
                                dp[j][1]= dp[j-1][1] + dp[j-2][1];
                        }
                printf("%d %d\n",dp[N][0],dp[N][1]);
        }

        return 0;
}
