#include<iostream>
#include<time.h>
using namespace std;
#include"BinaryImage.h"
int main()
{
	setlocale(LC_ALL, "Rus");
	//Пример работы программы (перемножение и сложение обратных объектов, т.к. перемн.слож. просто объектов будет в 4,5 )
	/*
	cout << "Приведём пример работы программы: " << endl;
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
	cout << "Первый объект:" << endl;
	cout << FirstObject;
	cout << "Коэффицент заполнения первого изображения: " << endl;
	cout <<FirstObject.Ratio();
	!FirstObject;
	cout << endl << "Обратное изображение первого объекта: " << endl;
	cout << FirstObject;
	cout << "Коэффицент заполнения обратного изображения первого объекта: " << endl;
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

	cout <<"\n"<<"\n"<<"Второй объект"<<endl<< SecondObject;
	cout << "Коэффицент заполнения второго изображения" << endl;
	cout<<SecondObject.Ratio();
	!SecondObject;
	cout << endl << "Обратное изображение второго объекта: " << endl;
	cout << SecondObject;
	cout << "Коэффицент заполнения обратного изображения второго объекта:" << endl;
	cout << SecondObject.Ratio();
	cout << "\n" << "\n" << "\n";
	cout << "Сложение обратных объектов: " << endl;
	cout << FirstObject + SecondObject;
	cout << "\n" << "\n" << "\n";
	cout << "Перемножение обратных объектов" << endl;
	cout << FirstObject * SecondObject;
	*/



	//Запрос данных у польователя и вывод 
/*
	int ans;
	cout << "\nСоздать бинарное изображение?\n" << "1 да\n" << "2 нет\nВведите цифру:";
	cin >> ans;
	if (ans == 1) {
		int rows, cols;
		cout << "\nСколько строк ?\nrows=";
		cin >> rows;
		cout << "Сколько колонок ?\ncols=";
		cin >> cols;
		BinaryImage ThirdObject(rows, cols);
		//
		ThirdObject.PictureScreen();
		cout<<ThirdObject;
		cout << "Коэффицент заполнения:\n";
		cout << ThirdObject.Ratio();

}*/
//Сложение объектов
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
	cout << "Чётвертый объект:" << endl;
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
	cout << "Пятый объект:" << endl;
	cout << FiveObject;
	cout << "Сложение объектов: " << endl;
	cout << FourthObject + FiveObject;
	cout << "\n" << "\n" << "\n";*/
}