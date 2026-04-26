#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "masukan jumlah baris: ";
	cin >> n;
	
	int i = 1;
	
	do {
		int hasil = 1;
		int j = 1;
		
	do {
		int bilangan = 2 * j - 1; //
		cout << bilangan;
		
		hasil *= bilangan;
		
		if(j < i) {
			cout << " * ";
		}
		j++;
	} while ( j<= i);
	cout <<" = " << hasil << endl;
	
	i++;
	} while (i <= n);
	return 0;
	}
