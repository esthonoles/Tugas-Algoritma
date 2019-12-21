#include <iostream>
#include <conio.h> //menggunakan fungsi getch
#include <stdlib.h> //menggunakan system("cls")
#define MAX 10 //maksimal nomor antrian
using namespace std;

int nomer [MAX] ;
int head = -1 ;
int tail = -1 ;


//fungsi untuk menunjukkan jika tail = - 1
//isempty (): untuk mengecek apakah antrian kosong atau tidak, jika tail = -1 maka antrian itu kosong.
bool IsEmpety ()
{
	if (tail == -1 )
		{
			return true;
			
		}
	else 
		{
			cout << "Silahkan Dipanggil !!" <<endl;
			return false;
		}
}

//fungsi untuk menunjukkan jika tail = max-1
//isfull (): Untuk mengecek antrian apakah penuh, jika tail = max-1 maka antrian penuh. sama dengan max=10
bool IsFull ()
{
	if (tail == MAX-1)
		{
			return true ;
		}
	else {
			return false;		
		}
}

void antrianmasuk (int no)
{
	if (IsEmpety())
		{
			head = tail = 0;
		} 
	else 
		{
			tail ++;
		}
	nomer [tail]=no;
}

void ambilantrian()
{
	if (IsEmpety())
		{
			cout << "Antrian Sudah Kosong !! " <<endl;
			getch;
		}
	else 
		{
			for (int a = head; a<tail ; a++)
				{
					nomer [a] = nomer [a+1];
				}
			tail --;
				if (tail == -1)
					{
						head = -1 ;
					}
		}
}

void tampil ()
{
	if(IsEmpety())
		{
			cout << " ** Antrian Kosong ! ** " <<endl;
		}
	else 
		{
			system("cls");
				for (int a = head; a <= tail; a++)
					{
						cout << "======================================" <<endl;
						cout << "No. Antrian : [ " << nomer[a] <<" ]" <<endl;
						cout << "======================================" <<endl;
					}
		}
}

void hapus()
{
	head = tail = -1;
}

int main()
{
	int pilih, p=1, urut; //deklarasi untuk pilih user dan  nomer urut antrian
	do{
		system ("cls");
		cout << " -- DAFTAR LIST ANTRIAN --" <<endl;
		tampil();
		cout <<endl <<endl;
		cout << "   -- Program Antrian C++ --" <<endl;
		cout << "******************************" <<endl;
		cout << "| 1. Tambah Antrian           |"<<endl;
		cout << "| 2. Panggil Antrian          |"<<endl;
		cout << "| 3. Format Antrian           |"<<endl;
		cout << "| 4. Exit Program             |"<<endl;
		cout << "*******************************"<<endl;
		cout << "PILIH [1 - 4] : "; cin >>pilih;
		switch (pilih)
			{
				case 1:
					if(IsFull())
						{
							cout << "Antrian Penuh, Silahkan Pulang :') " <<endl;
							
						}
					else 
						{
							urut = p;
							antrianmasuk(urut);
							cout << "----------------------------------" <<endl;
							cout << "     ** Nomer Antrian Anda  **      " <<endl;
							cout << "         " <<p<< "            " <<endl;
							cout << "----------------------------------" <<endl;
							cout << "      !! Antrinya yang Sabar !! " <<endl;
							cout << "Menunggu ( " <<tail <<" ) Antrian  "<<endl;
							p++;
						}
					getch ();
				break;
				
				case 2:
					cout << "-------------------------" <<endl;
					cout << "No. Antri : [ "<<nomer[head] <<" ]" <<endl;
					cout << "-------------------------"<<endl;
					ambilantrian();
					getch ();
				break;
				
				case 3:
					hapus();
					cout << "Antrian Dikosongkan !!"<<endl;
					getch ();
				break;
				
				case 4:
					cout << "Thank's For Using This Program :)"<<endl;
					exit;
					getch ();
				break;
				
				default:
					cout << "Kode Yang Dipilih Tidak Ada !!"<<endl;
					getch();
				break;
			}
		
		
		
		
	} while (pilih != 4);
}

