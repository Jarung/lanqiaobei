/*������ϰ ��ĸͼ��
��������
������ĸ�������һЩ������ͼ�Σ����������һ�����ӣ�
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
����һ��5��7�е�ͼ�Σ����ҳ����ͼ�εĹ��ɣ������һ��n��m�е�ͼ�Ρ�

�����ʽ
����һ�У�������������n��m���ֱ��ʾ��Ҫ�����ͼ�ε�������������
�����ʽ
���n�У�ÿ��m���ַ���Ϊ���ͼ�Ρ�
��������
5 7
�������
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
���ݹ�ģ��Լ��
1 <= n, m <= 26��
*/
#include <stdio.h>  

int main()  
{  
    int m,n,i,j,flag = 1;  
    char ch1='A',ch2='A';
    char strNum[26][26]; 
    
    scanf("%d%d",&n,&m);  
    for (i = 0; i < n; ++i){//��  
        ch2 = ch1;  
        for (j = 0; j < m; ++j){//��  
            if (ch1 > 'A' && flag == 1){//D C B A ....�ݼ�  
                flag = 0;  
                while (ch2 > 'A')  {  
                    strNum[i][j++] = ch2--;  
                }  
                strNum[i][j] = ch2; //��A����  
            }  
            else   // A B C D ...����  
                strNum[i][j] = ch2;  
            ++ch2;  
        }  
        flag = 1;  
        ++ch1;  
    }   
      
    for (i = 0; i < n; ++i){//��ӡ��ĸͼ��  
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
