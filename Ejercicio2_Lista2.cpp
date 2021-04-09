
#include<iostream>
#include"Header.h"
#include  <ctime>
#include  < conio.h >
#include<time.h>
using namespace std;
void main()
{
	srand(time(0));
	string nombre;
	int dat1;
	float dat3, dat4;
	char dat6;
	cin >> nombre;
	cin >> dat1 ;
	cin >> dat3 >> dat4;
	cin >> dat6;
	CPersona* obj = new CPersona(nombre, dat1, dat3, dat4, dat6);
	obj->generarDNI();

	cin >> nombre;
	cin >> dat1;
	cin >> dat6;
	CPersona* obj1 = new CPersona(nombre, dat1, dat6);
	cin >> dat3 >> dat4;
	obj1->setpeso(dat3);
	obj1->setaltura(dat4);
	obj1->generarDNI();

	CPersona* obj2 = new CPersona(nombre, dat1, dat6);
	cin >> nombre;
	cin >> dat1;
	cin >> dat6;
	cin >> dat3 >> dat4;
	obj2->setnombre(nombre);
	obj2->setedad(dat1);
	obj2->setpeso(dat3);
	obj2->setaltura(dat4);
	obj2->comprobarSexo(dat6);
	obj2->generarDNI();
	cout << obj->toString() << "\t" << obj->esMayorDeEdad() << endl;
	cout << obj1->toString() << "\t" << obj->esMayorDeEdad() << endl;
	cout << obj2->toString() << "\t" << obj->esMayorDeEdad() << endl;

	_getch();


}
