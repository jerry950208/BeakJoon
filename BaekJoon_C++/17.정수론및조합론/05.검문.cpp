/*
	검문
	숫자 N개를 입력받는다. 그 다음 각 숫자를 M으로 나누었을때 나머지가 같게되는 M을 모두 찾으려고 한다

	N개의 수가 주어졌을때, 가능한 M을 모두 찾는 프로그램을 작성하시오
*/
//* gcd(arr[n]-arr[n-1])
//1. 나머지 정리를 통한 식 변형
//2. 최대공약수를 어떻게 찾을 것인가
//3. 매우 큰 수의 약수를 어떻게 구할것인가
//4. 큰 수의 약수들은 순서대로 어떻게 출력할 것인가

#include <iostream>
#include <algorithm>
 
using namespace std;
 
int arr[101], sol[101]; 
int func_Gcd(int a, int b);

int main() {
   
   int N, tmp,cnt = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];
   
    sort(arr, arr + N);
 
    tmp = arr[1] - arr[0];
    
	for (int i = 2; i < N; i++)
        tmp = func_Gcd(tmp, arr[i] - arr[i - 1]);
 
    for (int i = 1; i*i <= tmp; i++)
        if (tmp % i == 0) {
            sol[cnt++] = i;
            if (i != tmp / i) 
				sol[cnt++] = tmp / i;
        }
 
    sort(sol, sol + cnt);
    
	for (int i = 0; i < cnt; i++) 
        if (sol[i] != 1)
            cout << sol[i] << " ";
    
}

int func_Gcd(int a, int b){
	return a % b ? func_Gcd(b, a%b) : b;
}
