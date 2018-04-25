#include<iostream>


using namespace std;

int main()
{
	float a,b,c,d,e,f, resultado;
	
	cout<<"Introducir el valor de a: ";	cin >> a;

	cout<<"Introducir el valor de b: ";	cin >> b;
	
	cout<<"Introducir el valor de c: ";	cin >> c;
	
	cout<<"Introducir el valor de d: ";	cin >> d;
	
	cout<<"Introducir el valor de e: ";	cin >> e;
	
	cout<<"Introducir el valor de f: ";	cin >> f;
	
	resultado = (a + (b/c)) / (d + (e/f));
	 
	cout.precision(3);
	cout << "El resultado es: " << resultado << endl;
	
	return 0;
}
