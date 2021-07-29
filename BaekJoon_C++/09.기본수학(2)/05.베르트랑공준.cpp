/*
	베르트랑 공준
	베르트랑 공준 : 임의의 자연수 n에 대하여, n보다 크고 2n보다 작거나 같은 소수는 
	적어도 하나 존재한다
	
	자연수 n이 주어졌을때, n보다 크고 2n보다 작거나 같은 소수의 개수를 구하는 프로그램
*/
#include <iostream>
#define Max 123456*2
using namespace std;

int func_Prime(int n);

int main(){

	int n;

	while(1){

		cin >> n;
		
		if(n == 0)
			break;
		
		else
		cout << func_Prime(n) << endl;
	
	}

}

int func_Prime(int n){
	
	int cnt = 0, n_Double = 2 * n;
	int check[Max] = { 0 };
	
	check[0] = 1;
	check[1] = 1;

	for(int i=2; i<=n_Double; i++){
		for(int j=i+i; j<=n_Double; j+=i)
			check[j] = 1;
	}

	for(int i=n+1; i<=n_Double; i++){
		if(check[i] == 0)
			cnt++;
	}

	return cnt;
}
