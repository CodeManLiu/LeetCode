#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int score[1000];
	int n;
	int v;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&score[i]);
		}
		scanf("%d",&v);
		printf("%d\n",count(score,score+n,v));//����ʹ��Hash�����¼ÿ���ɼ���ѧ�������� 
	}
	return 0;
}
