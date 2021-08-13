/*
	제로
	잘못된 수가 입력될때마다 0을 입력하여 가장 최근의 숫자를 지운다
	지운숫자를 제외한 나머지 수를 다 더한값을 출력해라
*/
#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main(void){
	
	int N, num, sum = 0;
	cin >> N;

	for(int i=0; i<N; i++){
		
		cin >> num;
		if(num != 0){
			s.push(num);
			sum += num;
		}
		
		else{
			sum -= s.top();
			s.pop();
		}
	}

	cout << sum << "\n";
}
