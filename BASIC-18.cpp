/*基础练习 矩形面积交
问题描述
　　平面上有两个矩形，它们的边平行于直角坐标系的X轴或Y轴。对于每个矩形，我们给出它的一对相对顶点的坐标，请你编程算出两个矩形的交的面积。
输入格式
　　输入仅包含两行，每行描述一个矩形。
　　在每行中，给出矩形的一对相对顶点的坐标，每个点的坐标都用两个绝对值不超过10^7的实数表示。
输出格式
　　输出仅包含一个实数，为交的面积，保留到小数后两位。
样例输入
1 1 3 3
2 2 4 4
样例输出
1.00
*/

#include<cstdio>
#include<algorithm>
using namespace std;  
int main()  
{
	int i;
    double x[4];  
    double y[4];  
    for(i=0; i<4; i++)  
    	scanf("%lf%lf",&x[i], &y[i]);  
    sort(x,x+2); 
    sort(x+2,x+4); 
    sort(y,y+2);
    sort(y+2,y+4);
    if(x[1] <= x[2] || x[0] >= x[3] || y[0] >= y[3] || y[1] <= y[2])
    	printf("%.2lf\n",0);
    else{  
        sort(x,x+4);
        sort(y,y+4);
        printf("%.2lf\n", (x[2]-x[1]) * (y[2]-y[1]));
    }     
    return 0;  
}  
