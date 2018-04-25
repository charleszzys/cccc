#include<iostream>

using namespace std;

int main()
{
	float a, b, c, resultado;
	
	cout << "Introducir la primera nota (60%): "; cin >> a;
	
	cout << "Introducir la segunda nota (30%): "; cin >> b;
	
	cout << "Introducir la tercera nota (10%): "; cin >> c;
	
	resultado = (a*0.60) + (b* 0.30) + (c * 0.10);
	
	cout << "La nota final es: " << resultado;
	
	return 0;
}
