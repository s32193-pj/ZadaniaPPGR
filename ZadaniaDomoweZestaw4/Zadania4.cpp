#pragma once
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void suma_tablica() {
	const int set_array_size = 10;
	int set_array[set_array_size][set_array_size];

	for (int i = 0; i < set_array_size; i++)
	{
		set_array[i][0] = i;
	}

	for (int i = 0; i < set_array_size; i++)
	{
		int set_array_sum = 0;

		for (int j = 0; j < i; j++)
		{

			set_array_sum += set_array[j + 1][0];


		}

		set_array[i][1] = set_array_sum;
		cout << set_array[i][0] << ", suma: " << set_array[i][1] << endl;

	}

}





int main()
{

	
	const int array_size = 1000;
	int user_number_array[array_size];
	int k;
	int user_largest_number = 0;


	bool is_true = true;

	while (is_true)
	{
	
	 cout << "Prosze podac wielkosc zadanej tablicy: " << endl;
	 cin >> k;
	 if (k > array_size)
	 {
	 cout << "Podana wielkosc tablicy przekracza wartosc dopuszczalna (1000), prosze ponowic probe." << endl;

	 }
	 else
	 {
	 cout << "Podana wielkosc tablicy to: " << k << ", przechodzimy do nastepnej czesci." << endl;
	 is_true = false;
	 }
	}

	cout << endl;
	cout << "teraz bedziemy zapelniac tablice." << endl;
	cout << endl;

	int user_number;

	for (int i = 0; i < k; i++)
	{
	cout << "prosze podac " << i + 1 << " liczbe: " << endl;
	cin >> user_number;
	user_number_array[i] = user_number;
	if (user_number > user_largest_number)
	{
	user_largest_number = user_number;
	}
	}

	cout << endl;

	for (int i = 0; i < k; i++)
	{
	cout << user_number_array[i] << endl;
	}

	cout << endl;

	cout << "najwieksza liczba z podanych jest: " << user_largest_number << endl;


	int user_number_2d_array[array_size][2];


	cout << endl;
	cout << "teraz bedziemy zapelniac tablice." << endl;
	cout << endl;

	int user_number2;

	for (int i = 0; i < k; i++)
	{
	cout << "prosze podac " << i + 1 << " liczbe: " << endl;
	cin >> user_number2;
	user_number_2d_array[i][0] = user_number2;
	user_number_2d_array[i][1] = 0;

	for (int i = 0; i < k; i++)
	{
	if (user_number2 == user_number_2d_array[i][0]) {
	user_number_2d_array[i][1]+=1;
	}


	}
	}

	int most_common_number = 0;
	int count_of_common_number = 0;

	for (int i = 0; i < k; i++)
	{
	if (count_of_common_number < user_number_2d_array[i][1]) {
	most_common_number = user_number_2d_array[i][0];
	count_of_common_number = user_number_2d_array[i][1];
	}

	}





	cout << endl;

	cout << "najczesciej wystepujaca libcza jest: " << most_common_number << " z " << count_of_common_number << " powtorzeniami." << endl;
	cout << endl;
	

	suma_tablica();

}

