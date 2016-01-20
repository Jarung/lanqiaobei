/*基础练习 数列排序
问题描述
　　给定一个长度为n的数列，将这个数列按从小到大的顺序排列。1<=n<=200
输入格式
　　第一行为一个整数n。
　　第二行包含n个整数，为待排序的数，每个整数的绝对值小于10000。
输出格式
　　输出一行，按从小到大的顺序输出排序后的数列。
样例输入
5
8 3 6 4 9
样例输出
3 4 6 8 9*/
#include<stdio.h>

int main()
{
	int n,i,j,temp,a[200]={0};
	scanf("%d",&n);
	for (i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	for (i=0; i<n; i++)
	for (j=i+1; j<n; j++){
		if (a[i] > a[j]){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	for (i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	return 0;
}

