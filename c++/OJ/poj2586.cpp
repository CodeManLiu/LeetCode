
#include<stdio.h>
int a[15];
int main ()
{
	int s,d;
	while (scanf("%d%d",&s,&d)==2)
	{
		int sum=0;
		int i,j;
		for(i=5;i>=0;i--)       //һ��Ҫд��i>=0   ��д��i>0���ܳ���һ�����i=1��ʱ��sum>0 Ȼ������i>0�˳���  sum��Ȼ>0 
		{                      //д��i>=0 ����������������i=1ʱsum>0,i=0ʱsum<0 break 
			sum=i*s-(5-i)*d;
			if(sum<0)break;
		}
		for(j=0;j<i;j++)
			a[j]=s;
		for(j=i;j<5;j++)
			a[j]=-d;
		for(i=5;i<12;i++)
		{
			a[i]=a[i-5];
			sum+=a[i];
		}
		if(sum>0)
		printf("%d\n",sum);
		else printf("Deficit\n");
	}
	return 0;
}
