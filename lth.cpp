#include <iostream>
using namespace std;
//Tugas Latihan
//Program menampilkan angka

int main() 
{
//Kamus
	int mahasiswa =0, lulus =0, tidak =0 ;
	//Mahasiswa = Jumlah Mahasiswa
	//Lulus = Jumlah Mahasiswa Lulus
	//Tidak = Jumlah Mahasiswa Tidak Lulus
	float ip, total = 0, rata;
	cout << "Masukan Nilai IP : ";
	cin >> ip;
	while (ip > -999) {
		if (ip >= 0 && ip <= 4) {
			mahasiswa++;
			total = total + ip;
			if (ip >= 2.75) {
			lulus++;
			}
			else {
			tidak++;
			}
	}
	cout << "Masukan Nilai IP : ";
	cin >> ip;

	}
//Untuk mengeluarkan Data
cout << endl;
cout << "Jumlah Mahasiswa = " << mahasiswa << endl;
cout << "Jumlah Mahasiswa Lulus = " << lulus << endl;
cout << "Jumlah Mahasiswa Tidak Lulus = " << tidak << endl;
rata = total / mahasiswa;
cout << "Rata - Rata IP = " << rata;



return 0;
}