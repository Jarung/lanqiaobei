/*������ϰ �ֽ�������
��������
�����������[a,b]�������������������ֽ⡣
�����ʽ
����������������a��b��
�����ʽ
����ÿ�����һ�����ķֽ⣬����k=a1*a2*a3...(a1<=a2<=a3...��kҲ�Ǵ�С�����)(����ɿ�����)
��������
3 10
�������
3=3
4=2*2
5=5
6=2*3
7=7
8=2*2*2
9=3*3
10=2*5
��ʾ
������ɸ������������Ȼ���ٷֽ⡣
���ݹ�ģ��Լ��
����2<=a<=b<=10000
*/

#include <stdio.h>

//int prime(int n)
//{
//	int i;
//	if (n<=1)	return 0;
//	for (i=2; i*i<=n; i++){
//		if (n%i==0)	return 0;
//	}
//	return 1;
//}

int main()
{
	int a,b,i,j,data;
	scanf("%d%d",&a,&b);
	for (i=a; i<=b; i++){
		printf("%d=",i);
		data=i;j=2;
		while (data>1){
			if (data % j == 0){
				printf("%d",j);
				data /= j;
				if (data > 1)
					printf("*");
			}else j++;	
		}
		printf("\n");
	}
	return 0;
}
