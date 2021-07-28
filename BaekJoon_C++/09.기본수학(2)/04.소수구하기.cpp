/*
	소수구하기
	M이상 N이하의 소수를 모두 출력하는 프로그램 작성
*/
#include <iostream>

using namespace std;

bool check[1000000];

void func_Prime(int M, int N);

int main(){
	
	int M,N;
	cin >> M >> N;
	
	func_Prime(M,N);

	for(int i=M; i<=N; i++){
		
	}
}

void func_Prime(int M, int N){

}
/*
#include <iostream>

using namespace std;

bool check[1000000];

int main(){
	
	int M,N;
	int cnt;
	cin >> M >> N;
		
	for(int i=2; i<=N; i++){
		if(check[i] == 0){
			for(int j=i+i; j<=N; j+=i){
				check[j] = 1;
			}
			if(i >= M)
				cout << i << endl;
		}
		if(i == N)
			break;
	}
}*/
