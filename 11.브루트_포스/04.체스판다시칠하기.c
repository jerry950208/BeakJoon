#include <stdio.h>

char chess[50][51];
int cnt1,cnt2,cnt3,cnt4,min = 65;

int func_min(int a,int b){
	return a < b ? a :b;
}

void func_chess(int a, int b){
	
	cnt1=0;
	cnt2=0;
	cnt3=0;
	cnt4=0;

	for(int i=a; i<a+8; i++){
		for(int j=b; j<=b+8; j++){
			if(j != b+8){
				chess[a][b]='W';
				if((i+j)%2 == 0 && chess[i][j] == 'W')
					cnt1++;
				else if((i+j)%2 == 1 && chess[i][j] == 'B')
					cnt1++;
				if((i+j)%2 == 0 && chess[i][j] == 'B')
					cnt2++;
				else if((i+j)%2 == 1 && chess[i][j] == 'W')
					cnt2++;
				
				chess[a][b]='B';
				if((i+j)%2 == 0 && chess[i][j] == 'W')
					cnt3++;
				else if((i+j)%2 == 1 && chess[i][j] == 'B')
					cnt3++;
				if((i+j)%2 == 0 && chess[i][j] == 'B')
					cnt4++;
				else if((i+j)%2 == 1 && chess[i][j] == 'W')
					cnt4++;
			}
		}
	}
	printf("%d %d %d %d %d %d\n",a,b,cnt1,cnt2,cnt3,cnt4);
	if(min > func_min(cnt1,cnt2) || min > func_min(cnt3,cnt4))
		min = (func_min(cnt1,cnt2) <= func_min(cnt3,cnt4) ? func_min(cnt1,cnt2) : func_min(cnt3,cnt4));
}


int main(){
	int N,M;
	int N_div,M_div;
	scanf("%d %d",&N, &M);

	for(int i=0; i<N; i++){
		for(int j=0; j<=M; j++){
			scanf("%c",&chess[i][j]);
		}
	}

	N_div = N-7;
	M_div = M-7;

	for(int i=0; i<=N_div; i++){
		for(int j=0; j<=M_div; j++){
			func_chess(i,j);
		}
	}
	printf("%d\n",min);
	return 0;
}
