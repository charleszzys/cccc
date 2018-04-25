#include<iostream>

using namespace std;

int main()

{
	float a, b, resultado;

	cout<<"Introducir el valor de a: "; cin>>a;

	cout<<"Introducir el valor de b: "; cin>>b;

	resultado = (a/b) + 1;

	cout.precision(2);
	cout<<"\n El resultado es: " << resultado;

	return 0;
}
