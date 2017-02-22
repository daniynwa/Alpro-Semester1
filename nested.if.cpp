#include <iostream>
using namespace std;

int main()
{
 float pendapatan, jasa, bonus, total;
 cout<<"Pendapatan Hari ini Rp. ";
 cin>>pendapatan;


 if(pendapatan>=0 && pendapatan <=300000)
 {
  jasa=10000;
  bonus=0.1*pendapatan;
 }
 else
 {
  if(pendapatan<=500000)
  {
   jasa=20000;
   bonus=0.15*pendapatan;
  }
  if(pendapatan<=1000000)
  {
   jasa=50000;
   bonus=0.2*pendapatan;
  }
  else
  {
   jasa=100000;
   bonus=0.3*pendapatan;
  }
 }
 
 total=bonus+jasa;
 cout<<"Jasa Penjualan Rp."<<jasa<<endl;
 cout<<"Bonus Rp."<<bonus<<endl;
 cout<<"============================"<<endl;
 cout<<"Hasil Total Rp."<<total<<endl;

return 0;
}