#include <stdio.h>
#include <math.h>

void hanoi(int n, int start, int mid, int end){
	if(n==1)
		printf("%d %d\n",start,end);
	else{
		hanoi(n-1,start,end,mid);
		printf("%d %d\n",start,end);
		hanoi(n-1,mid,start,end);
	}
}

int main(){
	int N;
	int a,b,cnt;

	scanf("%d",&N);

	cnt = pow(2,N)-1;
	printf("%d\n",cnt);
	
	hanoi(N,1,2,3);
	return 0;
}
