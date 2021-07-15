#include <iostream>

using namespace std;

int main(){
	
	int n,sum;
	cin >> n;

	for(int i=1; i<=n; i++)
		sum += i;

	cout << sum << endl;

	return 0;
}
