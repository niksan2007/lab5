#include <iostream>

#include <string.h>

#include <fstream>

#include <stdio.h>

#include <cctype>

using namespace std;

int main()

{

	setlocale(LC_ALL, "");

	ifstream fin("vokzal.txt");

	int n = 0, i = 0, j = 0; int choose;

	char exit[50];

	struct vokzal

	{

		int nomer; 

		char familia[50];
		char imia[50];
		char otchestvo[50];

		char punkt[50]; 

		int time;

		char nazvanie[50];

	};

	while (exit[0] != '!')

	{

		n++;

		fin.getline(exit, 50);

	}

	n--;

	vokzal* arr_vokzal = new vokzal[n];

	fin.seekg(0, ios_base::beg);

	for (i = 0; i < n; i++)

	{

		fin >> arr_vokzal[i].nomer;

		fin >> arr_vokzal[i].familia;

		fin >> arr_vokzal[i].imia;

		fin >> arr_vokzal[i].otchestvo;

		fin >> arr_vokzal[i].punkt;

		fin >> arr_vokzal[i].time;

		fin.getline(arr_vokzal[i].nazvanie, 50);
		cout << "Авиобилет: " << arr_vokzal[i].nazvanie << endl;

		cout << "Номер рейса: " << arr_vokzal[i].nomer << endl;

		cout << "Фамилия: " << arr_vokzal[i].familia << endl;

		cout << "Имя: " << arr_vokzal[i].imia<< endl;

		cout << "Отчество: " << arr_vokzal[i].otchestvo << endl;

		cout << "Пункт назначение: " << arr_vokzal[i].punkt << endl;

		cout << "Продолжительность в часах: " << arr_vokzal[i].time << endl << endl;

	}

	cout << "Введите номер задания-"; cin >> choose;

	if (choose == 1) {

		char chelovek[50];
		char t[50];
		cout << "Введите Фамилию для поиска в базе:";
		cin >> chelovek;

		for (i = 0; i < n; i++)


		{

			if (strcmp(arr_vokzal[i].familia, chelovek) == 0) {

				cout << "____________Ваш билет_________" << endl;
				cout << "Авиобилет: " << arr_vokzal[i].nazvanie << endl;

				cout << "Номер рейса: " << arr_vokzal[i].nomer << endl;

				cout << "Фамилия: " << arr_vokzal[i].familia << endl;

				cout << "Имя: " << arr_vokzal[i].imia << endl;

				cout << "Отчество: " << arr_vokzal[i].otchestvo << endl;

				cout << "Пункт назночение: " << arr_vokzal[i].punkt << endl;

				cout << "Продолжительность: " << arr_vokzal[i].time << endl << endl;
			}
		}
			
				

			
				

		


	}

	if (choose == 2) {
		cout << "Более 3 часов сейчас рейсы:"<<endl;
		int t=3;

		for (i = 0; i < n; i++)


		{

			if (arr_vokzal[i].time > 3)
			cout << "Авиобилет: " << arr_vokzal[i].nazvanie << endl;

			cout << "Номер рейса: " << arr_vokzal[i].nomer << endl;

			cout << "Фамилия: " << arr_vokzal[i].familia << endl;

			cout << "Имя: " << arr_vokzal[i].imia << endl;

			cout << "Отчество: " << arr_vokzal[i].otchestvo << endl;

			cout << "Пункт назночение: " << arr_vokzal[i].punkt << endl;

			cout << "Продолжительность: " << arr_vokzal[i].time << endl << endl;
		}

			

		system("pause");

		return 0;

	}

}