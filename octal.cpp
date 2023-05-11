#include "octal.h"

/*constructor predeterminado*/
octal::octal(long valor)
{
    for(int i = 0; i <= 34; i++)
        oct[i] = 0;

    /*coloca los digitos del argumento dentro del arreglo*/
    for(int j = 34; valor != 0 && j >= 0; j--){
        oct[j] = valor % 8;
        valor /= 8;
    }

}

octal octal::operator+(const octal &op2) const
{
    octal temp;
    int acarreo = 0;
    for(int i = 34; i >= 0; i--){
        temp.oct[i] = oct[i] + op2.oct[i] + acarreo;
        if(temp.oct[i] > 7){
            temp.oct[i] %= 8; //reduce a 0-8
            acarreo = 1;
        }
        else
            acarreo = 0;
    }
    return temp;
}

/*operador de salida sobrecargado*/
ostream& operator<<(ostream &salida, const octal &num)
{
    int i;
    for(i = 0; (num.oct[i] == 0) && (i <= 34); i++);
    /*ignora ceros a la izquierda*/

    if(i == 35)
        salida << 0;
    else
        for( ; i <= 34; i++)
            salida << num.oct[i];
    return salida;
}
