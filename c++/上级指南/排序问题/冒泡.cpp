#include <stdio.h>
//ð�������Ӷ� O��N��ƽ����
//1<=n<=100,�򼶱𣬲�δ�������򼶱��Ӷȡ� 

int main(){								
	int n;
	int buf[100];
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&buf[i]);
		}
		for(int i=n-1;i>0;i--){			//ÿ��ð�ݣ�ѡ����������� 
			for(int j=0;j<i;j++){
				if(buf[j]>buf[j+1]){
					int tmp = buf[j];
					buf[j] = buf[j+1];
					buf[j+1] = tmp;
				}
			}
		}
		for(int i=0;i<n;i++){
			printf("%d ",buf[i]);
		}
		printf("\n");
	}
	return 0;
}
