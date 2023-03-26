#include <iostream>
#include <cstdlib>
#include <ctime>

/*Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima este arreglo
y luego imprima cuantas veces se repite cada letra en el arreglo.
Ejemplo: supóngase que se genera el arreglo de 10 elementos: ABARSECAAB. El programa debe imprimir: ABARSECAAB
A: 4
B: 2
C: 1
Y así sucesivamente.
*/

using namespace std;

int main()
{
    char letra = 0;
    string pal="";

    srand((unsigned)time(0));
    for(int i = 0;i<200;i++)
            pal+=(rand()%26)+65;

    cout<<pal<<endl;

    for(int z = 65 ; z<= 90 ; z++ ){
        int cont= 0 ;
        for(int x = 0; x<200; x++){
            if(pal[x]==z){
                cont++;
            }
        }
        cout<<char(z)<<" : "<<cont<<endl;
        }







    return 0;

}
