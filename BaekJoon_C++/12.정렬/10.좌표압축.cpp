/*
	좌표 압축
	첫째줄에 N이 주어지고 N만큼 숫자를 입력받는다
	각 숫자를 좌표라고 할때 해당 숫자를 좌표압축을 적용한 결과 
	해당 숫자보다 작은 좌표의 개수가 된다
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, input;
	cin >> N;
	vector<int> v(N);

	for(int i=0; i<N; i++)
		cin >> v[i];

	vector<int> clon_v(v);
	
	sort(clon_v.begin(), clon_v.end());

	clon_v.erase(unique(clon_v.begin(), clon_v.end()),clon_v.end());
	
	for(int i=0; i<N; i++){
		auto result = lower_bound(clon_v.begin(), clon_v.end(), v[i]);

		cout << result - clon_v.begin() << " ";
	}
}
