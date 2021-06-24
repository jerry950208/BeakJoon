#include <stdio.h>
int cnt;
int arr[21][21][21];

int func(int a, int b, int c){
	if(a <= 0 || b <= 0 || c <= 0)
		return 1;
	if(a >20 || b > 20 || c > 20)
		return func(20,20,20);
	if(arr[a][b][c]==0){
		if(a < b && b < c){	
			arr[a][b][c] = func(a,b,c-1) + func(a,b-1,c-1) - func(a,b-1,c);
			return func(a,b,c-1) + func(a,b-1,c-1) - func(a,b-1,c);
		}
		else{	
			arr[a][b][c]= func(a-1,b,c) + func(a-1,b-1,c) + func(a-1,b,c-1) - func(a-1,b-1,c-1);
			return func(a-1,b,c) + func(a-1,b-1,c) + func(a-1,b,c-1) - func(a-1,b-1,c-1);
		}
	}
	else 
		return arr[a][b][c];
}

int main(){
	int a,b,c;
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a == -1 && b == -1 && c == -1)
			break;
		
		else{
			printf("w(%d, %d, %d) = %d\n",a,b,c,func(a,b,c));
			cnt=0;
		}
	}
	return 0;
}
