#include <iostream>
using namespace std;

int main(){
	int resultado, a, b;
	
	cout << "Ingrese el valor del lado A: ";
	cin >> a;
	
	cout << endl;
	
	cout << "Ingrese el valor del lado B: ";
	cin >> b;
	
	cout << endl;
	
	resultado = a * b;
	
	if(a == b){
		cout << "El resultado del area es: " << resultado << " y es un cuadrado.";
		cout << endl;
	}else if(a <= 0 || b <= 0){
		cout << "Ninguno de los valores puede ser menor o igual a 0.";
		cout << endl;
	}else{
		cout << "El resultado del area es: " << resultado;
	}
	
	return 0;
	
}
