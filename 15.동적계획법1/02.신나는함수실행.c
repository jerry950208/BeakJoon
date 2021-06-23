#include <stdio.h>
int cnt;
int arr[21][21][21];
int func(int a, int b, int c){
	if(a <= 0 || b <= 0 || c <= 0)
		return 1;
	if(a >20 || b > 20 || c > 20)
		return func(20,20,20);
	if(a < b && b < c)
		return func(a,b,c-1) + func(a,b-1,c-1) - func(a,b-1,c);
	else{
		return func(a-1,b,c) + func(a-1,b-1,c) + func(a-1,b,c-1) - func(a-1,b-1,c-1);
	}
}
int main(){
	int a,b,c;
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a == -1 && b == -1 && c == -1)
			break;
		else{
	//	func(a,b,c);
		printf("%d\n",func(a,b,c));
		cnt=0;
		}
	}
	return 0;
}
