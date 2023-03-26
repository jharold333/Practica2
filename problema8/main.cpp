#include <iostream>



/*Escriba un programa que reciba una cadena de caracteres y separe los números del resto de caracteres,
generando una cadena que no tiene números y otra con los números que había en la cadena original.
Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
Nota: la salida del programa debe ser:
Original: abc54rst.
Texto: abcrst. Numero: 54
*/


using namespace std;

int main()
{
   string cad="";
   string letras="", nums="";

   cout<<"por favor ingrese una cadena de caracteres que contenga numeros y letras en minuscula: ";
   cin>>cad;
   for(int i=0;i<cad.length();i++){
       if(cad[i]>=97 && cad[i]<=122)
           letras+=cad[i];
       if(cad[i]>=49 && cad[i]<=57)
           nums+=cad[i];
   }
    cout<<"Original :"<<cad<<endl;
    cout<<"Texto :"<<letras<<".  "<<"Numero :"<<nums<<"."<<endl;
}
