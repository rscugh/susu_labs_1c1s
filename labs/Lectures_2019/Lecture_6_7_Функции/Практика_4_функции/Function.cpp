//������ ��������� � �������.
#include "Function.h"	// ������ � �������� �������.

void main(void)
{
	float x1 = 2.5, x2 = 3.5, x3 = 5.0;
	float y = Avg(x1, x2, x3);	// ����������� ��������� � ����������.
	// ������� ��������� ���������
	cout << "x1=" << x1 << " x2=" << x2 << " x3=" << x3 << " Y=" << y << endl;
	y = Avg(2., 3., 7.);	// ����������� ��������� � ���������.
	// �������� ��������� ���������.
	y = Avg(x1, 5, x3 / 2);	// ����������� ��������� � ���������.
	// �������� ��������� ���������.
	Table(0, 3.14, 12);
}
