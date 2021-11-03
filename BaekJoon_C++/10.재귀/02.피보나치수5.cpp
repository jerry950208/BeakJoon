/*
	피보나치 수 5
	피보나치 수는 0과 1로 시작한다. 그 다음 부터는 바로 앞 두 피보나치 수의 합이 된다
	식으로 쓰면 Fn = Fn-1 + Fn-2(n>=2)

	첫째 줄에 n이 주어진다 n은 20보다 작거나 같은 자연수 또는 0이다
*/
#include <iostream>
using namespace std;

int fibo_arr[2] = {0, 1};

int fibonacci(int a){
	
	if(a == 0)
		return fibo_arr[0];
	
	else if(a == 1)
		return fibo_arr[1];

	else{
		int tmp = fibo_arr[0] + fibo_arr[1];
		fibo_arr[0] = fibo_arr[1];
		fibo_arr[1] = tmp;
		return fibonacci(a-1);
	}
}

int main(void){
	
	int input;
	cin >> input;

	cout << fibonacci(input) << endl;
	return 0;
}
/*
#include <iostream>

using namespace std;

int arr[2] = {0,1};

int func_Fibo(int n, int arr[]);

int main(){
	
	int n;
	cin >> n;

	cout << func_Fibo(n,arr) << endl;
}

int func_Fibo(int n, int arr[]){
	
	int tmp;
	if(n == 0)
		return arr[0];

	else if(n == 1)
		return arr[1];

	else{
		tmp = arr[0] + arr[1];
		arr[0] = arr[1];
		arr[1] = tmp;

		return func_Fibo(n-1,arr);
	}
}*/
