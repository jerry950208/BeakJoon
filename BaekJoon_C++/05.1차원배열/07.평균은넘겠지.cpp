/*
	평균은 넘겠지
	첫째줄에 테스트 케이스 C
	둘째줄부터 학생수 N이 첫 수로 주어지고, N명의 점수가 주어진다
	각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째자리까지 출력한다
*/
#include <iostream>

using namespace std;

int main(){
	
	int C,N;
	int arr[1000] = { 0 };
	int sum = 0, avg = 0;
	double result = 0.0;

	cin >> C;

	for(int i=0; i<C; i++){
		cin >> N;
		for(int j=0; j<N; j++){
			cin >> arr[j];
			sum += arr[j];
		}
		avg = sum/N;
		sum = 0;
		for(int j=0; j<N; j++){
			if(arr[j] > avg)
				sum++;
			arr[j] = 0;
		}
		result = (double)sum / N * 100;
		cout << fixed;
		cout.precision(3);
		cout << result << "%" << endl;
		
		sum = 0;
		avg = 0;

	}
}
