#include <stdio.h>

int num[1001];

int main(){
	int N, min=1000;
	scanf("%d",&N);
	
	for(int i=0; i<N; i++)
		scanf("%d",&num[i]);
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(min>num[j])
				min=num[j];
		}
		printf("%d\n",min);
		for(int j=0; j<N; j++){
			if(min==num[j]){
				num[j]=1001;
				min=1000;
			}
		}
	}	
	return 0;
}
