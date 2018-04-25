#include<iostream>

using namespace std;

int main()
{
	int x, y, aux;
	
	cout << "Introducir valor de x: "; cin >> x;
	
	cout << "Introducir valor de y: "; cin >> y;
	
	aux = x;
	
	x = y;
	
	y = aux;
	
	cout << "El valor de x es: " << x << endl;
	
	cout << "El valor de y es: " << y << endl;
	
	return 0;
}
