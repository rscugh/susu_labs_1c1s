
// ���� 1. ����� �㭪��, ��������� ���祭��.
// ����� ⨯, ����� ���, ����� ᯨ᮪ ��ࠬ��஢.
// �ਬ�� ���ᠭ�� �㭪樨, ����� ��室�� �।��� ��䬥��᪮� ��� �ᥫ.

float Avg (float a, float b, float c)
{	float S;	// �����쭠� ��६�����.
	S=(a+b+c)/3.;
	return S;	// ��� ᮢ������ � ⨯�� �㭪樨.
}

// ���� 2. �㭪�� ⨯� void.
// �ਬ�� ���ᠭ�� �㭪樨,
// ����� �뢮��� �� ��࠭ 50 ᨬ����� "������窠" (*).

#include <stdio.h>

void print(void)                // �㭪樨 ⨯� void ��� ��ࠬ��஢.
{
int i;                          // �����쭠� ��६�����.
for (i=1;i<=50;i++)
   printf("%c",'*');

printf("\n");
}

//���� 3. �㭪��, ��������� ��ࠬ����.
//�ਬ�� - ��६����� ���祭�� ��६�����.

//��襬 �㭪�� Swap1 � ��ࠬ��ࠬ� �� ���祭��.
void Swap1 (int x, int y)
{ 	int tmp;
	tmp = x;
	x = y;
	y = tmp;		// ��६���� ��६������� ᢮��� ���祭�ﬨ.
}

//��襬 �㭪�� Swap2 � ��ࠬ��ࠬ� �� ��뫪�.
void Swap2 (int &x, int &y)
{ 	int tmp;
	tmp = x;
	x = y;
	y = tmp;		// ��६���� ��६������� ᢮��� ���祭�ﬨ.
}

int Sum1 (int n)
{
int	S = 0;			// ��६����� ��� ���������� ���祭�� �㬬�.
int	i; 			// ��ࠢ����� ��६����� ��� 横�� �㬬�஢����.
	for (i = 1; i<= n; i++)
		S += i;
return	S;
}
// � �⮬ �ਬ�� �����쭠� ��६����� i �� ����室���. ����, �� ��ࠬ���, 
// ��।������ �� ���祭��, �� �㤥� ������� �㭪樥�, ��� ����� �ᯮ�짮���� 
// ��� ࠡ���� ��६����� ��� �ࠢ����� 横���. 

int Sum2 (int n)
{
	for (int S = 0; n > 0; n--)	// �� n=0 横� �㤥� �����襭.
		S += n;
return	S;
}  // �㭪�� �� ������� ���祭�� n.


