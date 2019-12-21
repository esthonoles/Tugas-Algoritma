#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

struct simpul
{
    char nama [20];
	char nim 	[12];
	char gender [5];
	int nilai;

    simpul* next;
}mhs, *front = NULL, *rear = NULL, *baru;

simpul* bantu;

void simpulbaru()
{
    baru = (simpul*) malloc (sizeof(struct simpul));
    cout << " Masukkan NIM    : "; cin >> baru->nim;
    cout << " Masukkan Nama   : "; cin >> baru->nama;
    cout << " Masukkan Gender : "; cin >> baru->gender;
    cout << " Masukkan Nilai  : "; cin >> baru->nilai;
    baru->next = NULL;
}

void inputdata()
{
    simpulbaru();
        if ( front == NULL )
            {
                front = rear = baru;
            }
                else
                    {
                        rear->next = baru;
                        rear = baru;
                    }

}

void hapus()
{
    bantu = front;
        if (front == NULL )
            {
                cout << " Queue Kosong !!" <<endl;
            }
                else if (bantu->next != NULL)
                    {
                        bantu = bantu->next;
                        bantu = front->next;
                        cout << endl;
                        cout << " --- Data Yang Dihapus Adalah --- " << endl;
                        cout << front->nim << " | ";
                        cout << front->nama << " | ";
                        cout << front->gender << " | ";
                        cout << front->nilai;
                        cout << " ->> Berhasil Dihapus " <<endl;
                        free(front);
                        front = bantu;
                    }
                        else
                            {
                                cout << endl;
                                cout << " --- Data Yang Dihapus Adalah --- " << endl;
                                cout << bantu->nim << " | ";
                                cout << bantu->nama << " | ";
                                cout << bantu->gender << " | ";
                                cout << bantu->nilai;
                                cout << " ->> Berhasil Dihapus " <<endl;
                                free (front);
                                front = NULL;
                                rear = NULL;

                            }

}

void cetak()
{
    bantu = front;
    if ((front == NULL ) && (rear == NULL))
    {
        cout << " Queue Kosong !! " <<endl;
        return;
    }
    else
    {

        cout.flags(ios::left);
        cout << setw (10) << " NIM      NAMA     GENDER     NILAI " <<endl;
        cout << "----------------------------------------" <<endl;
        while ( bantu != NULL )
        {
            cout <<setiosflags(ios::left)<<setw(10)<< bantu ->nim;
            cout <<setiosflags(ios::left)<<setw(10)<< bantu ->nama;
            cout <<setiosflags(ios::left)<<setw(10)<< bantu ->gender;
            cout <<setiosflags(ios::left)<<setw(10)<< bantu ->nilai <<endl;
            bantu = bantu -> next;
        }
    }
}

int main()
{
    char pilih;

    do{
        system ("cls");
        cout << endl <<endl;
        cout << " --- PROGRAM QUEUE USING LINK LIST --- " <<endl;
        cout << "---------------------------------------" <<endl <<endl;
        cout << " MENU : 1. Tambah Data " <<endl;
        cout << "        2. Hapus Data " <<endl;
        cout << "        3. Cetak Data " <<endl;
        cout << "        4. Exit Program " <<endl;
        cout << "---------------------------------------" <<endl;
        cout << " Pilih Menu [1 - 4 ] : "; cin >> pilih;

        switch (pilih)
            {
                case '1':
                    cout <<endl;
                    inputdata();
                    getch();
                break;

                case '2':
                    cout << " -- Hapus Data -- " <<endl;
                    hapus();
                    getch();
                break;

                case '3':
                    cout << endl;
                    cout << " -- List Data Queue -- " <<endl;
                    cetak();
                    getch();
                break;

                case '4':
                    cout <<endl;
                    cout << " Exit Program..... "<<endl;
                    exit(0);
                    getch();
                break;

                default:
                cout <<endl;
                cout << " Menu Yang Anda Pilih Salah !! " <<endl;
                getch();
            }
    }while (pilih !=4 );
    return(0);

}
