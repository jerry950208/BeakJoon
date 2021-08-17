/*
	스택수열
	
	1부터 N까지의 수를 스택에 넣음으로써 하나의 수열을 만들 수 있다
	이때, 스택에 push하는 순서는 반드시 오름차순을 지키도록 한다고 하자
	임의의 수열이 주어졌을때 스택을 이용해 그 수열을 만들수 있는지 없는지.
	있다면 어떤 순서로 push와 pop연산을 수행해야하는지를 알아낼수 있다
	이를 계산하는 프로그램을 작성하라
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int check_cnt, str_cnt, flag;
char str[200050];	//'+' or '-'을 저장하는 배열
stack<int> s;

void func_Sequence(int N);

int main(void){
	
	int N, arr[100000];
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> arr[i];
		func_Sequence(arr[i]);	//입력받는대로 확인하는 함수
	}

	if(flag == 1)
		cout << "NO" << "\n";

	else
		for(int i=0; i<str_cnt; i++)
			cout << str[i] << "\n";
}

void func_Sequence(int N){
	
	if(check_cnt < N){	//check_cnt(이전 매개변수)와 현재 매개변수를 비교
		for(int i=check_cnt+1; i<=N; i++){
			s.push(i);
			str[str_cnt++] = '+';
		}
		check_cnt = N;	//check_cnt = 이전 매개변수를 저장해준다
	}
	
	if(N == s.top()){	//반복문을 지나온 스택을 확인(가장 위에있는 스택과 매개변수 비교)
		s.pop();
		str[str_cnt++] = '-';
	}
	
	else if(N != s.top())	//불가능한 경우를 체크해준다
		flag = 1;
}
