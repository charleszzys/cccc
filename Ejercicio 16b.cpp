#include<iostream>

using namespace std;

int main()
{
	int a,b,c,d;
	
	cout << "Introducir 3 valores: " <<endl; 
	cin >> a >> b >> c;
	
	cout << "\nIntroducir un 4to valor" << endl;
	cin >> d;
	
	if(a == d || b == d || c == d)
	{
		cout << "El numero es igual a uno de los primeros 3";
	}
	else
	{
		cout <<"El numero es distinto a los primeros 3";
	}
	return 0;
}
