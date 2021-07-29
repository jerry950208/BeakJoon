/*
	골드바흐의 추측
	2보다 큰 모든 짝수는 두 소수의 합으로 나타낼수 있다

	2보다 큰 짝수 n이 주어졌을 때,n의 골드바흐 파티션을 출력하는 프로그램을 작성
	두 소수의 차가 가장 작은것을 출력한다
*/
#include <iostream>

using namespace std;

int temp;

void func_partition(int n);

int main(){
	
	int T,n;
	cin >> T;

	for(int i=0; i<T; i++){
		cin >> n;
		func_partition(n);
		cout << n - temp << " " << temp << endl;
	}
}

void func_partition(int n){
	
	int check[10001] = { 0 };
	int min=10001,cnt = 0;
	int demical[10001] = { 0 };

	check[0] = 1;
	check[1] = 1;

	for(int i=2; i<=n; i++){
		for(int j=i+i; j<=n; j+=i){
			check[j] = 1;
		}
	}

	for(int i=0; i<=n; i++){
		if(check[i] == 0){
			demical[cnt] = i;
			cnt++;
		}
	}
	
	for(int i=0; i<cnt; i++){
		for(int j=0; j<cnt; j++){
			if(demical[i] + demical[j] == n && demical[i] - demical[j] < min && demical[i] - demical[j] >= 0){
				min = demical[i] - demical[j];
				temp = demical[i];
			}
		}
	}
}
