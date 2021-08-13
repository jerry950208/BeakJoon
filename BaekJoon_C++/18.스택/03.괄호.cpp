/*
	괄호
	괄호문자열은 ( 와 ) 만 이루어져있는 문자열이다 
	그 중에서 괄호의 모양이 바르게 구성된 문자열을 VPS(올바른 괄호 문자열)이라 부른다
	
	N만큼 입력을 받고 VPS이면 YES, 아니면 NO를 출력하라
*/
//'('만 스택에 넣고  ')' 는 그냥 입력받기
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool Check(string str);

int main(void){
	
	int N;
	string str;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> str;
		
		if(Check(str))
			puts("Yse");
		
		else
			puts("NO");
	}
}

bool Check(string str){

	int str_len = str.length();
	stack<char> s;

	for(int i=0; i<str_len; i++){
		
		if(str[i] == '(')
			s.push(str[i]);

		else{
			if(!s.empty())
				s.pop();
			else
				return false;
		}
	}

	return s.empty();
}
