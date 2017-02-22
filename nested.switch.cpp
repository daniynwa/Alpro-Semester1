#include <iostream>
/* 
 Program Memasukan Nilai
 Dani Afriyadi Yusuf
 (Jika nilai yg di dapat true maka akan keluar nilai nya yang bagus sesuai hasilnya)
*/
//Nested Switch Statement
using namespace std;

int main () {

	int nilai;
 cout <<"============================"<<endl;
 cout <<"Masukan Nilai "<<endl;
 cout <<"============================"<<endl;
 cout <<""<<endl;
 cout <<"100 " <<endl;
 cout <<"90 " <<endl;
 cout <<"80 " <<endl;
 cout <<"70 " <<endl;
 cout <<"60 " <<endl;
 cout <<"============================"<<endl;
 	cout << "Massukan Nilai Anda :";
	cin >> nilai;

switch(nilai)
   {
   case 100 :
      cout << "IPK 4.00" << endl; 
      break;
   case 90 :
      cout << "IPK 3.50" << endl;
      break;
   case 80 :
      cout << "IPK 3.00" << endl; 
      break;
   case 70 :
      cout << "IPK 2.7" << endl; 
      break;
   case 60 :
      cout << "IPK 2.00 KUDU NGULANG" << endl; 
      break;
   default :
      cout << "Invalid grade" << endl;
   }
   cout << "Nilai Kamu " << nilai << endl;
 
   return 0;
}
