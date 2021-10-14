/*
	가장 긴 증가하는 부분 수열

	수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성

	예를 들어, 수열 A =. 10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분수열은 {10, 20, 30, 50} 이고 길이가 4이다
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){

        int n;
        int dp[1000] = {};
        int arr[1000] = {};
        int sum = 0;

        cin >> n;

        for(int i=0; i<n; i++)
                cin >> arr[i];

                for(int i=0; i<n; i++){

                        dp[i] = 1;

                        for(int j=0; j<i; j++){
                                if(arr[i] > arr[j])
                                        dp[i] = max(dp[i], dp[j] + 1);
                        }

                        sum = max(sum, dp[i]);
                }

                cout << sum << endl;

    return 0;
}
