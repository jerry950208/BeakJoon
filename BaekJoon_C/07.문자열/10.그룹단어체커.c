#include <stdio.h>
#include <string.h>

int main(){
	int N,cnt=0;
	char check[100]={0,};
	int alpha[26]={0,};
	int size;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%s",check);
		size = strlen(check);
		for(int j=0; j<size; j++){
			if(alpha[check[j]-'a']==0 && check[j]!=check[j+1]){
				alpha[check[j]-'a']=1;
			}
			else if(alpha[check[j]-'a']==1){
				cnt++;
				break;
			}
		}
		for(int i=0; i<26; i++){
			alpha[i]=0;
		}
	}
	printf("%d\n",N-cnt);
	return 0;
}
