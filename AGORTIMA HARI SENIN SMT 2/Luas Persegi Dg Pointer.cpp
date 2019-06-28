#include <iostream>
using namespace std;

int main()
{
	int panjang, lebar,luas;
	int *ptr,*p,*l;
	p=&panjang;
	l = &lebar;
	ptr = &luas;

	cout<<"Masukkan Panjang :";
	cin >>panjang;cout<<endl;
	cout<<"Masukkan Lebar :";cin>>lebar;cout<<endl;
	luas=(*p)*(*l);
	cout<<"Luas Persegi Panjang :"<<*ptr;
	
	
}
