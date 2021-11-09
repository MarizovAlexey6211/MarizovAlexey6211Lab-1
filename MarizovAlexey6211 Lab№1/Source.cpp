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
		*/
}
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
		//Перемножение объектов
/*
BinaryImage SixObject(3, 3);
SixObject(0, 0) = 1;
SixObject(0, 1) = 1;
SixObject(0, 2) = 1;
SixObject(1, 0) = 0;
SixObject(1, 1) = 1;
SixObject(1, 2) = 0;
SixObject(2, 0) = 1;
SixObject(2, 1) = 1;
SixObject(2, 2) = 1;
cout << "Шестой объект:" << endl;
cout << SixObject;

BinaryImage SevenObject(3, 3);
SevenObject(0, 0) = 0;
SevenObject(0, 1) = 1;
SevenObject(0, 2) = 1;
SevenObject(1, 0) = 1;
SevenObject(1, 1) = 1;
SevenObject(1, 2) = 0;
SevenObject(2, 0) = 0;
SevenObject(2, 1) = 1;
SevenObject(2, 2) = 1;
cout << "Седьмой объект:" << endl;
cout << SevenObject;
cout << "Перемножение объектов: " << endl;
cout << SixObject * SevenObject;
return 0;*/


//throw
/*
BinaryImage EigthObject(3, 3);
EigthObject(6, 0) = 0;
EigthObject(0, 1) = 1;
EigthObject(0, 2) = 1;
EigthObject(1, 0) = 1;
EigthObject(1, 1) = 1;
EigthObject(1, 2) = 0;
EigthObject(2, 0) = 0;
EigthObject(2, 1) = 1;
EigthObject(2, 2) = 1;
/*cout << "Восьмой объект:" << endl;
cout << EigthObject;
BinaryImage NineObject(2, 2);
NineObject(0, 0) = 1;
NineObject(0, 1) = 1;

NineObject(1, 0) = 0;
NineObject(1, 1) = 1;

NineObject(2, 0) = 1;
NineObject(2, 1) = 1;

cout << "Девятый объект:" << endl;
cout << NineObject;


cout << "Перемножение объектов: " << endl;
cout << NineObject * EigthObject;
return 0;


}*/