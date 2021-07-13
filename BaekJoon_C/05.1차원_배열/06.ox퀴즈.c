#include <stdio.h>
#include <string.h>
int main(){
	int n,cnt=0;
	char arr[80];
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%s",arr);
		int count=1;
		for(int j=0; j<strlen(arr); j++){
			if(arr[j]=='O'){
				if(arr[j-1]=='O')
					count+=1;
				cnt+=count;
			}
			else if(arr[j]=='X'){
				count=1;
			}
		}
		printf("%d\n",cnt);
		cnt=0;		
	}
	return 0;
}
