#include <stdio.h>
#include <algorithm>
#include <iostream> 
using namespace std;

bool cmp(int x,int y){		//��cmp����trueʱ��x����yǰ�档 
	return x>y;
}
int main(){
	int n;
	int buf[10000];
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&buf[i]);
		}
		sort(buf,buf+n,cmp);	//�Զ������������������ 
		for(int i=0;i<n;i++){
			cout<<buf[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
