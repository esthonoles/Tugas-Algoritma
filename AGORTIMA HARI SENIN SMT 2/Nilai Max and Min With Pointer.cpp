#include <iostream>
using namespace std;
main(){
	int *ptr;
	int data[7]={70, 80, 100, 45, 75, 40, 90};
	int elemen, max, min;
	ptr=&data[0];
	max=*ptr;
	min=*ptr;
	
	for (elemen=0; elemen<7; elemen++){
	
		cout<<"isi indek ke ["<<elemen<<"]="<<data[elemen]<<""<<endl;
	}
	
	for (elemen=0; elemen<7; elemen++)
	{
		
		if (*(ptr+elemen)>max)   max=*(ptr+elemen);
		 
		else if (*(ptr+elemen)<min) min=*(ptr+elemen);
	}
	cout<<"---------------------"<<endl;
	cout<<"Nilai Maksimum :"<<max<<endl;
	cout<<"Nilai Minimum  :"<<min;
}
