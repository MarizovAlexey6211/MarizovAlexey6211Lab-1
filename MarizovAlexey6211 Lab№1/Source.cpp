#include<iostream>
#include<time.h>
using namespace std;
#include"BinaryImage.h"
int main()
{
	setlocale(LC_ALL, "Rus");
	//������ ������ ��������� (������������ � �������� �������� ��������, �.�. ������.����. ������ �������� ����� � 4,5 )
	/*
	cout << "������� ������ ������ ���������: " << endl;
	BinaryImage FirstObject(3, 3);
	FirstObject(0, 0) = 1;
	FirstObject(0, 1) = 1;
	FirstObject(0, 2) = 1;
	FirstObject(1, 0) = 0;
	FirstObject(1, 1) = 1;
	FirstObject(1, 2) = 1;
	FirstObject(2, 0) = 0;
	FirstObject(2, 1) = 0;
	FirstObject(2, 2) = 1;
	cout << "������ ������:" << endl;
	cout << FirstObject;
	cout << "���������� ���������� ������� �����������: " << endl;
	cout <<FirstObject.Ratio();
	!FirstObject;
	cout << endl << "�������� ����������� ������� �������: " << endl;
	cout << FirstObject;
	cout << "���������� ���������� ��������� ����������� ������� �������: " << endl;
	cout << FirstObject.Ratio();
	BinaryImage SecondObject(3, 3);
	SecondObject(0, 0) = 1;
	SecondObject(0, 1) = 1;
	SecondObject(0, 2) = 1;
	SecondObject(1, 0) = 1;
	SecondObject(1, 1) = 1;
	SecondObject(1, 2) = 1;
	SecondObject(2, 0) = 1;
	SecondObject(2, 1) = 0;
	SecondObject(2, 2) = 1;

	cout <<"\n"<<"\n"<<"������ ������"<<endl<< SecondObject;
	cout << "���������� ���������� ������� �����������" << endl;
	cout<<SecondObject.Ratio();
	!SecondObject;
	cout << endl << "�������� ����������� ������� �������: " << endl;
	cout << SecondObject;
	cout << "���������� ���������� ��������� ����������� ������� �������:" << endl;
	cout << SecondObject.Ratio();
	cout << "\n" << "\n" << "\n";
	cout << "�������� �������� ��������: " << endl;
	cout << FirstObject + SecondObject;
	cout << "\n" << "\n" << "\n";
	cout << "������������ �������� ��������" << endl;
	cout << FirstObject * SecondObject;
	*/



	//������ ������ � ����������� � ����� 
/*
	int ans;
	cout << "\n������� �������� �����������?\n" << "1 ��\n" << "2 ���\n������� �����:";
	cin >> ans;
	if (ans == 1) {
		int rows, cols;
		cout << "\n������� ����� ?\nrows=";
		cin >> rows;
		cout << "������� ������� ?\ncols=";
		cin >> cols;
		BinaryImage ThirdObject(rows, cols);
		//
		ThirdObject.PictureScreen();
		cout<<ThirdObject;
		cout << "���������� ����������:\n";
		cout << ThirdObject.Ratio();

}*/
//�������� ��������
/*
	BinaryImage FourthObject(3, 3);
	FourthObject(0, 0) = 0;
	FourthObject(0, 1) = 0;
	FourthObject(0, 2) = 0;
	FourthObject(1, 0) = 1;
	FourthObject(1, 1) = 0;
	FourthObject(1, 2) = 1;
	FourthObject(2, 0) = 0;
	FourthObject(2, 1) = 1;
	FourthObject(2, 2) = 0;
	cout << "׸������� ������:" << endl;
	cout << FourthObject;

	BinaryImage FiveObject(3, 3);
	FiveObject(0, 0) = 1;
	FiveObject(0, 1) = 1;
	FiveObject(0, 2) = 1;
	FiveObject(1, 0) = 0;
	FiveObject(1, 1) = 0;
	FiveObject(1, 2) = 0;
	FiveObject(2, 0) = 1;
	FiveObject(2, 1) = 1;
	FiveObject(2, 2) = 1;
	cout << "����� ������:" << endl;
	cout << FiveObject;
	cout << "�������� ��������: " << endl;
	cout << FourthObject + FiveObject;
	cout << "\n" << "\n" << "\n";*/
}