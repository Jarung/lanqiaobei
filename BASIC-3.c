/*基础练习 字母图形
问题描述
利用字母可以组成一些美丽的图形，下面给出了一个例子：
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
这是一个5行7列的图形，请找出这个图形的规律，并输出一个n行m列的图形。

输入格式
输入一行，包含两个整数n和m，分别表示你要输出的图形的行数的列数。
输出格式
输出n行，每个m个字符，为你的图形。
样例输入
5 7
样例输出
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
数据规模与约定
1 <= n, m <= 26。
*/
#include <stdio.h>  

int main()  
{  
    int m,n,i,j,flag = 1;  
    char ch1='A',ch2='A';
    char strNum[26][26]; 
    
    scanf("%d%d",&n,&m);  
    for (i = 0; i < n; ++i){//行  
        ch2 = ch1;  
        for (j = 0; j < m; ++j){//列  
            if (ch1 > 'A' && flag == 1){//D C B A ....递减  
                flag = 0;  
                while (ch2 > 'A')  {  
                    strNum[i][j++] = ch2--;  
                }  
                strNum[i][j] = ch2; //将A加入  
            }  
            else   // A B C D ...递增  
                strNum[i][j] = ch2;  
            ++ch2;  
        }  
        flag = 1;  
        ++ch1;  
    }   
      
    for (i = 0; i < n; ++i){//打印字母图形  
        for (j = 0; j < m; ++j)  {  
            printf("%c",strNum[i][j]);  
        }  
        printf("\n");  
    }  
    return 0;           
}  
/*
#include <stdio.h>
#include <stdlib.h>
#define Maxsize 26

void Print(char matrix[Maxsize][Maxsize],int n,int m)
{
	int i,j;
	for (i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%c",matrix[i][j]);
		}
		printf("\n");
	}
}

void Drawing(int n,int m)
{
	int i,j;
	char str;
	char matrix[Maxsize][Maxsize];
	for (i=0; i<n; i++){
		str='A';
		for (j=i; j<m; j++){
			matrix[i][j] = str++;
		}
		str='A';
		for (j=i-1; j>=0; j--){
			matrix[i][j] = ++str;
		}
	}
	Print(matrix,n,m);
}

int main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	Drawing(n,m);
	return 0;
}*/
