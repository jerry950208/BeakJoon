/*
	단어공부
	알파벳 대소문자로 된 단어가 주어지면
	이 단어에서 가장 많이 사용된 알파벳을 출력하시오
	
	출력은 대문자로 하고
	가장 많이 사용된 알파벳이 여러개 존재하는 경우에는?를 출력
*/
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
	
	char input[1000000];
	int alpha[26];
	int max = 0, cnt = 0, temp;
	cin >> input;
	

	for(int i=0; i<26; i++)//		alpha 배열을 '0'으로 초기화
		alpha[i] = 0;
	//A : 65, a : 97
	int input_len = strlen(input);

	for(int i=0; i<input_len; i++){//소문자로 입력이 들어올경우 대문자로 바꿔줌
		if(input[i] >= 97){
			input[i] -= 32;
		}
	}

	for(int i=0; i<input_len; i++){//가장 많이 쓰인 알파벳 찾기
		alpha[input[i]-65] += 1;
		if(alpha[input[i]-65] > max)
			max = alpha[input[i]-65];
	}

	for(int i=0; i<26; i++){//		많이 쓰인 알파벳이 중복되는지 확인
		if(alpha[i] == max){
			cnt++;
			temp = i;
		}
	}
	if(cnt > 1)//					중복될경우 ? 출력
		cout << "?" << endl;
	else//							아닐경우 해당 알파벳 출력
		cout <<char(temp+65) << endl;
}
