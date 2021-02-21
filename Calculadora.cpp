#include<iostream>

//Definición de namespace

using namespace std;

//Definición de las clases
class Calculadora {
		//Definición de metodos
		public:
		int Calcular(int,char, int);
	
};

int main(){
	//Definir variables para capturar los valores
	
	char operador;
	int numero1, numero2, resultado;
	Calculadora objCalculadora;
	
	//Solicitud de valores al usuario
	cout<<"Ingrese los valores por favor.........Ejemplo: 5 + 3"<<endl;
	cin>>numero1>>operador>>numero2;
	
	//Retorno del resultado de la operación del objeto
		resultado=objCalculadora.Calcular(numero1,operador,numero2 );
	cout<<"El resultado es:  "<<resultado<<endl;

	return 0;
		
}

//Definición de método público de la clase
int Calculadora:: Calcular(int intNumero1, char chrOperador, int intNumero2){
	
	//Definición de casos según sea el caracter que el usuario ingrese
	switch(chrOperador){
		
		case '+':
			return intNumero1 + intNumero2;
		case '-':
			return intNumero1 - intNumero2;	
		case '*':
			return intNumero1 * intNumero2;	
		case '/':
			//Condición que valida la operación cuando el segund valor ingresado sea distinto de 0
			if(intNumero2 != 0){
				return intNumero1 / intNumero2;
			}
			//
		   else{
		   	cout<<"La division entre cero no posee un valor definido"<<endl ;
		   
		   }		
		default:
		    return 0;	
	}
	
}


