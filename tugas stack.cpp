#include <iostream>
#include <stdlib.h>// menggunakan system ("cls)
#include <conio.h> // menggunakan getch()
#define MAX 10 // batas stact yang ingin dibuat

using namespace std;
int top=-1, stack[MAX];
void push() // Fungsi untuk menambahkan data kedalam stack
{

	if (top == MAX-1)
	{
		cout << "Stack Sudah Penuh ! "<<endl;
	}	
	else
		{
			top++;
			cout << "Masukkan Data :";
			cin >> stack[top];
			cout <<"\n Pada Index Ke ' " << top << " ' \n";
			cout << " Data [ "<< stack[top]; cout << " ] Telah Ditambahkan !"<<endl;
		}
}

void pop() // fungsi untuk mengambil data dlam stack
{
	if (top == -1)
		{
			cout << "Stack Kosong ! " <<endl;
		}
	else 
		{
			cout << " \n Data [ " << stack[top] << " ] Pada Indek Ke ' " << top << " ' Dalam Stack Diambil ! "<<endl;
			stack[top--];
		}
}

int clear() // fungsi clear
{
	return top = -1;
}

void print ()
{
	if (top == -1)
		{
			cout << "            Stack :" <<endl;
			cout << " ========================="<<endl;
			cout << "            Empety !!" <<endl;
			cout << " ========================="<<endl;
		}
	else 
		{
			cout << "            Stack :" <<endl;
			cout << " ========================="<<endl;
			
			for (int i = top ; i>= 0; i--)
				{
					cout << "   XXXXX [ "<< stack[i] ; cout << " ] XXXXX" <<endl;;
				}
				cout << " ========================="<<endl;
		}
}

int main()
{
	int pilih;
	do {
		print();
		cout<<endl<<endl;
		cout << "1. Push (Input)" <<endl;
		cout << "2. Pop  (Hapus)" <<endl;
		cout << "3. Clear Stack " <<endl;
		cout << "4. Keluar " <<endl;
		cout <<"Pilih [1 - 4] : ";
		cin >>pilih;
		
			switch (pilih)
			{
				case 1:
					push();
					getch ();
				break;
				
				case 2:
					pop();
					getch();
				break;
					
				case 3:
					clear();
					cout <<"Data Stack Berhasil Dibersihkan !!"<<endl;
					getch();
				break;
				
				case 4:
					cout << "Thank's For Using This Program :)"<<endl;
					getch();
				break;
				
				default :
					cout << "Kode Yang Dipilih Tidak Ada !!"<<endl;
					getch();
				break;
			}
		system("cls"); // untuk membersihkan screen
	}
		while (pilih !=4);
}
