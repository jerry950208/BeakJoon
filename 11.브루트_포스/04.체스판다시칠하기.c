#include <stdio.h>

char chess[51][51];
int min;

int main(){
        int N,M;
        int cnt=0;
		int N_div, M_div,temp;
        scanf("%d %d",&N, &M);
		N_div = N-8;
		M_div = M-8;

        for(int i=0; i<N; i++){
                for(int j=0; j<=M; j++){
                        scanf("%c",&chess[i][j]);
                }
        }
		for(int a=0; a<N_div; a++){
			for(int b=0; b<M_div; b++){
        		for(int i=0; i<N; i++){
                	for(int j=0; j<M; j++){
                        if((i+j)%2 == 0 && chess[i][j] == 'W')
                        cnt++;
                        else if((i+j)%2 == 1 && chess[i][j] == 'B')
                        cnt++;
					}
				}
				temp = cnt <= 36 ? cnt : 76-cnt;
				if(min < temp)
					min = temp;
				cnt = 0;
            }
        }
        printf("%d\n",min);
        return 0;
}
