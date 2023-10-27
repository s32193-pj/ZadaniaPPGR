#pragma once
using namespace std;
#include <iostream>
int main()
{
	//zadanie 2.1

	int n;
	int suma = 0;
	cout << "podaj licze n: " << endl;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		suma += i;

	}
	cout << "Suma to: " << suma << endl;
	cout << endl;
	cout << endl;

	//zadanie 2.2

	int a;
	int b;
	cout << "Prosze podaj liczbe a: " << endl;
	cin >> a;
	cout << "Prosze podaj liczbe b: " << endl;
	cin >> b;
	cout << endl;


	cout << "Pobranoliczby a:" << a << " oraz b: " << b << endl;
	cout << endl;

	cout << "Wiersz od dlugosci a: " << endl;
	for (int i = 0; i < a; i++)
	{

		cout << "*";

	}
	cout << endl;
	cout << "Wiersz od dlugosci b: " << endl;
	for (int i = 0; i < b; i++)
	{

		cout << "*" << endl;

	}

	cout << endl;
	cout << "Prostokat a na b: " << endl;

	for (int i = 0; i < b; i++)
	{
		for (int i = 0; i < a; i++)
		{

			cout << "*";

		}
		cout << endl;
	}

	cout << endl;

	/* 
	****
	*  *
	*  *
	****
	*/

	cout << "Obwod prostokata a na b: " << endl;

	for (int i = 0; i < b; i++)
	{
		if (i == 0 || i == b - 1) {
			for (int i = 0; i < a; i++)
			{
				cout << "*";
			}
		}

		else
		{
			for (int i = 0; i < a; i++)
			{
				if (i == 0 || i == a - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}

		}
		cout << endl;
	}

	cout << endl;

	int x;
	cout << "Prosze podaj ramie trojkata rownoramiennego x: " << endl;
	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = x; i > 0; i--)
	{


		for (int j = 0; j < i; j++)
		{

			cout << "*";
		}
		cout << endl;
	}






	//zadanie 2.3


	cout << endl;
	int month;
	cout << "Prosze podac liczbe od 1-12: " << endl;
	cin >> month;

	switch (month)
	{
	case 1:
		cout << "Styczen, pochmurno, 31 dni." << endl;
		break;
	case 2:
		cout << "Luty, pochmurno, 28 dni." << endl;
		break;
	case 3:
		cout << "Marzec, pochmurno, 31 dni." << endl;
		break;
	case 4:
		cout << "Kwiecien, slonecznie, 30 dni." << endl;
		break;
	case 5:
		cout << "Maj, slonecznie, 31 dni." << endl;
		break;
	case 6:
		cout << "Czerwiec, slonecznie, 30 dni." << endl;
		break;
	case 7:
		cout << "Lipiec, slonecznie, 31 dni." << endl;
		break;
	case 8:
		cout << "Sierpien, slonecznie, 31 dni." << endl;
		break;
	case 9:
		cout << "Wrzesien, slonecznie, 30 dni." << endl;
		break;
	case 10:
		cout << "Pazdziernik, pochmurno, 31 dni." << endl;
		break;
	case 11:
		cout << " Listopad, pochmurno, 30 dni." << endl;
		break;
	case 12:
		cout << "Grudzien, pochmurno, 31 dni." << endl;
		break;
	default:
		cout << "Odpowiedz nie prawidlowa." << endl;
		break;
	}






	return 0;
};

