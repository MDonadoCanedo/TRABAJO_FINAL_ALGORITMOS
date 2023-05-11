#include "octal.h"
#include "binario.h"
#include "decimal.h"
#include "hexadecimal.h"

int main()
{
  int opc;
  decimal dn1(7654321);
  decimal dn2(7891234);
  decimal dn3;
  binario Bn1(79);
  binario Bn2(369);
  binario Bn3;
  hexadecimal hn1(7654321);
  hexadecimal hn2(7891234);
  hexadecimal hn3(1234);
  octal On1(8736292);
  octal On2(46792822);
  octal On3; 
 
 while(opc != 5)
 {
   cout << endl;
  cout << "---------------SISTEMAS NUMERICOS----------------" << endl;
  cout << "-------------------------------------------------" << endl << endl;
    cout << "\nSeleccione el sistema numerico  que desea utilizar \n"<<endl;
  cout << "Clase binario.................................(1)" << endl;
  cout << "Clase decimal...................................(2)" << endl;
  cout << "Clase octal.................................(3)" << endl;
  cout << "Clase hexadecimal.............................(4)" << endl;
  cout << "Salir / Exit..................................(5)" << endl << endl;
   cout << endl << "Elija la opcion que desea realizar: ";
   cin >> opc;
   switch(opc)
   {
     case 1: 
      cout <<"\n\n***Valores a usar***";
      cout << "\nn1 es " << Bn1;
      cout << "\nn2 es " << Bn2;
      cout << "\nn3 es " << Bn3;
      Bn3 = Bn1 + Bn2;
      cout<<endl; 
      cout<<"\n***Resultado***";
      cout << "\n" << Bn1 << " + " << Bn2 << " = " << Bn3;
       break;
     
     case 2:
      cout <<"\n\n***Valores a usar***";
      cout << "\nn1 es " << dn1;
      cout << "\nn2 es " << dn2;
      cout << "\nn3 es " << dn3;
      dn3 = dn1 + dn2;
       cout<<endl; 
      cout<<"\n***Resultado***";
      cout << "\n" << dn1 << " + " << dn2 << " = " << dn3;
      cout<<"\n\n";
       break;
     
     case 3:   
      cout <<"\n\n***Valores a usar***";
      cout << "\nn1 es " << On1;
      cout << "\nn2 es " << On2;
      cout << "\nn3 es " << On3;
      On3 = On1 + On2;
      cout<<endl;  
       cout<<"\n***Resultado***";
      cout << "\n" << On1 << " + " << On2 << " = " << On3;
      cout<<"\n\n";
      break;
     
     case 4:
      cout <<"\n\n***Valores a usar***";
      cout << "\nn1 es " << hn1;
      cout << "\nn2 es " << hn2;
      cout << "\nn3 es " << hn3;
      hn3 = hn1 + hn2;
      cout<<endl;  
      cout<<"\n***Resultado***"; 
      cout << "\n" << hn1 << " + " << hn2 << " = " << hn3;
      break;

      case 5:
        cout << "\n\nGracias por usar nuestros servicios" << endl;
        break;
     default:
       cout << "\n\n\t¡ERROR EN OPCION!";
       opc = '0';
     
   }
 }
    return 0;
}