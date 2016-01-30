/*基础练习 十六进制转十进制 
问题描述
　　从键盘输入一个不超过8位的正的十六进制数字符串，将它转换为正的十进制数后输出。
　　注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示。
样例输入
FFFF
样例输出
65535
*/

#include<stdio.h>
#include<string.h> 
#include<math.h>

int main()
{ 
	double sum=0,x;
	char a[8];
	int len,i=0;
	gets(a);
	len=strlen(a);
	while(len){
		if(a[len-1]>='A' && a[len-1]<='F')
	    	x=(a[len-1]-'7')*pow(16,i++);
	  	else
	      	x=(a[len-1]-'0')*pow(16,i++);
	  	sum+=x;
	  	len--;
	}
	printf("%.0lf",sum);
	return 0;
 }

