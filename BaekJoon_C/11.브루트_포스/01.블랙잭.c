#include <stdio.h>

int main(){
	int n,m;
	int card[100];
	int num=0;

	scanf("%d %d",&n,&m);

	for(int i=0; i<n; i++){
		scanf("%d",&card[i]);
	}
	while(1){
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				for(int k=j+1; k<n; k++){
					if(card[i]+card[j]+card[k]==m){
					printf("%d\n",m);
					return 0;
					}
				}
			}
		}
		m-=1;
	}
	return 0;
}
