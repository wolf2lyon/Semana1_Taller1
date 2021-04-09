#include<iostream>
#include  <ctime>
#include  < conio.h >

#include<string>
using namespace std;
#pragma once
class CPersona
{
public:
	CPersona();
	CPersona(string, int, float, float, char);
	CPersona(string, int, char);
	~CPersona();
	string getnombre();
	void setnombre(string nombre);
	int getedad();
	void setedad(int nombre);
	float getpeso();
	void setpeso(float nombre);
	float getaltura();
	void setaltura(float nombre);
	char getgenero();
	void setgenero(char nombre);
	bool	esMayorDeEdad();
	void	comprobarSexo(char genero);
	void	generarDNI();
	int		IMC();
	string toString();
	string inttostr(int num);
	string flotostr(float num);


private:
	string nombre;
	int edad, dni;
	char genero;
	float peso, altura;
};

CPersona::CPersona()
{
	nombre = "";
	edad = 0;
	dni = 0;
	peso = 0;
	altura = 0;
	genero = ' ';
}
CPersona::CPersona(string _nombre, int eedad, float peso, float altura, char genero)
{
	nombre = _nombre;
	edad = eedad;
	this->peso = peso;
	this->altura = altura;
	this->genero = genero;
}
CPersona::CPersona(string _nombre, int eedad, char genero)
{
	nombre = _nombre;
	edad = eedad;
	this->dni = 0;
	this->peso = 0;
	this->altura = 0;
	this->genero = genero;

}
CPersona::~CPersona()
{

}
string CPersona::getnombre() { return nombre; }
void CPersona::setnombre(string nombre) { this->nombre = nombre; }
int		CPersona::getedad() { return edad; }
void    CPersona::setedad(int nombre) { edad = nombre; }
float   CPersona::getpeso() { return peso; }
void	CPersona::setpeso(float nombre) { peso = nombre; }
float	CPersona::getaltura() { return altura; }
void	CPersona::setaltura(float nombre) { altura = nombre; }
char	CPersona::getgenero() { return genero; }
void	CPersona::setgenero(char nombre) { genero = nombre; }
bool	CPersona::esMayorDeEdad() { return edad > 18; }
void	CPersona::comprobarSexo(char genero) {
	if (genero == 'F')this->genero = 'F';
	else this->genero = 'H';
}
void	CPersona::generarDNI()
{
	dni = rand() % 9 + 1;
	for (int i = 0; i < 7; i++)
	{
		dni = dni * 10 + rand() % 10;
	}
}
int		CPersona::IMC()
{
	float resultado = peso / (altura * altura);
	if (resultado < 20)return -1;
	if (resultado < 25)return 0;
	return 1;
}
string CPersona::toString()
{
	string mensaje = nombre + "\t" + inttostr(edad) + "\t" + inttostr(dni) + "\t"+
		flotostr(peso) + "\t" + flotostr(altura);
	switch (IMC())
	{
	case -1:mensaje = mensaje + "\t-1"; break;
	case  0:mensaje = mensaje + "\t0"; break;
	case  1:mensaje = mensaje + "\t1"; break;
	default:
		break;
	}
	return mensaje;
}
string CPersona::inttostr(int num)
{
	string msg = "";
	while (num > 0)
	{
		msg = char(num % 10 + '0') + msg;
		num = num / 10;
	}
	return msg;
}
string CPersona::flotostr(float num)
{
	string msg = "";
	int entero = num;
	while (entero > 0)
	{
		msg = char(entero % 10 + '0') + msg;
		entero = entero / 10;
	}
	num = num - int(num);
	string msg2 = "";
	while (num - int(num) > 0.0)
	{
		num = num * 10;
	}
	entero = num;
	while (entero > 0)
	{
		msg2 = char(entero % 10 + '0') + msg2;
		entero = entero / 10;
	}
	msg = msg + '.';
	msg = msg + msg2;
	return msg;
}