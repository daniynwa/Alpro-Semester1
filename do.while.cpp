// C++ program untuk menambahkan number
// Untuk menjumlahkan tekan 0
//do while statement
#include <iostream>
using namespace std;

int main() 
{
    float number, nilai = 0.0;
    
    do {
        cout<<"Enter a number: ";
        cin>>number;
        nilai += number;
    }
    while(number != 0.0);

    cout<<"Total nilai = "<<nilai;
    
    return 0;
}