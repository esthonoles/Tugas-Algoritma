#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;

int Q[MAX];
int pilih;
int leftt = -1;
int rightt = -1;


//fungsi untuk insert kiri
void insertkiri()
{
	int x;
	cout << "Masukkan Inputan Nilai : "; cin >> x;
	
	if ( (leftt == 0 && rightt == MAX -1) || leftt == rightt + 1)
		{
			cout << "Queue Bagian Kiri Penuh !!" <<endl;
			return ;
		}
			if (leftt == -1) //inisial queue kosong
				{
					leftt = 0;
					rightt = 0;
				}
			else 
				{
					if (leftt == 0)
						{
							leftt == MAX -1;
						}
					else
						{
							leftt = leftt -1;
						}
				}
				Q[leftt] = x;
}

//fungsi untuk insert kanan
void insertkanan()
{
	int x;
	cout <<"Masukkan Inputan Nilai :"; cin >> x;
	
	if ( (leftt == 0 && rightt == MAX -1) || (leftt == rightt + 1) )
		{
			cout << "Queue Bagian Kanan Penuh !! " <<endl;
			return ;
		} 
			if (leftt == -1 ) //inisial queue kosong
				{
					leftt = 0;
					rightt = 0;
				}
			else 
				{
					if (rightt == MAX -1 ) 
						{
							rightt = 0;
						}
					else 
						{
							rightt = rightt + 1;
						}
				}
				Q[rightt] = x;
}

//fungsi hapus kiri 
void deletekiri()
{
	if ( leftt == -1 )
		{
			cout << "Queue Kosong !!" <<endl;
			return;
		}
	cout << "' "<< Q[leftt] <<" ' Dihapus Dari Sebelah Kiri " <<endl;
	if (leftt == rightt)
		{
			leftt = -1;
			rightt = -1;
		}
	else
		{
			if (leftt == MAX -1)
				{
					leftt = 0;
				}
			else
				{
					leftt = leftt + 1;
				}
		}
}

//fungsi hapus kanan
void deletekanan()
{
	if (leftt == -1)
		{
			cout << "Queue Kosong !! " <<endl;
			return ;
		}
	cout << "' "<< Q[rightt] <<" ' Dihapus Dari Sebelah Kanan " <<endl;
	if (leftt == rightt)
		{
			leftt = -1;
			rightt = -1;
		}
	else 
		{
			if (rightt == 0)
				{
					rightt = MAX -1;
				}
			else 
				{
					rightt = rightt -1;
				}
		}
}

//fungsi untuk hasil 
void tampil()
{
	int front = leftt , rear = rightt;
	if (front == -1)
		{
			cout << "QUEUE KOSONG !!" <<endl;
			return;
		}
	cout << " --- The Elemen OF The Queue --- " <<endl;
	if ( front <= rear)
		{
			while (front <= rear)
				{
					cout << Q[front] << " ";
					front ++;
				}
		}
	else 
		{
			while (front <= MAX -1)
				{
					cout << Q[front] << " ";
					front ++;
				}
			front = 0;
			while (front <=rear)
				{
					cout << Q[front] << " ";
					front ++;
				}
		}
	cout <<endl;
}

int main ()
{
	do{
		system ("cls");
		cout << "    -- Program Double Ended Queue -- " <<endl;
		cout << "-------------------------------------- " <<endl;
		cout << "      * MENU DOUBLE ENDED QUEUE * " <<endl;
		cout << " 1. Insert Kiri " <<endl;
		cout << " 2. Insert Kanan " <<endl;
		cout << "    ------------ " <<endl;
		cout << " 3. Delete Kiri " <<endl;
		cout << " 4. Delete Kana " <<endl;
		cout << " 5. Cetak Queue " <<endl;
		cout << " 6. Exit Program " <<endl;
		cout << "--------------------------------------" <<endl;
		cout << " Masukkan Pilihan [1 - 6] : " ; cin >> pilih;
		
		switch ( pilih )
			{
				case 1 :
					cout <<endl;
					cout << " --- Insert Kiri ---" <<endl;
					insertkiri();
					getch();
				break;
				
				case 2 :
					cout <<endl;
					cout << " --- Insert Kanan ---" <<endl;
					insertkanan();
					getch();
				break;
				
				case 3 :
					deletekiri();
					getch();
				break;
				
				case 4 :
					deletekanan();
					getch();
				break;
				
				case 5 :
					tampil();
					getch();
				break;
				
				case 6 :
					cout << "Thank's For Using This Program :)"<<endl;
					exit;
					getch ();
				break;
				
				default :
					cout << "Kode yang Anda masukkan Salah !! " <<endl;
					getch ();
			}
		
	}while (pilih != 6);
}
