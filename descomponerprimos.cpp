// Descomponer un numero en primos

#include <iostream>

using namespace std;

int main(){
		
	int numero; //primero creamos la variable numero, que sera el dato ingresado por el usaurio
	printf("Ingrese el numero que desea descomponer:"); //Imprimimos en pantalla el mandato
	cin>>numero; //Guardamos en la variable numero, el dato ingresadoo por el usuario
	printf("%d = ", numero); //Imprimos el numero ingresado por el usuario para su descomposicion
	
	for (int i = 2; numero >= i; i++){ // Interamos el numero ingresado entre todos los numeros naturales que sean menor o igual a este
		
		while (numero % i == 0){ // identificamos el numero primo que sea divisible con resultado 0	
		
			numero /= i; //Dividimos el numero ingresado entre el numero primo divisible
			
			if(numero != 1){ //si el resultado final es diferente de 0, agregamos el * para indicar multiplo (solo para estetica del programa)
			
				printf("*"); //agregamos el *
				
			}
			
		}
		
	}
	
	printf("\n\n\n");system("PAUSE");
	return 0;
}