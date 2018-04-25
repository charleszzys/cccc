#include<iostream>

using namespace std;

int main()
{
	char x;
	
	cout << "Introducir un caracter" << endl;
	cin >> x;
	
	switch(x)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout << "Vocal minuscula";
			break;			
			
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E': cout << "Vocal mayuscula";
			break;
			
		default: cout << "NO es una vocal";
	}
	
	return 0;
}
