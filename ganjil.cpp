#include <iostream>
using namespace std;

int main() {
	int jumlah = 0;
	
	for (int i = 1; i <= 10; i++) {
		int bilangan = 2 * i - 1;//  menghasilkan bilangan ganjil
		jumlah += bilangan;
		
		cout << bilangan;
		if (i < 10 ){
			cout << " + ";
		}
	}
	cout << " = " << jumlah << endl;
	return 0;
}
