#include <iostream>


/*Haga una función que reciba una cadena de caracteres numéricos, la convierta a un número entero
y retorne dicho número. Escriba un programa de prueba.
Ejemplo: si recibe la cadena “123”, debe retornar un int con valor 123.*/


using namespace std;


char cad[100];

int num(string cadena){
    return stoi(cadena);
}

int main() {

    cout<<"ingrese un numero :"<<endl;
    cin>>cad;

    cout<<num(cad)<<endl;
}
