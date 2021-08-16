/*
	괄호
	괄호문자열은 ( 와 ) 만 이루어져있는 문자열이다 
	그 중에서 괄호의 모양이 바르게 구성된 문자열을 VPS(올바른 괄호 문자열)이라 부른다
	
	N만큼 입력을 받고 VPS이면 YES, 아니면 NO를 출력하라
*/
//'('만 스택에 넣고  ')' 는 그냥 입력받기
#include <iostream>
#include <string>
#include <stack>

using namespace std;


void func_Check(string a);

int main(void){
	
	int N;
	string str;
	cin >> N;

	for(int i=0; i<N; i++){
		
		cin >> str;
		func_Check(str);
	}
}

void func_Check(string str){

	int len = str.length();
	stack<int> s;

	for(int i=0; i<len; i++){
		if(str[i] == '(')
			s.push(str[i]);

		else{
			if(i == 0 || s.size() == 0) goto No;
			
			else s.pop();
		}
	}

	if(s.size() == 0)
		puts("YES");
	else{
		No :
		puts("NO");
	}
}
/*
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool func_Bracket(string str);

int main(void){
	
	int N;
	string str;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> str;

		if(func_Bracket(str))
			puts("Yes");
		else
			puts("NO");
	}
}

bool func_Bracket(string str){

	int str_len = (int)str.length();
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
}*/
