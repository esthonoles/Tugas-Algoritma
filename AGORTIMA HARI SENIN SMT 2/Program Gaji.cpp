#include <iostream>
using namespace std;
 
 int main(){
 	int jamkerja, honorharian, honor, lembur, gaji, jamlembur;
 	cout<<"Masukkan Jumlah Jam Kerja :";
 	cin>>jamkerja;
 	cout<<"Masukkan Honor Harian :";cin>>honorharian;
 	
 	//	lembur=(jamkerja-40)+5000;
	 	if(jamkerja < 40){
	 		honor=jamkerja*honorharian;
	 		
		 }
		else {
			honor=jamkerja*honorharian+100000;
			jamlembur=jamkerja-40;
			lembur=(jamkerja-40)*5000;
		}
	gaji=honor+lembur;
	cout<<"\njumlah jam kerja  :";cout<<jamkerja;cout<<"\tHonor Harian Rp.";cout<<honorharian<<endl;
	cout<<"\njumlah jam lembur :";cout<<jamlembur<<endl;
	
 	cout<<"Uang Lembur        Rp.";cout<<lembur<<endl;
	cout<<"Honor Anda         Rp.";cout<<honor<<endl;
	cout<<"-------------------------------+"<<endl;
 	cout<<"Gaji yang diterima Rp.";cout<<gaji<<endl;
 	
 }
