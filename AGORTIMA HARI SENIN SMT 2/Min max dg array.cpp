#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout<<"-- Menampilkan Nilai Maksimal Dan Minimal Menggunakan Array --"<<endl<<endl;
	int i, min, max;	
	int B[7]= {7,4,8,5,7,8,9};
	min=B[0], max=B[0];
	for (i=0; i<7 ; i++)
		{
			cout<<B[i]<<"  ";
		}
	
		for (i=0; i<7 ; i++)
			{
				if (B[i]>max)
					{
						max=B[i];
					}
				if (B[i]<min)
					{
						min=B[i];
					}
			}
		cout<<endl<<endl;
		cout<<"Nilai Maksimum : "<<max<<endl;
		cout<<"Nilai Minimal  : "<<min<<endl;
	getch();
}
