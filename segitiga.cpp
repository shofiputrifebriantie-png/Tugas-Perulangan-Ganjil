#include <iostream>
using namespace std;

int main() {
	int total = 0;
	
	// mulai dari 10, lalu turun hingga 2
	for (int i = 10; i >= 2; i -= 2) {
		int jumlahbaris = 0;
		
		for (int j = 10; j >= i; j -= 2) {
		
		cout << j;
		
		jumlahbaris += j;
		
		if(j > i) {
			cout << " + ";
		}
	}
	cout << " = " << jumlahbaris << endl;
	total += jumlahbaris;
}
cout <<"__________ +\n";
cout << total <<endl;

return 0;
}
