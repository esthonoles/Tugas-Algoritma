#include <iostream>
#include <conio.h>
using namespace std;

	struct mhs{
		char nim[5];
		char nama[20];
		int mt1;
		int mt2;
		int mt3;
		int ipk;
		}mahasiswa[6];
		
int main(){
	//int mt1,mt2,mt3,ipk,ket;
	int i,l;
	
		cout<<"Masukkan Jumlah Mahasiswa : ";cin>>l;cout<<endl;
	
		for(i=1;i<=l;i++){
	cout<<"-------------------------------"<<endl;
	cout<<"Masukkan Data Mahasiswa ke  :";cout<<i<<endl;
	cout<<"NIM            :";cin>>mahasiswa[i].nim;
	cout<<"Nama Mahasiswa :";cin>>mahasiswa[i].nama;
	cout<<"Mata Kuliah 1  :";cin>>mahasiswa[i].mt1;
	cout<<"Mata Kuliah 2  :";cin>>mahasiswa[i].mt2;
	cout<<"Mata kuliah 3  :";cin>>mahasiswa[i].mt3;
	mahasiswa[i].ipk=(mahasiswa[i].mt1+mahasiswa[i].mt2+mahasiswa[i].mt3)/3;
	cout<<"IPK            :";cout<<mahasiswa[i].ipk<<endl;
	
	getch();
}
system("cls");
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<"                      PROGRAM HITUNG NILAI MAHASISWA "<<endl<<endl;
	cout<<"                         UNIVERSITAS PAMULANG   "<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl<<endl<<endl;
	
	cout<<"---------------------------------------------------------------------------------"<<endl;
	cout<<"|| NO   NIM      NAMA    ||             NILA              || IPK  KETERANGAN   ||"<<endl;
	cout<<"||             MAHASISWA ||  MATKUL 1  MATKUL 2  MATKUL 3 ||                   ||"<<endl;
	cout<<"---------------------------------------------------------------------------------"<<endl<<endl;
	
 	for(i=1;i<=l;i++){
    cout<<i;cout<<".";    
    cout<<"\t";cout<<mahasiswa[i].nim;
    cout<<"\t";cout<<mahasiswa[i].nama;
    cout<<"\t\t";cout<<mahasiswa[i].mt1;
    cout<<"\t";cout<<mahasiswa[i].mt2;
    cout<<"\t";cout<<mahasiswa[i].mt3;
    cout<<"\t";cout<<mahasiswa[i].ipk;
    	if(mahasiswa[i].ipk>=70 && mahasiswa[i].ipk <=100){
    		cout<<"\tLULUS"<<endl;
		}
	else if(mahasiswa[i].ipk<70){
		cout<<"\tTIDAK LULUS"<<endl;
	}
    
    
	}

}
