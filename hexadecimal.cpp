#include "hexadecimal.h"

/*constructor predeterminado*/
hexadecimal::hexadecimal(long valor)
{
  int i, temp = 0;
  for(i = 0; i < 100; i++) hexa[i] = '0';
  i = 99;
  while(valor > 0) {
    temp = valor % 16;
    if(temp < 10) {
      hexa[i] = temp + 48;
      i--;
    }
    else {
      hexa[i] = temp + 55;
      i--;
    }
    valor = valor / 16;
  }
}

hexadecimal hexadecimal::operator+(const hexadecimal &op2) const
{
    hexadecimal temp;
    int acarreo = 0;
    for(int i = 99; i >= 0; i--){
        int varia1 = hexa[i] >= '0' && hexa[i] <= '9' ? hexa[i] - '0' : hexa[i] - 'A' + 10;
        int varia2 = op2.hexa[i] >= '0' && op2.hexa[i] <= '9' ? op2.hexa[i] - '0' : op2.hexa[i] - 'A' + 10;
        int total = varia1 + varia2 + acarreo;
        acarreo = total / 16;
        temp.hexa[i] = total% 16;
        temp.hexa[i] += temp.hexa[i] < 10 ? '0' : 'A' - 10;
    }
    return temp;
}

/*operador de salida sobrecargado*/
ostream& operator<<(ostream &salida, const hexadecimal &num)
{
    int i;
    for(i = 0; (num.hexa[i] == '0') && (i < 100); i++);
    /*ignora ceros a la izquierda*/
    if(i == 99)
        salida << 0;
    else
        for( ; i < 100; i++)
            salida << num.hexa[i];
    return salida;
}