#include <iostream>
using namespace std;

//Ana Romero - 11941043

int main() {
	//variables utilizadas
	int opcion;
	char resp = 's';
	
	cout << "------------MENU-------------" << endl;
	cout << "1. Ejercicio 1 "<< endl;
	cout << "2. Ejercicio 2" << endl;
	cout << "3. Salir" << endl;
	cout<< "Ingrese una opcion: " << endl;
	cin >> opcion;	//lee la opcion del usuario
	
	switch (opcion){
		while (resp == 'S' || resp == 's'){
		
			case 1:
				
				break;
				
			case 2:
					
				break;
			case 3:
				
				break;
			default: cout << "Ingrese una opcion valida!" << endl;
		}
		cout << "Desea continuar [s/n]: ";
		cin >> resp;
	}

	return 0;
	
}
