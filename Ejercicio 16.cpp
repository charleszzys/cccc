#include<iostream>

using namespace std;

int main()
{
	int edad;
	cout << "Introducir su edad: " << endl;
	cin >> edad;
	
	if(edad>=18 && edad <= 25)
	{
		cout << "\nLa edad esta en el rango 18-25";
	}
	
	else
	{
		cout << "\nLa edad no esta en el rango 18-25";
	}
	
	return 0;
}
