#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero,fibo1,fibo2,i;
   do
   {
         cout << "Introduce numero mayor que 1: ";
         cin >> numero;
   }while(numero<=1);
   cout << endl;
    //cout << "La suma de #" << numero << " numeros en da como resultado: "<< fibo2 << "en numeros Fibonacci." << endl;
   fibo1=1;
   fibo2=1;
   //cout << fibo1 << " ";
   for(i=2;i<=numero;i++)
   {
       //cout << fibo2 << " ";
       fibo2 = fibo1 + fibo2;
       fibo1 = fibo2 - fibo1;
       
   }
	// cout << fibo2 << " ";
	 cout << "La suma de # " << numero << " numeros da como resultado: "<< fibo2 << " en numeros Fibonacci." << endl;
   cout << endl << endl;
    system("pause");
	return 0;
}
