#include<iostream>

using namespace std;

int main()
{
	float a,b,c,d, resultado;
	
	cout<<"Introducir el valor de a: "; cin>>a;
	cout<<"Introducir el valor de b: "; cin>>b;
	cout<<"Introducir el valor de c: "; cin>>c;
	cout<<"Introducir el valor de d: "; cin>>d;
	
	resultado = (a+b) / (c+d);
	
	
	cout.precision(2);
	cout<<"El resultado es: " << resultado;
	
	
	return 0;
}
