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
			
		default: cout << "La letra es una voca mayuscula";		
	}
	
	return 0;
}
