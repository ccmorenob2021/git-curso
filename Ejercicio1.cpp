/*
Realizar un programa que me permita escribir la siguiente expresión 
como expresión en c++ los datos ingresados deben ser decimales y 
mostrar con una precisión de 2 decimales
((sqrt(a*sqrt(b))) - (sqrt(b*sqrt(a))))/ (sqrt(sqrt(a)))
*/
//Librerias
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

//Programa

int main(void)
{
	float a,b, resultado = 0;
	cout<<"Digite el valor de a: ";
	cin>>a;
	cout<<"Digite el valor de b: ";
	cin >>b;
	
	resultado = ((sqrt(a*sqrt(b))) - (sqrt(b*sqrt(a))))/ (sqrt(sqrt(a)));
	cout.precision(4);
	std::cout<< "El resultado es " <<resultado <<endl;
	
	return 0;
}