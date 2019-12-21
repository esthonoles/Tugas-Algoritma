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
simpul* top;
simpul* p;
simpul* q;
simpul* del;

void init()
{
	top = NULL;
}

int isEmpty()
{
	if(top == NULL)
		return 1;
		else
		return 0;
}

void push(data_info dt)// push stack
{
	p = (simpul*) malloc (sizeof (simpul));
	p -> data = dt;
	p -> next = top;
	top = p;	
}

void pop ()
{
	simpul bantu;
	if (isEmpty()==0)
		{
			bantu.data = top -> data ;
			cout <<endl;
			cout << " --- Data Yang dihapus Adalah !! --- " <<endl;
			cout << " ( "<< bantu.data.nim << " / " <<bantu.data.nama << " / " <<bantu.data.gender << " / " <<bantu.data.nilai << " ) " <<endl;
			del = top;
			top = top -> next;
			free (del);
		}
	else 
		{
			cout <<endl;
			cout << " Stack Kosong !!, Penghapusan Tidak Bisa Dilakukan " <<endl;
		}
}


void print()
{
	q = top;
	
	if (isEmpty () == 0)
		{
			cout <<endl;
			cout << " Data Dalam Stack : " <<endl;
			cout << " ------------------ " <<endl;
			while ( q != NULL )
				{
					cout << " ( " << q -> data.nim << " / " << q -> data.nama << " / " << q -> data.gender << " / " << q -> data.nilai << " ) " <<endl <<endl;
					q = q -> next;
				}			
		}
	else 
	{
		cout << endl;
		cout << " Data Stack Kosong !! " <<endl;
		cout <<      " ????????? " <<endl;
	}
}


int main()
{
	char pilih;
	simpul tmp;
	init();
	
	do{
		system ("cls");
		cout <<endl;
		cout << " STACK MENGGUNAKAN LINKED LIST " <<endl;
		cout << "------------------------------ " <<endl;
		cout << " MENU :  1. Push Data " <<endl;
		cout << "         2. Pop Data " <<endl;
		cout << "         3. Print Data " <<endl;
		cout << "         4. Exit Program " <<endl;
		cout << " ----------------------------- " <<endl;
		cout << " Pilih Menu : [ 1 - 4 ]  -> : "; cin >> pilih;
		
		switch (pilih)
		{
			case '1':
				cout << " Masukkan NIM    : "; cin >> tmp.data.nim;
				cout << " Masukkan Nama   : "; cin >> tmp.data.nama;
				cout << " Masukkan Gender : "; cin >> tmp.data.gender;
				cout << " Masukkan Nilai  : "; cin >> tmp.data.nilai;
				
				push (tmp.data);
				getch ();
			break;
			
			case '2':
				pop();
				getch ();
			break;
			
			case '3':
				print ();
				getch ();
			break;
			
			case '4':
				exit (0);
				getch ();
			break;
			
			default :
				cout <<endl;
				cout << " <-- Kode Salah !!, Pilihan Tidak Ada -->"<<endl;
			break;
		}
		
	}while (pilih !=4 );
		return (0);
}

