/*
	분해합
	
	자연수 N이 있을때 그 자연수 N의 분해합은 N과 N을 이루는 각 자리수의 합을 의미한다
	어떤 자연수 M의 분해합이 N인경우 M과 N의 생성자라고 한다

	자연수 N이 주어졌을때, N의 가장 작은 생성자를 구해내는 프로그램을 작성하시오
	생성자가 없을경우에는 0을 출력한다
*/
#include <iostream>

using namespace std;

int func_Decomposition(int num);

int main(void){
	
	int N,result=0;
	cin >> N;

	for(int i=N; i>=0; i--){
		
		int sum;
		sum = func_Decomposition(i) + i;
		
		if(sum == N)
			result = i;
	
		if(i == 0 && result == 0){
			cout << i << endl;
			return 0;
		}
	}
	
	cout << result << endl;
	
}

int func_Decomposition(int num){
	
	int sum = 0;
	
	while(1){
		
		if(num == 0)
			break;

		else{
			sum += num%10;
			num /= 10;
		}
	}
	return sum;
}
