#include <stdio.h>

int num[501][501];
int check[501][501];

int main(){
	int n; 
	scanf("%d",&n);

	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			scanf("%d",&num[i][j]);
			if(i==2){
				cheeck[i][j]=num[i][j]
			}
		}
	}
	
/*	printf("\n\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			printf("%d",num[i][j]);
		}
		printf("\n");
	}*/
	return 0;
}
