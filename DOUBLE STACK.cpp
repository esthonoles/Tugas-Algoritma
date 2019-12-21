#include <iostream>
#include <stdio.h>
#include <conio.h>  // menggunakan getch ()
#define MAX 10 // batas stack yang ingin dibuat
#define false 0 
#define true 1
using namespace std;
char stack[MAX];
int top1, top2;

void init()
{
	top1= 0;
	top2= MAX+1;
}

// cek data stack penuh
int full (void)
{
	if (top1 + 1 >= top2 )
		{
			return true;
		}
	else
		{
			return false;
		}
	
}

//cek data stack kosong
int empety(int nomorstack)
{
	switch (nomorstack)
		{
			case 1:
				if (top1==0)
					{
						return true;
					}
				else 
					{
						return false;
					}
			break;
			
			case 2:
				if (top2 == MAX+1)
					{
						return true;						
					} 
				else 
					{
						return false;
					}
			break;
				
		}
}

void push (char data, int nomorstack) // untuk perintah push (mengisi stack)
{
		if (!full())
			{
				switch(nomorstack)
					{
						case 1 :
							top1++;
							stack [top1] = data;
						break;
						
						case 2 :
							top2--;
							stack [top2] = data;
						break ;
						
						default :
							cout << "Nomor Stack Salah !!" <<endl;
						break;
					}
			}
		else
		{
			cout << "Stack Penuh !! "<<endl;
			getch();
		}
}

char pop (int nomorstack)
{
	char data;
		if (empety(nomorstack)!= true)
			{
				switch (nomorstack)
					{
						case 1:
							if (data = stack [top1])
							{
								top1--;
								cout <<"Data yang diambil '' " <<data <<" ''"<<endl;
								return data;
							}
								else {cout <<"Stack Masih Kosong !! "<<endl;}
						break;
						
						case 2:
							if (data = stack [top2])
							{
								top2 ++;
								cout <<"Data yang diambil '' " <<data <<" ''"<<endl;
								return data;	
							}
							else {cout <<"Stack Masih Kosong !! "<<endl;}
							
							getch();
						break;
						
						default :
							cout << "Nomor Stack SAlah !! " <<endl;
							getch();
						break;
					}
			}
		else 
			{
				cout << "Stack Masih Kosong :')" <<endl;
				getch ();
				return 0;
			}
}

void clear(	int nomorstack)
{
	switch (nomorstack)
		{
			case 1 : 
				top1=0;
			break;
			
			case 2 :
				top2=MAX+1;
			break;
			
			default :
				cout << "Nomor Stack Salah !!" <<endl;
		}
}

void baca()
{

	int i;	
	cout << "Data Stack 1 ( Pertama )" <<endl;
	for (i=1 ; i<=top1 ; i++)
		{
			cout << stack[i] <<" , ";
		}
	cout <<endl <<endl;
	cout << "Data Stack 2 ( kedua )" <<endl;
	for (i=MAX; i>=top2; i--)
		{
			cout <<stack[i] <<" , ";
		}
	
		
}


int main ()
{
	char data;
	int pilih, nomorstack;
	init();
		do {
			cout << "________________________________________________" <<endl;
			cout << "|PROGRAM DOUBLE STACK '' TUGAS STRUKTUR DATA '' |" <<endl;
			cout << "|    NAMA :ABD WAHID      NIM : 181011401863    |" <<endl;
			cout << " ==============================================="  <<endl <<endl;;
			cout << " ---- Isi Stacknya Disini ----"<<endl;
			baca();
			cout <<endl;
			cout << "=============================="<<endl;
			cout << "1. PUSH [isi stack] " <<endl;
			cout << "2. POP  [Ambil stack]" <<endl;
			cout << "3. CLEAR[Delete Data]" <<endl;
			cout << "4. EXIT PROGRAM !!" <<endl;
			cout << "Pilih Menu [1-4] : "; cin>>pilih;
				switch (pilih)
					{
						case 1 :
							cout <<endl;
							cout <<" -- PUSH -- " <<endl;
							cout <<"Pilih Stack [stack 1 / stack 2] ?? : " ;
							cin >> nomorstack;
							cout <<"Masukkan Data : "; cin >> data;
							push(data,nomorstack);
							
						break; 
						
						case 2 :
							cout <<endl;
							cout <<" -- POP -- "<<endl;
							cout <<"Data Stack yang akan di ambil [stack 1 / stack 2] : "; 
							cin >>nomorstack;
							pop(nomorstack);
							getch()	;
						break ;
						
						case 3 :
							cout <<endl;
							cout <<" -- Bersih Data Stack !! -- " <<endl;
							cout <<"Pilih Stack yang akan dikosongkan "<<endl;
							cout <<"    [stack 1 / stack 2] : "; cin>>nomorstack;
							clear(nomorstack);
							getch()	;
						break;
					
						case 4 :
							cout <<"EXIT BREEE,,,, !!"<<endl;
							cout <<"Thank's For Using Our Program !!"<<endl;
						break ;
						
						default :
							cout <<"Pilihan yang anda masukkan salah !! "<<endl;
							getch()	;
						break ;
					}
			system("cls");
			} while (pilih!=4);
			
}
