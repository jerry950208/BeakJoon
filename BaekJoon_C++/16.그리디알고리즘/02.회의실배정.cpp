/*
	회의실배정
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	
	int N;
	cin >> N;
	vector<pair<int, int> > v(N);

	for(int i=0; i<N; i++)
		cin >> v[i].second >> v[i].first;

	sort(v.begin(), v.end());

	int conference = 0, cnt = 0;
	
	for(int i=0; i<N; i++){
		if(conference <= v[i].second){

			conference = v[i].first;
			cnt++;
		}
	}
	cout << cnt << "\n";
}
