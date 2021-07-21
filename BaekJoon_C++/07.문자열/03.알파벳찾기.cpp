/*
	알파벳찾기
	알파벳 소문자로만 이루어진 단어가 주어진다
	각각의 알파벳에 대해서 단어에 포함되어 있는 경우에는 처음 등장하는 위치를
	포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오
	-포함되어 있지 않다면 -1 출력하라
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	char S[101];
	int alpha[26];

	for(int i=0; i<26; i++)
		alpha[i] = -1;
	cin >> S;
	
	for(int i=0; i<strlen(S); i++){
		if(S[i] > 96 && alpha[S[i]-97] == -1)
			alpha[S[i]-97] = i;
	}
	for(int i=0; i<26; i++)
		cout << alpha[i] << " ";

	cout << endl;	
}
