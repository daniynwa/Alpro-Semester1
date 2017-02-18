#include <iostream>
//memasukan nilai yang terpungsi
using namespace std;
int main () {

char nama = 'R';
switch (nama) {
	case 'A' : cout << "nama saya amir" << endl;
	break;
	case 'R' : cout << "nama saya ridwan" << endl;
	break;
	case 'D' : cout << "nama saya dani" << endl;
	break;
	case 'Y' : cout << "nama saya yusuf" << endl;
	break;
	default : cout << "tidak ada nama" << endl;

}


return 0;
}