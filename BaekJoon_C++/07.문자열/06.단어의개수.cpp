/*
	단어의 개수
	영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다
	해당 문자열에는 몇개의 단어가 있을지 구하는 프로그램 작성
	한 단어가 여러번 등장하면 등장한 횟수만큼 세어야한다

	단어 구분은 띄어쓰기 한개로 구분되며 공백이 연속으로 나오는 경우는 없다
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string str;
	getline(cin,str); //				공백이 있는 문자열을 받을때는 getline으로 받아야한다
	
	int cnt = 0; bool flag = true;
	
	for(int i=0; i<str.length(); i++){
		if(str[i] == ' '){// 			공백이 나올경우 flag를 true로 해준다
			flag = true;
		}
		else if(flag){//				공백이 끝나고 단어가 나올경우 cnt++과 flase로 변환
			flag = false;
			cnt++;
		}
	}	
	cout << cnt << endl;
	
}
