#include <stdio.h>
int apt[15][15];
int main(){
	int T,k,n;
	scanf("%d",&T);
	for(int i=1; i<15; i++){
		apt[0][i]=i;
	}
	for(int i=1; i<15; i++){
		for(int j=1 ;j<15; j++){
			apt[i][j]=apt[i-1][j]+apt[i][j-1];
		}
	}
	
	for(int i=0; i<T; i++){
		scanf("%d %d",&k,&n);
		printf("%d\n",apt[k][n]);
	}
	return 0;
}
