#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    char d;
    
    do{
    cout << "Ingrese lado A: ";
    cin >> a;
    cout << "Ingrese lado B: ";
    cin >> b;
    cout << "Ingrese lado C: ";
    cin >> c;
    cout << endl;
	
	if (a > 0 && b == 0 && c == 0) {
        cout << "La figura es un circulo" << endl;
        
    }else if (a > 0 && b > 0 && c == 0 && a == b) {
        cout << "La figura es un cuadrado" << endl;
        
    }else if(a > 0 && b > 0 && c == 0 && a != b){
        cout << "La figura es un rectangulo" << endl;
        
    }else if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)){
    	
        if (a == b && b == c){
            cout << "La figura es un triangulo equilatero" << endl;
            
        }else if (a == b || b == c || a == c) {
            cout << "La figura es un triangulo isosceles" << endl;
            
        }else{
            cout << "La figura es un triangulo escaleno" << endl;
        }
    }else{
        cout << "Los valores no indican figura." << endl;
    }
}while(d = 's');

    return 0;
}
