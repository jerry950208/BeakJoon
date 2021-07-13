#include <stdio.h>
#define MAX 123456*2

int arr[MAX];

int main(){
	int n,cnt=0;
	while(1){
		scanf("%d",&n);

		if(n==0)
			break;
		for(int i=2; i<=n*2; i++){
			if(arr[i]==0){
				for(int j=i+i; j<=n*2; j+=i){
					arr[j]=1;	
				}
			}
			if(arr[i]==0 && i>n)
			cnt++;
		}
		printf("%d\n",cnt);
		cnt=0;
	}
	return 0;
}
