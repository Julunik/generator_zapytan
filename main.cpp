#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

string imie[] = {"Antek", "Bartek", "Cezary", "Damian", "Emilia", "Filip", "Gra¿yna", "Halina", "Irena", "Julek"};
string nazwisko[] = {"Aborodo", "Baryka", "Cborodo", "D¹browska", "Eborodo", "Fborodo"};

int main()
{
	system("color 0a");
	srand(time(NULL));
	const int imie_length = sizeof( imie ) / sizeof( imie[0] );
	const int nazwisko_length = sizeof( nazwisko ) / sizeof( nazwisko[0] );
	
	fstream plik;
	plik.open("zapytanie.txt", ios::out);
	
	for(int i = 1; i <= 100; i++)
	{
		plik << "INSERT INTO ";
		plik << "uczniowie";
		plik << "(";
		plik << "id";
		plik << ", ";
		plik << "imie";
		plik << ", ";
		plik << "nazwisko";
		plik << ")";
		plik << " VALUES ";
		plik << "(";
		plik << i;
		plik << ", ";
		plik << "'";
		plik << imie[rand()%imie_length];
		plik << "'";
		plik << ", ";
		plik << "'";
		plik << nazwisko[rand()%nazwisko_length];
		plik << "'";
		plik << ");";
		plik << endl;
	}
	
	plik.close();
	cout << "WYGENEROWANO 100 ZAPYTAÑ!";
	return 0;
}
