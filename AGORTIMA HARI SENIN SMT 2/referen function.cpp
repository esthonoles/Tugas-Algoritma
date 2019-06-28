#include <iostream>
using namespace std;
int main(){
	int a=5;
	
	cout<< " addres dari a :"<<&a<<endl;
	cout<< " Nilad dari  a :"<<a<<endl<<endl;
	
	//reference
	int &b=a;
	cout<<" Niladi dari b :"<<b<<endl;
	cout<<" Addres dari b :"<<&b<<endl<<endl;
	
	b=10;
	cout<< " Nilai dari a :"<<a<<endl;
	cout<< " Nilai dari b :"<<b<<endl<<endl;
	
	b=30;
	cout<< " Nilai dari a :"<<a<<endl;
	cout<< " Nilai dari b :"<<b<<endl<<endl;
}
