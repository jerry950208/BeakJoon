/*
	한수
	어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다
	1보다 크거나 같고, N보다 작거나 같은 한수의 개수 출력
*/
#include <iostream>

using namespace std;

int func_han(int n){
	int cnt;
	int a,b,c;
	if(n < 100){
		cnt = n;
	}
	else{
		cnt = 99;
		for(int i=100; i<=n; i++){
			a = i % 10;
			b = (i / 10) % 10;
			c = i / 100;
			if(a - b == b - c)
				cnt++;
		}
	}

	return cnt;
}

int main(){
	
	int N;

	cin >> N;

	cout << func_han(N) << endl;

}
