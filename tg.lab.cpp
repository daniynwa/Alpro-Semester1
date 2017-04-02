#include <iostream>
//Program menampilkan nilai minimum & maksimum
 using namespace std;

int main ()
{
	int a, b, c, d;

cout << endl;
cout << "==================================" << endl;
cout << "Menacri Nilai Minimum dan Maximum" << endl;
cout << endl;
cout << "Masukan Jumlah Baris data = "; cin >> a;
cout << endl;

for (int i = 1; i <= a; i++) {
	cout << "Masukan Nilai bilangan = "; cin >> b;

	if (i == 1) {
		c = b;
		d = b;
	}

		else if ( c > b) {
		c = b;
		}

		else if ( d < b) {
			d = b;
		}
		else {}

}

cout << endl;
cout << "Nilai Minimum = " << c << endl;
cout << "Nilai Maximum = " << d << endl;
cout << endl;
cout << "==================================" << endl;






return 0;
} 