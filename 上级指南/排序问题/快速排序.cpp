#include <stdio.h>
#include <algorithm>
using namespace std;
//��������ʱ�临�Ӷ�O��nlog2n��
//1<=n<=10000
//������ð�����򣬸��Ӷ��Ѿ��������򼶱� 
int main(){
	int n;
	int buf[10000];
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&buf[i]);
		}
		sort(buf,buf+n);		//��������������ʽ 
		for(int i=0;i<n;i++){
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
} 
