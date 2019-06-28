#include <iostream>
using namespace std;

void fungsi (int &b){
	//b=10;
	cout << "addres b "<< &b <<endl;
	cout << " nilai b "<< b <<endl<<endl;
}

int main()
{
	int a=5;
	cout << "addres a "<< &a <<endl;
	cout << " nilai a "<< a <<endl<<endl;
	
	int &b =a;
	cout << "addres a "<< &b <<endl;
	cout << " nilai a "<< b <<endl<<endl;
	
	fungsi(a);
	cout << " nilai a"<< a <<endl;
	int a=sizeof;
	return 0;
}
