#include<iostream>

using namespace std;

int main()
{
	char x;
	
	cout << "Introducir un caracter" << endl; 
	cin >> x;
	
	switch (x)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout << "\nEs una vocal minusciula";
			break;
			
		default: cout << "\nNO es una vocal minuscula";
			break;
	}
	return 0;
}
