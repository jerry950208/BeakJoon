#include <stdio.h>

int arr[501][501];
long long dp[501][501];

int main(){
        int N;
        long long max = 0;
        scanf("%d",&N);

        for(int i=0; i<N; i++){
                for(int j=0; j<=i; j++){
                        scanf("%d",&arr[i][j]);
                        dp[i][j] = arr[i][j];

                        if(i>0){
                                if(j == 0)
                                        dp[i][j] = arr[i][j] + dp[i-1][j];

                                else if(j == i)
                                        dp[i][j] = arr[i][j] + dp[i-1][j-1];

                                else
                                        dp[i][j] = arr[i][j] + (dp[i-1][j-1] >= dp[i-1][j] ? dp[i-1][j-1] : dp[i-1][j]);
                                if(i == N-1)
                                        if(max < dp[i][j])
                                                max = dp[i][j];
                        }
                }
        }

        printf("%lld\n",max);
        return 0;
}
