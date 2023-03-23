#include<stdio.h>
void main() {
	int score[2][5] = { {86,100,75,88,65},{78,90,80,65,85} },i,j;	//定义并初始化二维数组
	printf("语文：");
	for (i = 0; i <= 1; i++) {	//循环嵌套
		for (j = 0; j <= 4; j++) {		
			printf("%d\t", score[i][j]);	//输出数组
			if (j == 4 && i != 1)
				printf("\n数学：");	//输出科目名
			

		}
	}
}