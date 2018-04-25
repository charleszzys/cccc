#include<iostream>

using namespace std;

int main()
{
	char letra;
	
	cout << "Introducir una vocal" << endl;
	
	cin >> letra;
	
	switch(letra)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout << "La letra es una vocal minuscula";
			break;
		
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout << "La letra es una vocal mayuscula";
			break;
		
			
		default: cout << "La letra no es una vocal";		
	}
	
	return 0;
}
