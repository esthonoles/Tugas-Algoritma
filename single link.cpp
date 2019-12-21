#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct data_info
{
	char nama [20];
	char nim 	[12];
	char gender [5];
	int nilai;

};

struct simpul
{
		data_info data;
		simpul* next;
};
simpul* first;
simpul* last;
simpul* p;
simpul* del;
simpul* q;

void init()
{
	first = NULL;
	last = NULL;
}

void insert (data_info dt)
{
	p = (simpul*) malloc (sizeof (simpul)); // buat simpul baru
	p -> data = dt;
	p -> next = NULL;
		
		if (first == NULL)
			{
				first = p;
				last = p;
			}
		else 
			{
				last -> next = p;
				last = p;
			}
}

void hapus()
{
	simpul simpan;
	if(first == NULL)
		{
			cout << " Link List Kosong !!, Penghapusan Tidak Bisa Dilakukan " <<endl;
		}
	else 
		{
			simpan.data	= first -> data;
			cout << " Data Yang Di Hapus Adalah !! : "<<endl;
			cout << " ( "<< simpan.data.nim << " / " << simpan.data.nama << " / " << simpan.data.gender << " / " << simpan.data.nilai << " ) " <<endl;
			
			del = first;
			first = first -> next;
			free (del);
		}
}

void cetak ()
{
	q = first;
	if (first == NULL)
		{
			cout << " Link List Kosong !! " <<endl;
		}
	else 
		{
			cout << "Data Dalam Link List : " <<endl;
			while(q != NULL)
				{
					cout << " ( " << q -> data.nim << " / " << q -> data.nama << " / " << q -> data.gender << " / " << q -> data.nilai << " )" <<endl;
					cout << "          ||      " <<endl;
					q = q -> next;
				}
				
			cout << "         [ NULL ]";
			cout << endl;
		}
		
}

int main()
{
	char pilih;
	simpul tmp;
	init();
	
	do{
		fflush (stdin);
		system ("cls");
		cout << " SINGLE LINK LIST NON CIRCULAR " <<endl;
		cout << " -----------------------------" <<endl;
		cout << " Menu : " <<endl;
		cout << "        1. Insert Data " <<endl;
		cout << "        2. Delete Data " <<endl;
		cout << "        3. Cetak Data " <<endl;
		cout << "        4. Exit Program " <<endl;
		cout << " ----------------------------" <<endl;
		cout << " Pilih Menu : [ 1 - 4 ] " ; cin >> pilih;
		
		switch (pilih)
		{
			case '1':
				cout << " Masukkan NIM    : "; cin >> tmp.data.nim;
				cout << " Masukkan Nama   : "; cin >> tmp.data.nama;
				cout << " Masukkan Gender : "; cin >> tmp.data.gender;
				cout << " Masukkan Nilai  : "; cin >> tmp.data.nilai;
				
				insert (tmp.data);
				getch ();
			break;
			
			case '2' :
				hapus();
				getch ();
			break;
			
			case '3' :
				cetak();
				getch ();
			break;
			
			case '4' :
				exit (0);
			break;
			
			default :
				cout <<endl;
				cout << " <-- Kode Salah !!, Pilihan Tidak Ada -->"<<endl;
			break ;
		}
			
	}while (pilih != 4);
		return (0);
		
}
