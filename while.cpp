#include <iostream>
//Nested While statement
using namespace std;
 
int main ()
{
   // Variable lokal
   int a = 5;
   int b = 15;

   // while eksekusi
   while( a < 10 )
   {
       cout << "===========" << endl;
       cout << "Nilai A : " << a << endl;
       a++;
   }
   while( b < 20 )
   {
       cout << "===========" << endl;
       cout << "Nilai B : " << b << endl;
       b++;
   }
   return 0;
}