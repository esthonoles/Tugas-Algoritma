#include <iostream>
#include <conio.h>
#define n 5
using namespace std;

int front, rear, counter;

int x, Q[n];

//inisialisasi awal 
void awal ()
{
	front = 0;
	rear = -1;
	counter = 0;
}

//fungsi untuk insert 
void insert ()
{
	if (counter < n)
		{
			cout << "Masukkan Nilai Inputan : "; cin >> x;
			rear = ( rear + 1 ) % n;
			Q[rear] = x;
			counter ++;
		} 
	else 
		{
			cout << "Antrian Penuh !! " <<endl;
		}
}

//fungsi untuk hapus 
void deleted()
{
	if (counter > 0)
	{
		x = Q[front];
		front = (front +1) % n; // perintah hapus
		counter --;
		cout << "[ "<< x << " ] Berhasil Dihapus "<<endl;
	}
	else 
		{
			cout << "Antrian Kosong !! " <<endl;
		}
}

//fungsi untuk menampilkan queue 
void output()
{
	if (counter > 0)
	{
		for (int a = 1; a <= counter ; a++)
			{
				int i = (front + a) % n;
				cout << "Antrian [ " << a << " ] = " <<Q[i] ; cout <<endl;
			}
	
	}
	else 
		{
			cout << "Queue Kosong !! " <<endl;
		}
}

int main ()
{
	int pilih;
	awal();
	
	do {
		system ("cls");
		cout << "------------------------------" <<endl;
		cout << " -- PROGRAM CIRCULAR QUEUE -- " <<endl;
		cout << "------------------------------" <<endl;
		cout << " 1. Insert Queue " <<endl;
		cout << " 2. Delete Queue " <<endl;
		cout << " 3. Print__Queue " <<endl;
		cout << " 4. Exit Program " <<endl;
		cout << "------------------------------" <<endl;
		cout << " Insert Menu [ 1 - 4 ] : " ; cin >> pilih;
		
		switch (pilih){
			case 1 :
				cout <<endl;
				cout << " -- Insert Queue -- " <<endl;
				insert ();
				getch ();
			break;
			
			case 2 :
				cout <<endl;
				cout << " -- Hapus Queue -- " <<endl;
				deleted ();
				getch ();
			break;
			
			case 3 :
				cout <<endl;
				cout << " -- Output Queue Circular -- " <<endl;
				output ();
				getch ();
			break;
			
			case 4 :
				cout << endl;
				cout << "         -- Exit Program --" <<endl;
				cout << " Thank's For using ower Program " <<endl;
				exit;
				getch ();
			break;
			
			default :
				cout <<endl;
				cout << " Pilihan Tidak Ada .... " <<endl;
				getch ();
			break;
		}
		
	}while (pilih != 4);
	return 0;
}
