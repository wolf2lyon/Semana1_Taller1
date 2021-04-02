
#include <conio.h>
#include <iostream>
#include <ctime>
using namespace std;

/* 
using namespace System;
using namespace std;
int* Agregar_Elemento(int* Vector, int* N, int Numero)
{
	int* Aux = new int[*N + 1];
	for (int i = 0; i < *N; i++)
		Aux[i] = Vector[i];
	Aux[*N] = Numero;
	*N = *N + 1;
	return Aux;
}
void Muestra_Arreglo(int* Vector, int* N)
{
	for (int i = 0; i < *N; i++)
	{
		cout << "Vector[" << i << "]=" << Vector[i] << endl;
	}
		
}
void main()
{
	int* N = new int;
	*N = 0;
	int* Vector = NULL;
	int elemento;
	while (1)
	{
		Console::Clear();
		cout << "AGREGAR ELEMENTOS A UN ARREGLO" << endl;
		cout << "--------------------------------" << endl;
		cout << "Ingrese elemento: "; cin >> elemento;
		Vector = Agregar_Elemento(Vector, N, elemento);
		cout << "\n Elementos del arreglo: " << endl;
		Muestra_Arreglo(Vector, N);
		cout << "\n\n Presione una tecla para continuar..."; system("pause>0");
	}
	
}
*//**/
/* Creación de un arreglo dinámico con una función para agregar elemento al final*/

/*
void main()
{
	int* arreglo;
	int t;
	System::Random r;
	while (1)
	{
		System::Console::Clear();
		cout << "Ingrese el tamaño del arreglo: "; cin >> t;
		arreglo = new int[t];
		for (int i = 0; i < t; i++)
		{
			arreglo[i] = r.Next(0, 100);
			cout << "arreglo [" << i << "] =" << arreglo[i] << endl;

		}
		cout << "\nPresione una tecla para continuar ...."; _getch();
		delete[]arreglo;
		arreglo = nullptr;
	}
}
*/
/*Creación de un arreglo dinámico con valores aleatorios.*/

void generar_data(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%51;
	}
}
void print_data(int* arr, int n)
{
	cout << "Index\t" << "Value\t" << endl;
	for (int i = 0; i < n; i++)
	{
		cout<<i<<"\t" << arr[i] << "\t"<<endl;
	}
}
void eliminar_multipos_de_tres(int *&arr, int &n)
{
	int *aux;
	aux = new int[n];
	int cont = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 3 != 0) {
			aux[cont] = arr[i];
			cont++;
		}
	}
	arr = aux;
	n = cont;
}
void ordenar_arreglo(int* arr, int n)
{
	int aux;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
			}
		}
	}
}
void insertar_numero(int *&arr, int& n,int value )
{
	n++;
	arr[n - 1] = value;
	ordenar_arreglo(arr, n);

}


int main()
{
	srand(time(NULL));
	int* pointer;
	int n = 10;
	pointer = new int[n];
	generar_data(pointer, n);
	print_data(pointer, n);
	cout << endl;
	eliminar_multipos_de_tres(pointer, n);
	print_data(pointer, n);
	cout << endl;
	ordenar_arreglo(pointer, n);
	print_data(pointer, n);
	cout << endl;
	insertar_numero(pointer, n, 23);
	print_data(pointer, n);
	
	_getch();
	return 0;
}