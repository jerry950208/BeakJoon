/*
	나이순 정렬
	여러사람의 나이와 이름을 입력받는다
	이때, 나이가 증가하는 순으로, 나이가 같으면 먼저 가입한 사람이 앞에 오는 순서로 정렬하는 프로그램
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(join<int,string> a, join<int,string> b){
		return a.first < b.first;
}

int main(void){
	
	join<int, string> tmp;
	vector<join<int, string>> member;
	int N;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> tmp.first >> tmp.second;
		member.push_back(tmp);
	}

	stable_sort(member.begin(), member.end(), compare);

	for(int i=0; i<N; i++)
		cout << member[i].first << " " << member[i].end << "\n";
		
}*/
