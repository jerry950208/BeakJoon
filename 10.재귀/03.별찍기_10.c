#include <stdio.h>
#include <math.h>
#define MAX 6562
char star[2500][2500];
void func_star(N){
	for(int i=0;i<N;i++){
		for(int j=0; j<N; j++){
			star[i][j]='*';
		}
	}
}

void space1(int x, int y, int cnt){
	for(int i=x; i<x+pow(3,cnt); i++){
		for(int j=y; j<y+pow(3,cnt); j++){
			star[i][j]=' ';
		}
	}
}

void space2(int n, int cnt){
	if(n>0){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				space1(pow(3,cnt)+i*pow(3,cnt+1),pow(3,cnt)+j*pow(3,cnt+1),cnt);
			}
		}
		space2(n/3,cnt+1);
	}
}

int main(){
	int N;
	scanf("%d",&N);

	func_star(N);
	space2(N/3,0);

	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			printf("%c",star[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
