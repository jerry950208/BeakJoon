/*
        정수삼각형
*/
#include <stdio.h>
//#define maxFinder(a,b) a > b ? a : b

int arr[500][500];
int Dp[500][500];
int maxFinder(int a, int b);

int main(void){

        int N,max = 0;
        scanf("%d",&N);

        for(int i=0; i<N; i++){
                for(int j=0; j<=i; j++){

                        scanf("%d",&arr[i][j]);

                        if(i == 0)
                                Dp[i][j] = arr[i][j];

                        else{
                                if(j == 0)
                                        Dp[i][j] = Dp[i-1][j] + arr[i][j];

                                else if(j == i)
                                        Dp[i][j] = Dp[i-1][j-1] + arr[i][j];

                                else
                                        Dp[i][j] = maxFinder(Dp[i-1][j-1], Dp[i-1][j]) + arr[i][j];
                        }
                }
        }

        for(int i=0; i<N; i++)
               max = maxFinder(max, Dp[N-1][i]);

        printf("%d\n",max);
        return 0;
}

int maxFinder(int a, int b){
	
	if(a > b)
		return a;

	else
		return b;
}
