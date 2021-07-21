/*
	크로아티아 알파벳
	c=	c- dz=	d-	lj	nj	s=	z= 해당 글자들은 하나의 알파벳으로 본다
	입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력해라
*/
#include <iostream>

using namespace std;

int main(){
	
	string word;
	int cnt = 0;

	cin >> word;

	for(int i=0; i<word.length(); i++){
		if(word[i] == '='){
			if(word[i-1] == 'c' || word[i-1] == 's' || word[i-1] == 'z'){
				cnt++;
				if(word[i-1] == 'z' && word[i-2] == 'd'){
					cnt++;
				}
			}
		}
		else if(word[i] == '-'){
			if(word[i-1] == 'c' || word[i-1] == 'd')
				cnt++;
		}
		else if(word[i] == 'j'){
			if(word[i-1] == 'l' || word[i-1] == 'n')
				cnt++;
		}
	}
	cout << word.length() - cnt << endl;
}
