#include <iostream>
using namespace std;
//Fungsi garis
garis ()
{
	cout << "----------------------------------" << endl;
}

//Record
typedef struct {
	string hari;
	string bulan;
	string tahun;
} tanggal;

typedef struct {
	int jam;
	int menit;
	int detik;
} jam;

typedef struct {
	int noKA;
	string KotaAsalKA;
	jam jamBerangkat;
	tanggal tanggalBerangkat;
	string kotatujuanKA;
	jam jamTiba;
	tanggal tanggalTiba;
} jadwalKA;

 /*Tugas Membuat Program Jadwal berangkat kereta menggunakan record*/

int main () {
	//Program
	jadwalKA jadwalKeretaApi;

	jadwalKeretaApi.noKA = 1;
	jadwalKeretaApi.KotaAsalKA = "Jakarta";
	jadwalKeretaApi.jamBerangkat.jam = 23;
	jadwalKeretaApi.jamBerangkat.menit = 30;
	jadwalKeretaApi.jamBerangkat.detik = 15;
	jadwalKeretaApi.tanggalBerangkat.hari = "Senin";
	jadwalKeretaApi.tanggalBerangkat.bulan = "April";
	jadwalKeretaApi.tanggalBerangkat.tahun = "2017";
	
	jadwalKeretaApi.kotatujuanKA = "Bandung";
	jadwalKeretaApi.jamTiba.jam = 01;
	jadwalKeretaApi.jamTiba.menit = 45;
	jadwalKeretaApi.jamTiba.detik = 10;
	jadwalKeretaApi.tanggalTiba.hari = "Selasa";
	jadwalKeretaApi.tanggalTiba.bulan = "April";
	jadwalKeretaApi.tanggalTiba.tahun = "2017";

//Untuk menampilkan program
	garis ();
	cout << "Jadwal Kereta Api Mutiara Selatan" << endl;
	garis ();
	cout << "Hari Keberangkatan : " << jadwalKeretaApi.tanggalBerangkat.hari << "-" << jadwalKeretaApi.tanggalBerangkat.bulan << "-" << jadwalKeretaApi.tanggalBerangkat.tahun << endl;
	cout << "No Gerbong Kereta : " << jadwalKeretaApi.noKA << endl;
	cout << "Jam Keberangkatan Kereta : " << jadwalKeretaApi.jamBerangkat.jam << ":" << jadwalKeretaApi.jamBerangkat.menit << ":" << jadwalKeretaApi.jamBerangkat.detik << endl;
	cout << "Stasiun Kota Asal : " << jadwalKeretaApi.KotaAsalKA << endl;
	garis ();
	cout << "Hari Datang : " << jadwalKeretaApi.tanggalTiba.hari << "-" << jadwalKeretaApi.tanggalTiba.bulan << "-" << jadwalKeretaApi.tanggalTiba.tahun << endl;
	cout << "Jam Tiba Kereta : " << jadwalKeretaApi.jamTiba.jam << ":" << jadwalKeretaApi.jamTiba.menit << ":" << jadwalKeretaApi.jamTiba.detik << endl;
	cout << "Stasiun Kota Tujuan : " << jadwalKeretaApi.kotatujuanKA << endl;



return 0;
}