/*
	단어정렬
	알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램
	1. 길이가 짧은 것부터
	2. 길이가 같으면 사전순으로
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string a, const string b);

int main(void){
	
	vector<string> v;
	string word, tmp;
	int N;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> word;
		v.push_back(word);
	}
	
	sort(v.begin(), v.end(), compare);

	for(int i=0; i<N; i++){
		if(tmp == v[i])
			continue;
		cout << v[i] << "\n";
		tmp = v[i];
	}
}

bool compare(const string a, const string b){
	
	if(a.size() == b.size())
		return a < b;
	
	else
		return a.size() < b.size();
}
/*
#include <iostream>
#include <string>

using namespace std;

int compare(const void*, const void*);

struct dictionary{
	
	int len;
	string word;
};

dictionary words[20001];

int main(void){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, cnt = 0;
	cin >> N;
	
	// 단어를 입력받고, 해당 단어의 길이를 바로 구조체에 넣는다
	for(int i=0; i<N; i++){	
		cin >> words[i].word;
		words[i].len = words[i].word.length();
	}	
	
	for(int j=0; j<N; j++){
		for(int u=j+1; u<N; u++){
			// 중복되는 단어는 지워준다
			if(words[j].word == words[u].word){
				words[u].word.clear();
			}

			// 단어의 길이가 같은경우 사전순으로 정렬한다
			else if(words[j].len == words[u].len && words[j].word > words[u].word){
				string tmp;
				tmp = words[j].word;
				words[j].word = words[u].word;
				words[u].word = tmp;
			}
		}
	}
	// 단어의 길이별로 정렬한다
	qsort(words, N, sizeof(dictionary), compare);	
	
	// 출력
	for(int i=0; i<N; i++){
		if(words[i].word.length() > 0){
			cout << words[i].word << " " << "\n";
		}
	}
}

int compare(const void* a, const void* b){
	
	if(*(int*)a > *(int*)b)
		return 1;

	else if(*(int*)a < *(int*)b)
		return -1;

	else
		return 0;
}
*/
