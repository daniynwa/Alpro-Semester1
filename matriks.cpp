#include <iostream> 
using namespace std;
/*LATIHAN MATRIKS*/

int main () {
	int M [3] [3];
	int M1 [3] [3];
	int M2 [3] [3];
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Masukan Nilai Matrix 1 Baris " << i << " dan Kolom " << j << ":";
			cin >> M1 [i] [j];
			cout << "Masukan Nilai Matrix 2 Baris " << i << " dan Kolom " << j << ":";
			cin >> M2 [i] [j];

			M [i] [j] = M1 [i] [j] + M2 [i] [j];
		}
	}

	//Menampilkan Input M1
			cout << endl;
			cout << "=======================TABEL M1=====================" << endl;
			cout << " |\t " << M1 [0] [0] << " \t|\t " << M1 [0] [1] << " \t| " << M1 [0] [2] << endl;
			cout << " |\t " << M1 [1] [0] << " \t|\t " << M1 [1] [1] << " \t| " << M1 [1] [2] << endl;
			cout << " |\t " << M1 [2] [0] << " \t|\t " << M1 [2] [1] << " \t| " << M1 [2] [2] << endl;
			cout << "====================================================" << endl;
	//Menampilkan Input M2
			cout << endl;
			cout << "=======================TABEL M2=====================" << endl;
			cout << " |\t " << M2 [0] [0] << " \t|\t " << M2 [0] [1] << " \t| " << M2 [0] [2] << endl;
			cout << " |\t " << M2 [1] [0] << " \t|\t " << M2 [1] [1] << " \t| " << M2 [1] [2] << endl;
			cout << " |\t " << M2 [2] [0] << " \t|\t " << M2 [2] [1] << " \t| " << M2 [2] [2] << endl;
			cout << "====================================================" << endl;
	/*Menampilkan Hasil Pertambahan Matriks M1 + M2 ke M*/
			cout << endl;
			cout << "=======================TABEL M=====================" << endl;
			cout << " |\t " << M [0] [0] << " \t|\t " << M [0] [1] << " \t| " << M [0] [2] << endl;
			cout << " |\t " << M [1] [0] << " \t|\t " << M [1] [1] << " \t| " << M [1] [2] << endl;
			cout << " |\t " << M [2] [0] << " \t|\t " << M [2] [1] << " \t| " << M [2] [2] << endl;
			cout << "====================================================" << endl;		
	
	return 0;
}