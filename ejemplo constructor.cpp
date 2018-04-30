#include <iostream>
#include <string>

using namespace std;

// 1) Definir la clase
class Estudiante {
public:
	long long cuenta;
	string nombre;
	int nota1, nota2, nota3;

	// Sobrecarga de funciones.
	// Constructor por defecto.
	Estudiante(){
		cout << "Ejecutando constructor...\n";
		inicializarNotas();
	}
	// Constructor #2     2000            JUAN
	Estudiante(long long ACuenta, string ANombre)
	{
		cuenta = ACuenta;
		nombre = ANombre;
		inicializarNotas();
	}
	// Constructor #3
	Estudiante(string ANombre, long long ACuenta)
	{
		cuenta = ACuenta;
		nombre = ANombre;
		inicializarNotas();
	}
	// Constructor #4
	Estudiante(long long ACuenta)
	{
		cuenta = ACuenta;
		inicializarNotas();
	}

	void inicializarNotas(void)
	{
		nota1 = 0;
		nota2 = 0;
		nota3 = 0;
	}

	int calcularPromedio(void)
	{
		return (nota1 + nota2 + nota3) / 3;
	}

	void pedirNotas(void)
	{
		cout << "Nota #1: ";
		cin >> nota1;
		cout << "Nota #2: ";
		cin >> nota2;
		cout << "Nota #3: ";
		cin >> nota3;
	}
	void pedirDatos(void)
	{
		cout << "No Cuenta..: ";
		cin >> cuenta;
		cin.ignore(100, '\n');
		cout << "Nombre.....: ";
		getline(cin, nombre);
	}

	void mostrarDatos(void)
	{
		cout << "Cuenta No.: " << cuenta << endl
			 << "Nombre....: " << nombre << endl
			 << "Promedio..: " << calcularPromedio()
			 << endl << endl;
	}

};

int main()
{
	// 2) Crear los objetos
	// Sintaxis: <nombreClase> <identificador>;
	cout << "Antes de crear los objetos...\n";

	Estudiante al1, al2, al3; // Constructor por defecto
	Estudiante al4(2000, "JUAN"); // Constructor con parametros.
	Estudiante al5(3000); // Constructor con parametros.
	Estudiante al6("JUAN", 4000); // Constructor con parametros.

	cout << "Despues de crear los objetos...\n";


	al4.mostrarDatos();

	// 3) Utilizar los objetos.
	// Sintaxis: <nombreObjeto>.<elemento>
	//al1.pedirDatos();
	//al1.pedirNotas();
	//cout << "El promedio de al1 es: "
	//	 << al1.calcularPromedio() << endl;
	//al1.mostrarDatos();


	system("PAUSE");
	return 0;
}
