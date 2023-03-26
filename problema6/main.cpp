#include <iostream>


/* Escriba un programa que reciba una cadena de caracteres y cambie las letras minúsculas por mayúsculas, los demás caracteres no deben ser alterados.
Ejemplo: se recibe Man-zana debe mostrar MAN-ZANA.
Nota: la salida del programa debe ser: Original: Man-zana. En mayuscula: MAN-ZANA
*/

using namespace std;


void convertidor(int x,char *y);

int main()
{
    int a;
    char *cadena;
    cout << "Ingrese la longitud de la cadena: ";
    cin >> a;
    cadena = new char[a+1];
    cout<<"Ingrese una palabra: "; cin>>(cadena);
    convertidor(a,cadena);
    delete cadena;
}

void convertidor(int x,char *y){
    int f=0;
    for(int i=0;i<x;i++){
        f=y[i];
        if (f<=122 && f>=97) f-=32;
        y[i]=f;
        }
    cout <<"Conversion: "<<y;
    cout<<endl;
}


/*              CODIGO ASCII
 mayusculas[65-90]      minusculas[97-122]
           A - Z                  a - z
 a  97-32=65= A
*/
