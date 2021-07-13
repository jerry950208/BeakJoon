#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100000
char A[100000],B[100000],res[100000];

void reverse(char arr[]){
	int len = strlen(arr);
	for(int i=0; i<len/2; i++){
		char temp = arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1] = temp;
	}
}

int main(){
	int carry=0;
	
	scanf("%s%s",A,B);
	reverse(A);
	reverse(B);
	int len = strlen(A) > strlen(B) ? strlen(A) : strlen(B);

	for(int i=0; i<len; i++){
		int sum =A[i]-'0'+B[i]-'0'+carry;
		while(sum < 0)
			sum+='0';
		if(sum > 9)
			carry=1;
		else
			carry=0;
		res[i]=sum%10+'0';
	}
	if(carry==1)
		res[len]='1';
		reverse(res);
		printf("%s\n",res);

	return 0;
}
