#include<stdio.h>
void main() {
	int score[2][5] = { {86,100,75,88,65},{78,90,80,65,85} },i,j;	//���岢��ʼ����ά����
	printf("���ģ�");
	for (i = 0; i <= 1; i++) {	//ѭ��Ƕ��
		for (j = 0; j <= 4; j++) {		
			printf("%d\t", score[i][j]);	//�������
			if (j == 4 && i != 1)
				printf("\n��ѧ��");	//�����Ŀ��
			

		}
	}
}