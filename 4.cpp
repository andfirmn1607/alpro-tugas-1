#include <iostream>
using namespace std;

void sum(int n){
	int b[100],hasil=0;
	for(int i=0; i<n; i++){
		cin>>b[i];
		hasil=hasil+b[i];
	}
	cout<<endl<<"Hasil Penjumlahan : "<<hasil;
}

int main()
{
	int n;
	cout<<"Jumlah bilangan : ";
	cin>>n;
	sum(n);
	return 0;
}

