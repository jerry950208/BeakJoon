#include <stdio.h>

int pys[51][2];

int main(){
	int N,cnt;

	scanf("%d",&N);

	for(int i=0; i<N; i++){
		scanf("%d %d",&pys[i][0],&pys[i][1]);
	}

	for(int i=0; i<N; i++){
		cnt=1;
		for(int j=0; j<N; j++){
			if(pys[i][0] < pys[j][0] && pys[i][1] < pys[j][1]){
				cnt++;
			}
		}
		printf("%d ",cnt);
	}
	return 0;
}
