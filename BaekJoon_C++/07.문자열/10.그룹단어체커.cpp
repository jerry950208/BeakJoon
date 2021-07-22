/*
	그룹 단어 체커
	그룹 단어 체커는 각 문자가 연속해서 나타나는 경우만을 말한다
	첫째줄에 단어개수 N개입력
	둘째줄 부터 단어 입력, 알파벳 소문자로만 입력
	출력에 그룹단어 개수를 출력한다
*/
#include <iostream>

using namespace std;

int main(){
	
	int N, cnt = 0;
	string word;

	cin >> N;

	for(int i=0; i<N; i++){
		
		int alpha[26] = { 0 };
		bool flag = true;
		cin >> word;
		char temp = word[0];

		for(int j=1; j<word.length(); j++){
			if(temp != word[j]){
				if(alpha[word[j] - 'a']){
					flag = false;
					break;
				}
				alpha[temp - 'a']++;
				temp = word[j];
			}
		}

		if(flag)
			cnt++;
	}

	cout << cnt << endl;
}
