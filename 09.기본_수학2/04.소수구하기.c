#include <stdio.h>
#define MAX 1000000
int arr[MAX];
int main(){
        int M,N;
        int cnt;
        scanf("%d %d",&M,&N);
		
		for(int i=2; i<=MAX; i++){
			if(arr[i]==0){
				for(int j=i+i; j<=N; j+=i){
					arr[j]=1;
				}
				if(i>=M)
				printf("%d\n",i);
			}
			if(i==N)
				break;
		}
        return 0;
}
