#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��ŵ������Ϊ����ĵݹ����ʵ��
//��������n�����Ӵ�A�����Ƶ�C������Ҫ������
//1.��A�ϵ�n - 1�����ӽ���C�����Ƶ�B���ϣ�
//2.��A����ʣ�µ�һ�������Ƶ�C���ϣ�
//3.��n - 1���̴�B���Ͻ�����A�Ƶ�C���ϡ�
void move(char x, char y)	//������̷���
{
	printf("%c->%c\n", x, y);
}
void hanoi(int n, char one, char two, char three)		//����
{
	if (n == 1)
		move(one, three);		//�����1���̣�ֱ�Ӵӵ�һ�����Ƶ���3������
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}
int main()
{
	int n;
	printf("�����̵ĸ���\n");
	scanf("%d", &n);
	printf("���̵Ĳ��裺\n");
	hanoi(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}