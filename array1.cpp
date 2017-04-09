#include <iostream>
using namespace std;
//Array

int main () {
 //kamus
 int h = 0;
 string abjad[10];
 
 //Pengulangan
 for (int i = 0; i < 10; i++){
        cout << "Masukan Daftar Abjad: " << i+1 << " = ";
        cin >> abjad[i];
    }
cout << "Masukan Abjad : " << endl;
//Pengulangan
for (int i = 0; i < 10; i++) {
	//Untuk menscan abjad
	if (abjad[i] == "A") {
		h++;
	}
	cout << "Abjad " << i+1 << " = " << abjad[i] << endl;
}
	cout << "Jumlah Kemunculan Abjad A = " << h;
return 0;
}