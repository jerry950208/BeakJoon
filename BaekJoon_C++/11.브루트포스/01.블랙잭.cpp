/*
  블랙잭
  N장의 카드를 받고 M을 넘지 않으며 3장의 카드로 M과 근접한 숫자를 만들어야한다
 
  첫째 줄에 M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 출력
*/
#include <iostream>
 
using namespace std;

int main(){

	int N,M,max = 0;
	cin >> N >> M;
	int arr[N];

	for(int i=0; i<N; i++)
		cin >> arr[i];

	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			for(int k=j+1; k<N; k++){
				if(M - (arr[i] + arr[j] + arr[k]) <= M - max && M - (arr[i] + arr[j] + arr[k]) >= 0 )
					max = arr[i] + arr[j] + arr[k];
			}
		}
	}
	cout << max << endl;
}
