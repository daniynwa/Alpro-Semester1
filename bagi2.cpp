#include <iostream>
using namespace std;
//Sequential (Linear Search) 

int main () {
	int a[5]={20,30,40,50,60};
	int i,cari,ia,tengah,ib;

	for (i=0; i<5; i++) { //Menampilan NIlai Array
		cout << a[i] <<" | ";
	}

	cout <<"\nMasukan Nilai yg dicari di Elemen Array : ";
	cin >> cari; //Input Nilai

	ia = 0; //menentukan indek awal
	ib = 4; //Menentukan index akhir

while (ia<=ib) { //memulai proses pencarian
	tengah=(ia+ib)/2; //Proses pembagian index
	if (cari>a[tengah]) { //Jika data yg dicari lebih besar dari data tengah maka =
		ia=tengah+1;
	}
	else if (cari<a[tengah]) { //Jika data yg dicari lebih kecil dari nilai tengah maka =
		ib=tengah-1;
	}
	else {
		ia=ib+1; //Jika data yg dicari tidak ditemukan
	}
}

if (cari==a[tengah]) {
	cout<<"data "<<cari<<" ditemukan";
}
else {
	cout<<"data tidak ditemukan...!!!";
}

return 0;
}