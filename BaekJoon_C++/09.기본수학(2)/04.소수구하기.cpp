/*
	소수구하기
	M이상 N이하의 소수를 모두 출력하는 프로그램 작성
*/
#include <iostream>

using namespace std;

void func_Prime(int M, int N);

int main(){
	
	int M,N;
	cin >> M >> N;

	func_Prime(M,N);

}

void func_Prime(int M, int N){
	
	int arr[1000001] = { 0 };
	arr[0] = 1;
	arr[1] = 1;

	for(int i=2; i<=N; i++){
		for(int j=i+i; j<=N; j+=i){
				arr[j] = 1;
		}
	}

	for(int i=M; i<=N; i++){
		if(arr[i] == 0)
			printf("%d\n",i);
	}
		
}
