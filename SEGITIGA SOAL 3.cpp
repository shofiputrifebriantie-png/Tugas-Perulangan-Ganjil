#include<iostream>
using namespace std;
int main(){
	int jumlah = 0;

for (int i = 2; i<=10; i += 2) {
	jumlah += i;

		for (int  j = 2; j <= i; j += 2){
		cout<<j;
		if ( j < i )
	cout << " = " ;
}
cout<< " = "<<jumlah<<endl;
}
return 0;
}
	

