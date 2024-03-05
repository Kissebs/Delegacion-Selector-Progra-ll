#include "Contenedor.h"
#include "SEdades.h"

int main() {
	int respuesta,edadMin,edadMax;
	double peso;
	Contenedor* contenedorMomentaneo;
	cout << "--------------Delegacion sobre selector----------------" << endl;
	cout << "---------------Trabajando con coleccion-------------------" << endl;

	cout << endl;

	cout << "Creando un coleccion" << endl;

	Contenedor* CO = new Contenedor(20);//CENTRO DE COMPUTO UNA

	cout << "Creacion de Persona" << endl;

	Persona* per1 = new Persona("1111", "Juan", 65, 60);
	Persona* per2 = new Persona("2222", "Carlos", 13,55 );
	Persona* per3 = new Persona("3333", "Ana", 28, 50);
	Persona* per4 = new Persona("4444", "Berta", 56, 50);
	Persona* per5 = new Persona("5555", "Xinia", 80, 63);
	Persona* per6 = new Persona("6666", "Jose", 11, 100);
	Persona* per7 = new Persona("7777", "Andres", 15, 25);
	Persona* per8 = new Persona("8888", "Georges", 71, 80);
	Persona* per9 = new Persona("9999", "Mayela", 51,58 );
	Persona* per10 = new Persona("1010", "Sonia", 11,60 );


	CO->agregaPersona(*per1);
	CO->agregaPersona(*per2);
	CO->agregaPersona(*per3);
	CO->agregaPersona(*per4);
	CO->agregaPersona(*per5);
	CO->agregaPersona(*per6);
	CO->agregaPersona(*per7);
	CO->agregaPersona(*per8);
	CO->agregaPersona(*per9);
	CO->agregaPersona(*per10);

	cout << "Menu" << endl;

	cout<<"Digite la seleccion que desea observar" << endl;
	cout << "1- Por rango de edades" << endl;
	cout << "2- Por peso" << endl;
	cout << "3- etc" << endl;
	cin >> respuesta;

	if (respuesta == 1) {
		cout << "Seleccion Por Rangp de Edades" << endl;
		cout << "Digite la primera edad" << endl;
		cin >> edadMin,
		cout << "Digite la segunda edad" << endl,
		cin >> edadMax;
		contenedorMomentaneo = CO->seleccionar(*new SEdades(edadMin, edadMax));
		cout<<contenedorMomentaneo->toString() << endl;
	
	}
	else {
	
		cout << "Seleccion por Peso";
	}
	delete contenedorMomentaneo;
	delete CO;
}