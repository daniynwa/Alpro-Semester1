#include <iostream> 
using namespace std;
/*LATIHAN MATRIKS*/

int main () {
	int M [3] [3];

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			cout << "Masukan Nilai Matrix 1 Baris " << i << " dan Kolom " << j << ":";
			cin >> M [i] [j];
		}
	}
	/*Menampilkan Hasil Pertambahan Matriks M1 + M2 ke M*/
			cout << endl;
			cout << "=======================TABEL M=====================" << endl;
			cout << " |\t " << M [0] [0] << " \t|\t " << M [0] [1] << " \t| " << M [0] [2] << endl;
			cout << " |\t " << M [1] [0] << " \t|\t " << M [1] [1] << " \t| " << M [1] [2] << endl;
			cout << " |\t " << M [2] [0] << " \t|\t " << M [2] [1] << " \t| " << M [2] [2] << endl;
			cout << "====================================================" << endl;		
	
	return 0;
}