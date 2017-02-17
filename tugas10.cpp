#include <iostream>
// I.S 
// F.S 

using namespace std;

int main () {
	int a = 100;
	int b = 200;
cout << "before swap, value of a :" << a << endl;
cout << "before swap, value of b :" << b << endl;

cout << "after swap, value of a :" << a << endl;
cout << "after swap, value of b :" << b << endl;

return 0;
}

void swap (int  x, int y) {
//Fungsi Swap
int temp;
temp = x;
x = y;
y = temp;

return ;
}