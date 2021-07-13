#include <stdio.h>

int main(){
	int C;
	int N,arr[1000]={0,};
	float avg;
	int cnt;

	scanf("%d",&C);
	for(int i=0;i<C;i++){
		avg=0.0;
		cnt=0;
		scanf("%d",&N);
		for(int j=0;j<N;j++){
			scanf("%d",&arr[j]);
			avg+=arr[j];
		}
		avg=avg/N;
		for(int j=0; j<N; j++){
			if((float)arr[j]>avg)
				cnt++;
		}
		printf("%.3f%%",(float)cnt/N*100);
	}	
	return 0;
}
