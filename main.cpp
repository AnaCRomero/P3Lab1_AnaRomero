#include <iostream>
#include <math.h> 		//para utilizar el pow
using namespace std;	//para variables (Scanner)
using std:: cout;
using std:: cin;

//Ana Romero - 11941043

int main() {
	//variables utilizadas
	int opcion;	//para el switch
	bool seguir = true;	//para salirse de la app
	
	while (seguir){
		
		cout << "------------MENU-------------" << endl;
		cout << "1. Ejercicio 1 "<< endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Salir" << endl;
		cout<< "Ingrese una opcion: "  ;
		cin >> opcion;	//lee la opcion del usuario
		cout << endl;
		
		switch (opcion){
			case 1:
			{		
				//variables usadas
				int k; 	//ingresada por el usuario
				int acum = 0;	
				
				cout << "Ingrese el valor de k: ";
				cin >> k;
				
				if (k < 0){
					cout << "Error, Ingrese un numero entero positivo!" << endl;				
				}else{
					
					for (int i = 0; i <= k; i++){
						acum+= i*pow(i+1,2);
					}
					cout << "El resultado es: " << acum << endl;
					
				}//fin de validacion si es entero positivo		
				break;
			}
				
			case 2:
			{
			
				
			break;	
			}				
			case 3:
			{				
				cout << "Saliendo...";
				seguir = false;				
				break;
			}
			default: cout << "Ingrese una opcion existente!";		
		}	
	}
	return 0;	
}
