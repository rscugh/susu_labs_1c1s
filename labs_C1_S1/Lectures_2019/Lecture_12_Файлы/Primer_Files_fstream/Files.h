#include <fstream>
#include <iostream>
#include <string>
#define  LEN_MAX 10
using namespace std;
// ����� ������� �� �����.
void Print_arr (int mas[], int len)    //����� �� ����������, len-��������
{ int i;
	cout <<"Is array:\n";
	for (i=0;i<len;i++)
	   cout << mas[i] << " ";
	cout << endl;
}
// ����� ������� � ����.
void Print_arr(string F_Name, int arr[], int len)  //����� �� ����������, len-��������
{
	int i;
	ofstream F_out; 
	F_out.open(F_Name);
	F_out << "Is array:\n";
	for (i = 0; i<len; i++)
		F_out << arr[i] << " " ;
	F_out << endl;
	F_out.close();
}

// ���� ������� � ���������� �� eof(Ctrl_Z)
void Input_arr (int arr[], int &len)    // ������ ������ len<10
{
	len = 0;
	do                                  // a) ����� �����.
	{                                   // �) ����� <10.
		cin >> arr[len];                // ������ �������
		len++;
	} while (!cin.eof() && len<LEN_MAX);
}

// ���� ������� � ���������� �� eof �� �����.
void Input_arr (string F_Name, int arr[], int &len)    // ������ ������ len<100
{
len=0;
ifstream F_in;
F_in.open(F_Name);
do                                  // a) ����� �����.
   {                                // �) ����� <100.
	 F_in >> arr[len];              // ������ �������
	 len++;
   }
while(!F_in.eof() && len<LEN_MAX);
}

// ������ 3. ������ (������) ����� �� ���������� �����.
// ����� � �������������� �������������� ���������.
void Input_text(string F_Name, string Text[], int &len)
{
	ifstream File;
	char buff[80];
	File.open(F_Name, ios::in);      // ���� ������ ��� �����
// ��������� �� ����� ��� ������.
	len = 0;
	while (File.getline(buff, 80))
	{
		Text[len] = buff;
		len++;
	}
		File.close(); // ��������� ����
}
void Out_text(string F_Name, string Text[], int &len)
{

}


