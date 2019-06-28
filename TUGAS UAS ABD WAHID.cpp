#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define size 12 //array 8_1
#pragma GCC diagnostic ignored "-Wwrite-strings" //fix warning [Wwrite-string] !!
using namespace std;
//fungsi lat13_2 searching start
int binary_search(int [ ], int, int);
	int binary_search(int array13[ ], int array_size13, int element)
				{
		 int start=0;
		 int end=array_size13-1;
		 int middle;
		 int position=-1;
		 middle=( start+ end)/2;
		 do
			 {
				 if(element <array13 [middle])
				 end= middle-1;
				 else if(element >array13 [middle])
				  start=middle+1;
				 middle=( start+end)/2;
			 }
				 while(start<=end && array13 [middle]!=element);
					 if(array13 [middle]==element)
					 position=middle;
					 return position;
}
//fungsi lat13_2 searching end
//-----------------------
//fungsi lat13_1 Searching start
int linear_search (int[], int, int);
		int linear_search(int array[], int array_size, int element)
	 		{
	 			int flag = -1;
	 				for (int count = 0; count < array_size; count++)
	 					{
	 						if (element == array [count])
	 							{
	 								flag = count;
	 								break;
								 }
						 }
					return flag;	 
			 }
//fungsi lat13_1 searching end
//-------------------------------

// fungsi tugas akhir sorting start
void SwapMembersa (int itemsa [], int indexa1, int indexa2)
	{
		int tempa;
		tempa = itemsa [indexa1];
		itemsa[indexa1] = itemsa [indexa2];
		itemsa [indexa2] = tempa;
	}
//fungsi tugas akhri sorting end
//------------------------------

//fungsi latihan 12_3 starat
void SwapMembers (int items [], int index1, int index2)
	{
		int temp;
		temp = items [index1];
		items[index1] = items [index2];
		items [index2] = temp;
	}
//fungsi latihan 12_3 end
//----------------------------

//struct tugas akhir start
struct employe{
	char nama[30];
	int gaji;
	int anak;
}employe[4];
//struct tugas akhir end
//-----------------------
//struct 11_4 start
	struct siswa{
		char nama[30];
		char alamat[50];
		char jk[10];
		char telp[12];
	
	}datasiswa[4];
//struct 11_4 end
//-------------
// struct 11_3 start
struct employee_str
{
	char name[25];
	int idnum;
};
//struct 11_3 end
//-------------
//struct 11_2 start
struct s1
{
	char *s;
	int i;
	struct s1 *slp;
};

//struct 11_2 end

//struct 11_1 start
struct movies_t
{
	char title[60];
	int year;
} mine, yours;
//struct 11_1 end

//tugas akhir pointer start
int H(const char*s)
	{

		int x = 0;
		for (;*s!='\0';s++)
		++x;
		return x;
	}
//tugas akhir pointer end
//----------------------
//fungsi pointer 10_7 start
void duplicate (int &a, int &b, int &c)
	{
		a*=2;
		b*=2;
		c*=2;
	}
//fungsi pointer 10_7 endl
//------------------------

//fungsi string 9_7 start
char * entry, letter, choice [2];
int ascii, len, binary [8], total;
		void prog()
	{
		entry = new char [501];
		cin.ignore();
		cout<<" Masukkan Kalimatyang ingin dikonversi (Sampe 500 Huruf) : ";
		cin.getline(entry,500);
		len=strlen (entry);
		
		for (int i=0; i<len; i++)
		{
			total = 0;
			letter = entry[i];
			ascii=letter;
			while (ascii>0)
				{
				if ((ascii % 2)==0)
					{
						binary [total]=0;
						ascii = ascii/2;
						total++;	
					}
				else
					{
						binary [total]=1;
						ascii = ascii/2;
						total++;
					}
				}
			total--;
			while (total>=0)
			{
				cout << binary[total];
				total--;
			}
				
		}
		delete []entry;
		cout<<endl<<"Akan diulangi lagi (1=ya, 2=tidak) ? :";
		cin.getline(choice,3);
		if (choice [0]=='1')
		{
			prog();
		}
		else 
		{
			cout<<"-- Program Selesai --";
		}	
	}
//fungsi string 9_7 end

//--------------------
//fungsi lat 7_1 start
int factorial (int nf)
	{
		if(nf == 1)
			{
				return(1);
			}
		else
			{
				return (nf*factorial (nf-1));
			}
	}
//fungsi lat 7_1 end
//---------------------------
//fungsi lat 7_2 start
int findmax(int n1, int n2)
	{
		if (n1>n2)
		{
			return n1;
		}
			else
			{
				return n2;
			}	
	}
	
	 void printmax (int m)
	 {
	 	cout<<"  ------Tugas Latihan 7_2 FUNGSI-----"<<endl;
		cout<<"   Contoh Program Implimintasi Fungsi"<<endl;
		cout<<"-------------------------------------------"<<endl;
	 	cout<<"Bilangan Terbesar Adalah :"<<m<<endl;;
	 }

//fungsi lat 7_2 end
//---------------------------

//fungsi lat 7_3 start
	void tukar (int px, int py)
		{
			int z;
			z=px;
			px=py;
			py=z;
			cout<<"Nilai Diakhri fungsi :"<<endl;
			cout<<"Nilai Px = "<<px<<" Nilai Py = "<<py<<endl<<endl;
		}
//fungsi lat 7_3 end
//---------------------

//fungsi lat 7_3 start
	long fibonacci (long n)
		{
			if (n==1 || n==2)
				{
					return 1;
				}
			else
				{
					return fibonacci (n-1)+ fibonacci(n-2);
				}
		}
//fungsi lat 7_3 end
//-------------------

//fungsi lat 7_4 start
	int mult(int xk, int yk,int zk)
			{
				return xk*yk*zk;
			}
//fungsi lat 7_4 end
//------------------

//tugas akhir fungsi start
		void ganjil (int ganjil)
			{
				    if(ganjil%2!=0)
				{
				    cout<<ganjil<<" ";
				}
			}
		void genap (int genap)
			{
				    if(genap%2==0)
				{
				    cout<<genap<<" ";
				}
			}
//tugas akhir fungsi end
//---------------------------

//tugas latihan 8_3 array start
	void printarray (int a[][3])
		{
			int i, j;
				for (i=0; i<=1; i++)
					{
						for (j=0; j<=2; j++)
							cout<<a[i][j]<<" ";
							cout<<endl;
					}
		}
//tugas latihan 8_3 array end
//------------------------

// fungsi sorting lat12_2 start
int sort_function(const void *a, const void *b)
	{
		return (strcmp ((char*)a,(char*)b));
	}
// fungsi sorting lat12_2 end
//fungsi struct lat 11_1 start
void printfmovie (movies_t movie)
{
	cout<<movie.title;
	cout<<" ( "<<movie.year<<" )"<<endl;
}
//fungsi struct lat 11_1 end
//----------------------------

int main()
{
	const int array_size13=10;//saarch 13
	int array13[array_size13]={0, 6, 9, 12, 20, 23, 29, 32, 47, 79 };//saarch 13
	 	
	int a [size] = {1,3,5,4,7,2,99,16,45,67,89,45}; //array 8_1
	
	static struct s1 ax[]=
		{
			{"abcdef",1, ax+1},
			{"ghijkl",2, ax+2},
			{"mnopqr",3, ax}
		};
	struct s1 *p=ax;
	//variabel tugas akhir string start
			char spasi [5]={" "}, string1[20]={"NAMA"}, string2[10]={"HOBI"};
			char nama[20], hobi[20];
	//variabel tugas akhir string end
	
	//----------------------------
	
	//variabel string 9_6 strcat start
	char destination [25];
	char blank [10]={" "},ca[10]= {"C++"}, borland [10]={"Borland"};
	//variabel string 9_6 strcat end
	//-------------------------------
	//variabel string 9_5 strcpy start
	char str1[10]={"abcdefghi"};
	char str2[10];
	//variabel string 9_5 strcpy end
	
	
	int numbers[]={102, 21, 83, 42, 11, 10, 9, 3, 20, 27, 15, 92, 2}; // variabel latihan 12_3 sorting
	
	int numbersa[]={4, 8, 5, 9, 2, 7, 5, 9, 5};//tugas akhir sorting
	const int sizea = sizeof(numbersa)/sizeof(numbersa[0]);//tugas akhir sorting

	int a1[3][3], b[3][3], c[3][3],i,j,k;//array matrix 3 x 3 latihan 8_4
	
	int numlist[8]={5, 34, 32, 25, 75, 42, 22, 2};// latihan 12_1 sorting
	const int sizei = sizeof(numbers)/sizeof(numbers[0]);//latihan 12_1 sorting
	
	char list[5][4]={"cat","car","cab","cap","can"};
	
	
	//variable array with fungsi 8_3 start
	int matrik1 [2][3] = {{1,2,3},{4,5,6}},
		matrik2 [2][3] = {1,2,3,4,5},
		matrik3 [2][3] = {{1,2},{4}};
	//variable array with fungsi 8_3 end
	
	int modul, pilih;
	
	modulpertemuan:
		system ("cls");
	cout<<"Kumpulan Latihan & Tugas Akhir  Praktikum Algoritma"<<endl<<endl;
	cout<<"  DAFTAR MODUL PERTEMUAN PRAKTIKUM ALGORITMA C++"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"<1>. DASAR PEMROGRAMAN C++    <7>.  ARRAY"<<endl;
	cout<<"<2>. DECISION <IF>            <8>.  STRING"<<endl;
	cout<<"<3>. DECISION <SWITCH>        <9>.  POINTER"<<endl;
	cout<<"<4>. LOOPING <FOR>            <10>. STRUCTURE"<<endl;
	cout<<"<5>. LOOPING <WHILE>          <11>. SORTING"<<endl;
	cout<<"<6>. FUNGSI                   <12>. SEARCHING"<<endl<<endl;
	cout<<"Pilih Modul Pertemuan :";cin>>modul;cout<<endl;
	switch (modul)
		{
			case 1:
				char pertemuan1;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT2_1             <E>. LAT2_5"<<endl;
				cout<<"<B>. LAT2_2             <F>. LAT2_6"<<endl;
				cout<<"<C>. LAT2_3             <G>. LAT2_7"<<endl;
				cout<<"<D>. LAT2_4             <H>. Tugas_Akhir"<<endl;
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan1;cout<<endl;
					switch (pertemuan1)
					{
						case 'A':
							int panjang, lebar;
							float luas, keliling;
							cout<<"------Tugas Latihan 2_1 Dasar Pemrograman C++-----"<<endl;
							cout<<"Program Menghitung Luas dan Keliling Persegi Panjang"<<endl<<endl;
							cout<<"Masukkan Panjang Persegi Panjang :";cin>>panjang;
							cout<<"Masukkan Lebar Persegi Panjang   :";cin>>lebar;
							luas=panjang*lebar;
							keliling=2*(panjang + lebar);
							cout<<"---------------------------------------"<<endl;
							cout<<"Jadi Luas persegi Panjang Adalah     :"<<luas<<endl;
							cout<<"Jadi Keliling Persegi Panjang Adalah :"<<keliling<<endl<<endl;
							cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
								if (pilih ==1)
								{goto modulpertemuan;}
				
									else
									{
										cout<<"---* Program Selesai *--";
										goto selesai;
									}
								
						break ;
						
						case 'B':
							int panjangbalok, lebarbalok, tinggibalok, luasbalok;
							float volumebalok;
							
							cout<<"------Tugas Latihan 2_2 Dasar Pemrograman C++-----"<<endl;
							cout<<"    Program Menghitung Luas dan Volume Balok"<<endl;
							cout<<"Masukkan Panjang :";cin>>panjangbalok;
							cout<<"Masukkan Lebar   :";cin>>lebarbalok;
							cout<<"Masukkan Tinggi  :";cin>>tinggibalok;
							luasbalok=(2*panjangbalok*lebarbalok)+(2*panjangbalok*tinggibalok)+(2*tinggibalok*lebarbalok);
							volumebalok=panjangbalok*lebarbalok*tinggibalok;
							cout<<"----------------------------------------"<<endl;
							cout<<"Luas Balok Adalah   :"<<luasbalok<<endl;
							cout<<"Volume Balok Adalah :"<<volumebalok<<endl;
							
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
								if (pilih ==1)
								{goto modulpertemuan;}
				
									else
									{
										cout<<"---* Program Selesai *--";
										goto selesai;
									}
									
						break ;
						
						case 'C':
							int a,b,c;
							a=33, b=21, c=a+b;
							cout<<"------Tugas Latihan 2_3 Dasar Pemrograman C++-----"<<endl;
							cout<<"     Program Penggunaan Operator Perngerjaan"<<endl;
							cout<<"--------------------------------------------"<<endl;
							cout<<"Cetak C :"<<c<<endl<<endl;; 
							
							cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
								if (pilih ==1)
								{goto modulpertemuan;}
				
									else
									{
										cout<<"---* Program Selesai *--";
										goto selesai;
									}
						break ;
						
						case 'D':
							float luas1, pi, jari;
							pi=3.1428;
							jari=21.4;
							luas1=pi*jari*jari;
							cout<<"------Tugas Latihan 2_4 Dasar Pemrograman C++-----"<<endl;
							cout<<"          Program Penggunaan Aritmatika"<<endl;
							cout<<"------------------------------------"<<endl;
							cout<<"Cetak Luas :"<<luas1<<endl<<endl;
							
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
								if (pilih ==1)
								{goto modulpertemuan;}
	
	
				
									else
									{
										cout<<"---* Program Selesai *--";
										goto selesai;
									}
						break;
						
						case 'E':
							long int beli, disc, total;
							cout<<"------Tugas Latihan 2_5 Dasar Pemrograman C++-----"<<endl;
							cout<<"       Program Penggunaan Operator Hubungan"<<endl;
							cout<<"-------------------------------------------"<<endl;
							cout<<"Masukkan Pembelian :";cin>>beli;
								if (beli>=100000)
								{
									disc=0.1*beli;
									total=beli-disc;
								}
								else
								{
									disc=0.05;
									total=beli-disc;
								}
							cout<<"Jadi Pembelian Adalah : Rp."<<beli<<endl;
							cout<<"Jadi Discount Adalah  : Rp."<<disc<<endl;
							cout<<"Jadi Total Pembayaran Adalah : Rp."<<total<<endl<<endl;
							
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
								if (pilih ==1)
								{goto modulpertemuan;}
				
									else
									{
										cout<<"---* Program Selesai *--";
										goto selesai;
									}
						break;
						
						case 'F':
							int nilai, tugas;
							cout<<"------Tugas Latihan 2_6 Dasar Pemrograman C++-----"<<endl;
							cout<<"       Program Penggunaan Operator Logika"<<endl;
							cout<<"-------------------------------------------"<<endl;
							cout<<"Masukkan Sebuah Nilai :";cin>>nilai;
							cout<<"Masukkan Nilai Tugas  :";cin>>tugas;
								if(nilai>70 && tugas>=75)
								{
									cout<<"Lulus"<<endl;
								}
								else
								{
									cout<<"Tidak Lulus"<<endl<<endl;
								}
								
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
						break;	
						
						case 'G':
							char kar1, kar2;
							(kar1='A', kar2='B');
							cout<<"------Tugas Latihan 2_7 Dasar Pemrograman C++-----"<<endl;
							cout<<"       Program Penggunaan Operator Koma"<<endl;
							cout<<"-------------------------------------------"<<endl;
							cout<<"Cetak Kar1 = "<<kar1<<endl;
							cout<<"Cetak kar2 = "<<kar2<<endl<<endl;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
						break;
						
						case 'H':
							float pibola,volumebola,luasbola,rbola;
							pibola=3.14;
							cout<<"------Tugas Akhir Dasar Pemrograman C++-----"<<endl;
							cout<<"    Program Hitung Volume dan Luas Bola"<<endl;
							cout<<"-------------------------------------------"<<endl;
							
								cout<<"Masukkan Jari-Jari Bola :"; cin>>rbola;cout<<endl;
								
								volumebola=pibola*rbola*rbola*rbola*4/3;
								luasbola=4*pibola*rbola*rbola;
								
								cout<<"Volume Dan Luas Bola Dengan Jari - Jari :"<<rbola<<endl;
								cout<<"Volume :"<<volumebola<<endl;
								cout<<"Luas   :"<<luasbola<<endl<<endl;
								
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
						break;
						
					default:
						cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
						cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
						
					}
			break;
			
			case 2:
					char pertemuan2;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT3_1"<<endl;
				cout<<"<B>. LAT3_2"<<endl;
				cout<<"<C>. LAT3_3"<<endl;
				cout<<"<D>. LAT3_4"<<endl;
				cout<<"<E>. Tugas_Akhir"<<endl;             
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan2;cout<<endl;
				
				switch (pertemuan2)
					{
						case 'A':
							int nilaiif;
							cout<<"------Tugas Latihan 3_1 DECISION IF-----"<<endl;
							cout<<"  Program Dasar Penggunaan Perintah IF"<<endl;
							cout<<"-------------------------------------------"<<endl;
							cout<<"Masukkan Sebuah Nilai :";cin>>nilaiif;
								if(nilaiif>69)
									{
										cout<<"Lulus";
									}
								else
									{
										cout<<"Tidak Lulus"<<endl<<endl;
									}
									
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
						break;
						
						case 'B':
							long int kodeif, jumlahif, sks, semester;
							char namaif[100];
							cout<<"------Tugas Latihan 3_2 DECISION IF-----"<<endl;
							cout<<"  Program Dasar Penggunaan Perintah IF-Else"<<endl;
							cout<<"-------------------------------------------"<<endl;
							cout<<"Masukkan Kode [1-3] :";cin>>kodeif;
							cout<<"Jumlah SKS Persemester [20-25] :"; cin>>sks;
								
								if(kodeif==1)
									{
										strcpy(namaif,"Teknik Informatika");
										jumlahif =30000*sks;
										semester =jumlahif*2;
									}
								else if(kodeif==2)
									{
										strcpy(namaif,"Akuntansi");
										jumlahif =20000*sks;
										semester = jumlahif*2;	
									}
								else if(kodeif==3)
									{
										strcpy(namaif,"Manajemen");
										jumlahif = 15000*sks;
										semester = jumlahif*2;
									}
							cout<<"---------------------------------------"<<endl;
							cout<<"Nama Kursus :"<<namaif<<endl;
							cout<<"Pembayaran Dalam 1 Semester : Rp. "<<jumlahif<<endl;
							cout<<"Pembayaran Dalam 1 Tahun    : Rp. "<<semester<<endl<<endl;
								
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
						break;	
						
						case 'C':
							int nilaix;
							cout<<"             ------Tugas Latihan 3_3 DECISION IF-----"<<endl;
							cout<<"  Program Sederna Menentukan Nilai X Positif, Negatif & Nol"<<endl;
							cout<<"-------------------------------------------"<<endl;
							cout<<"Masukkan Nilai X :";cin>>nilaix;
								
								if (nilaix > 0)
									{
										cout<<"X Adalah Bilangan Positif"<<endl<<endl;
									}
								else if(nilaix < 0)
									{
										cout<<"X Adalah Bilangan Negatif"<<endl<<endl;
									}
								else if(nilaix == 0)
									{
										cout<<"X Adalah bilangan Nol"<<endl<<endl;
									}
									
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
						break;
						
						case 'D':
							int angkaif;
							char grade[3];
							cout<<"    ------Tugas Latihan 3_4 DECISION IF-----"<<endl;
							cout<<"   Program Dasar Menampilkan Nilai & Huruf"<<endl;
							cout<<"-------------------------------------------"<<endl;
							cout<<"Masukkan Nilai [1-100]:";cin>>angkaif;
								if (angkaif >=81 && angkaif<=100)
									{
										strcpy(grade,"A");
									}
								else if(angkaif >=71 && angkaif < 81)
									{
										strcpy(grade,"B");
									}
								else if (angkaif >=61 && angkaif <71)
									{
										strcpy(grade,"C");
									}
								else if (angkaif >=51 && angkaif <61)
									{
										strcpy(grade,"D");
									}
								else 
									{
										strcpy(grade,"E");
									}
								cout<<"----------------"<<endl;
								cout<<"Nilai       :"<<angkaif<<endl;
								cout<<"Grade Nilai :"<<grade<<endl<<endl;
								
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
						break;
						
						case 'E':
							int kodehari;
							char harif[10];
							cout<<"    ------Tugas Akhir DECISION IF-----"<<endl;
							cout<<"   Program Dasar Menampilkan Kode & Hari"<<endl;
							cout<<"-------------------------------------------"<<endl;
							cout<<"Masukkan Kode [1-7] :";cin>>kodehari;
								if (kodehari == 1)
									{
										strcpy(harif,"Senin");cout<<endl;	
									}
								else if (kodehari == 2)
									{
										strcpy(harif,"Selasa");cout<<endl;
									}
								else if (kodehari == 3)
									{
										strcpy(harif,"Rabu");cout<<endl;
									}
								else if (kodehari == 4)
									{
										strcpy(harif,"Kamis");cout<<endl;
									}
								else if (kodehari == 5)
									{
										strcpy(harif,"Jum'at'");cout<<endl;
									}
								else if (kodeif == 6)
									{
										strcpy(harif,"Sabtu");cout<<endl;
									}
								else if (kodehari == 7)
									{
										strcpy(harif,"Minggu");cout<<endl;
									}
								else
									{
										cout<<"Kode Yang Anda Masukkan Salah !!"<<endl;
									}
								cout<<"------------------------------"<<endl;
								cout<<"Kode Hari [ "<<kodehari<<" ]"<<endl;
								cout<<"Hari   : "<<harif<<endl<<endl;
								
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
						break;
						
						default:
						cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
						cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							
					}
			break;
			
			case 3:
				char pertemuan3;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT4_1"<<endl;
				cout<<"<B>. LAT4_2"<<endl;
				cout<<"<C>. Tugas_Akhir"<<endl;
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan3;cout<<endl;	
					switch (pertemuan3)
						{
							case 'A':
								int kdhari;
							cout<<"------Tugas Latihan 4_1 DECISION SWITCH-----"<<endl;
							cout<<"      Program Dasar Penggunaan Switch"<<endl;
							cout<<"-------------------------------------------"<<endl;
							cout<<"Masukkan Kode Hari [1-7] :";cin>>kdhari;
								switch (kdhari)
									{
										case 1:
											cout<<"Senin"<<endl;break;
										case 2:
											cout<<"Selasa"<<endl;break;
										case 3:
											cout<<"Rabu"<<endl;break;
										case 4:
											cout<<"Kamis"<<endl;break;
										case 5:
											cout<<"Jum'at"<<endl;break;
										case 6:
											cout<<"Sabtu"<<endl;break;
										case 7:
											cout<<"Minggu"<<endl;break;
										default:
										cout<<"Kode Tidak Ada !!"<<endl;
									}
											cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							break;
							
							case 'B':
									char pilihmenu;
								cout<<"------Tugas Latihan 4_2 DECISION SWITCH-----"<<endl;
								cout<<"      Program Dasar Penggunaan Switch"<<endl;
								cout<<"-------------------------------------------"<<endl;
								
								cout<<"      Program Menu Switch Case"<<endl;
								cout<<"    Menghitung Luas dan Keliling"<<endl;
								cout<<"(Segitiga,Persegi Panjang, Lingkarang)"<<endl;
								cout<<"----------------------------------------"<<endl;
								cout<<"Masukkan Kode (KAPITAL) <S/P/L>  :";
								cin>>pilihmenu;cout<<endl;
	
										switch(pilihmenu)
										{
											
											case 'S':
												int s1,s2,s3,alas,tinggi;
												float keliling, luas;
												
												
												cout<<"Hitung luas dan Keliling Segitiga"<<endl;
												cout<<"Masukkan Panjang Sisi A :";cin>>s1;cout<<endl;
												cout<<"Masukkan Panjang Sisi B :";cin>>s2;cout<<endl;
												cout<<"Masukkan Panjang Sisi C :";cin>>s3;cout<<endl;
												cout<<"Masukkan Alas           :";cin>>alas;cout<<endl;
												cout<<"Masukkan Tinggi         :";cin>>tinggi;cout<<endl;
												cout<<"------------------------------"<<endl;
												keliling=s1+s2+s3;
												luas=alas*tinggi*1/2;
												cout<<"Keliling Segitiga     :";cout<<keliling<<endl;
												cout<<"Luas Segitiga         :";cout<<luas<<endl<<endl;
												cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
																if (pilih ==1)
																{goto modulpertemuan;}
												
																	else
																	{
																		cout<<"---* Program Selesai *--";
																		goto selesai;
																	}
												
												break;
											case 'P':
												int  kel, luaspers;
												float p, l;
												cout <<"Hitung Luas dan Keliling Persegi Panjang"<<endl;
												cout<<"Masukkan Panjang :"; cin>>p;
												cout<<"Masukkan Lebar   :"; cin>>l;
												cout<<"---------------------------"<<endl;
												luaspers= p*l;
												kel=2*(p+l);
												cout<<"Luas Persegi Panjang     :";cout<<luaspers<<endl;
												cout<<"Keliling Persegi Panjang :";cout<<kel<<endl<<endl;
												cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
															if (pilih ==1)
															{goto modulpertemuan;}
											
																else
																{
																	cout<<"---* Program Selesai *--";
																	goto selesai;
																}
												break;
											case 'L':
												int r;
												float phi,kelingkar,luaskar;
												phi=3.14;
												cout<<"Hitung Luas dan Keliling Lingkaran"<<endl;
												cout<<"Masukkan Jari - Jari Lingkaran :";
												cin>>r;cout<<endl;
												cout<<"----------------------------------"<<endl;
												luaskar=phi*r*r;
												kelingkar=phi*2*r;
												cout<<"Luas Lingkaran       :";cout<<luaskar<<endl;
												cout<<"Keliling Lingkaran   :";cout<<kelingkar<<endl<<endl;
												cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
															if (pilih ==1)
															{goto modulpertemuan;}
											
																else
																{
																	cout<<"---* Program Selesai *--";
																	goto selesai;
																}
												
												break;
												
											default:
											cout<<"Kode Salah !!"<<endl<<endl;
											cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}
										}
							break;
							
							case 'C':
								int harga;
								cout<<"------Tugas Akhir DECISION SWITCH-----"<<endl;
								cout<<"      Algoritma Sederhana Switch"<<endl;
								cout<<"-------------------------------------------"<<endl;
								
								cout<<" Masukan Total Pembelian : Rp."; cin>>harga;
									    switch(harga)
									    {
									        case 100000 ... 199999:
									            int dis, t;
									            dis=harga*0.05;
									            t=harga-dis;
									            cout<<"Anda Mendapat Potongan Sebesar 5%: Rp."<<dis;cout<<endl;
									            cout<<" Total Yang Harus Dibayar : Rp."<<t; 
									            cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
																	if (pilih ==1)
																	{goto modulpertemuan;}
													
																		else
																		{
																			cout<<"---* Program Selesai *--";
																			goto selesai;
																		}
												break;
									        case 200000 ... 299999:
									            cout<<"\nBONUS ANDA : TIKET KE YOGYA"<<endl; 
									            cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
																	if (pilih ==1)
																	{goto modulpertemuan;}
													
																		else
																		{
																			cout<<"---* Program Selesai *--";
																			goto selesai;
																		}
												break;
									        case 300000 ... 399999:
									            cout<<"\nBONUS ANDA : TIKET KE BALI"<<endl;
												cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
																	if (pilih ==1)
																	{goto modulpertemuan;}
													
																		else
																		{
																			cout<<"---* Program Selesai *--";
																			goto selesai;
																		} 
												break;
									        case 400000 ... 499999:
									            cout<<"\nBONUS ANDA : JAM TANGAN ROLEX"<<endl; 
									            cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
																	if (pilih ==1)
																	{goto modulpertemuan;}
													
																		else
																		{
																			cout<<"---* Program Selesai *--";
																			goto selesai;
																		}
												break;
									        case 500000 ... 1000000:
									            cout<<"\nBONUS ANDA : TIKET KE SWISS"<<endl; 
									            cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
																	if (pilih ==1)
																	{goto modulpertemuan;}
													
																		else
																		{
																			cout<<"---* Program Selesai *--";
																			goto selesai;
																		}
												break;
									   		 default :
									    	cout<<"\nMAAF TIDAK ADA BONUS UNTUK ANDA !!"<<endl;
									    	cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
																	if (pilih ==1)
																	{goto modulpertemuan;}
													
																		else
																		{
																			cout<<"---* Program Selesai *--";
																			goto selesai;
																		}
									    }
									
							break;
							default:
									cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}		
						}										
			break;
			
			case 4:
				char pertemuan4;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT5_1             <D>. LAT5_4"<<endl;
				cout<<"<B>. LAT5_2             "<<endl;
				cout<<"<C>. LAT5_3             <E>. Tugas_Akhir"<<endl;
			
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan4;cout<<endl;	
					switch (pertemuan4)
						{
							case 'A':
								int nl;
									cout<<"------Tugas Latihan 5_1 LOOPING FOR-----"<<endl;
									cout<<"    Contoh Program Penggunaan Perintah For"<<endl;
									cout<<"-------------------------------------------"<<endl;
										for(nl=1; nl<=10; nl++)
										{
											cout<<nl<<endl;
										}
									cout<<endl;
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							break;	
							
							case 'B':
									int il;
								cout<<"------Tugas Latihan 5_2 LOOPING FOR-----"<<endl;
								cout<<"Contoh Program Penggunaan For Continue & Break"<<endl;
								cout<<"-------------------------------------------"<<endl;
									for(il=0; il<10; il++)
										{
											if (il == 4) continue;
											cout<<"Bilangan :"<<il<<endl;
											if(il == 6) break;
										}
												cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
												if (pilih ==1)
												{goto modulpertemuan;}
								
													else
													{
														cout<<"---* Program Selesai *--";
														goto selesai;
													}
							break;
							
							case 'C':
								
								int na;
									na=1;
								cout<<"------Tugas Latihan 5_3 LOOPING FOR-----"<<endl;
								cout<<"Contoh Program Penggunaan For Dengan Goto"<<endl;
								cout<<"-------------------------------------------"<<endl;
									cetak:
										cout<<"C++ Sangat Mudah"<<endl;
											if(na ++< 10)
												goto cetak;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							break;
							
							case 'D':
									int ig;
								cout<<"------Tugas Latihan 5_4 LOOPING FOR-----"<<endl;
								cout<<"Program Menampilkan Bilangan Ganjil & Genap"<<endl;
								cout<<"-------------------------------------------"<<endl;
								cout<<"Angka Ganjil :";
									for (ig=0 ; ig<=35 ; ig++)
										{
											ig++;
											cout<<ig<<" ";
											
										}
											cout<<endl;
											cout<<"Angka Genap :";
												for(ig=1 ; ig<=35; ig++)
													{
														ig++;
														cout<<ig<<" ";
													}
										cout<<endl;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}
							break;
							
							case 'E':
								int a, b, c, n, i;
									a=0;
									b=1;
									n=12;
								cout<<"  ------Tugas AKHIR LOOPING FOR-----"<<endl;
								cout<<" Program Menampilkan Bilangan Fibonacci"<<endl;
								cout<<"-------------------------------------------"<<endl;
								
								cout<<"Fibonacci : "<<a<<" "<<b<<" ";
											    for(i=0;i<=n-3;i++)
											    {
											        c=a+b; a=b; b=c;
											        cout<<c<<" ";
											    }
								cout<<endl<<endl;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
											{goto modulpertemuan;}
							
												else
												{
													cout<<"---* Program Selesai *--";
													goto selesai;
												}
							break;
							default:
										cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
														if (pilih ==1)
														{goto modulpertemuan;}
										
															else
															{
																cout<<"---* Program Selesai *--";
																goto selesai;
															}		
						}	
			break;
			
			case 5:
				char pertemuan5;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT6_1             <D>. LAT6_4 "<<endl;
				cout<<"<B>. LAT6_2             "<<endl;
				cout<<"<C>. LAT6_3             <E>. Tugas_Akhir"<<endl;
		
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan5;cout<<endl;
					switch (pertemuan5)
					{
						case 'A':
							int counter;
							cout<<"------Tugas Latihan 6_1 LOOPING [WHILE]-----"<<endl;
							cout<<"    Contoh Program Perintah Do...While"<<endl;
							cout<<"-------------------------------------------"<<endl;
								counter = 0;
									do
									{
										cout<<"C++"<<endl;
										counter++;
									}
										while(counter<15);
							cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
												{goto modulpertemuan;}
								
													else
													{
														cout<<"---* Program Selesai *--";
														goto selesai;
													}
						break;
						
						case 'B':
							int i;
							i =10;
							cout<<"------Tugas Latihan 6_2 LOOPING [WHILE]-----"<<endl;
							cout<<"      Contoh Program Perintah While"<<endl;
							cout<<"-------------------------------------------"<<endl;
							
									while(i>0)
										{
											cout<<i<<endl<<endl;
											i--;
										}
										
												cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
												if (pilih ==1)
														{goto modulpertemuan;}
										
															else
															{
																cout<<"---* Program Selesai *--";
																goto selesai;
															}
						break;
						
						case 'C':
							int nomer, bagi, sisa;
							sisa=0;
							char chrpilihan;
							cout<<"------Tugas Latihan 6_3 LOOPING [WHILE]-----"<<endl;
							cout<<"    Program Penggunaan Perintah Do While"<<endl;
							cout<<"-------------------------------------------"<<endl;
								do
									{
										cout<<"Masukan Suatu Bilangan   :";cin>>nomer;
										cout<<"Masukan Bilangan Pembagi [2/3/4/5] :";cin>>bagi;
										cout<<"Bilangan Yang Dipilih  :"<<nomer<<endl;
										cout<<"Bilangan Pembagi       :"<<bagi<<endl;
										sisa=nomer % bagi;
											if (sisa == 0)
												{
													cout<<"Sisa Bagi Tidak Ada";
												}
											else
												{
													cout<<"Sisa Bagi :"<<sisa;
												}
											cout<<endl;
											cout<<"Apakah Anda Ingin Meneruskan ? [Y/N] :";
											cin>>chrpilihan;
									}
										while(toupper(chrpilihan)=='Y');
										cout<<endl;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							
						break;
						
						case 'D':
							int ganjil, genap;
								ganjil = 1;
								genap = 0;
							cout<<"        ------Tugas Latihan 6_4 LOOPING [WHILE]-----"<<endl;
							cout<<"    Program Menampilkan Bilangan Ganjil Dan Genap Dengan While"<<endl;
							cout<<"        -------------------------------------------"<<endl;
							
									cout<<"Ganjil :";
												 		while (ganjil<35)
												 			{
												 				ganjil=ganjil+=2;
												 				cout<<ganjil<<"  ";
															 }
													cout<<"\n\nGenap  :";
														do
														{
															genap=genap+2;
															cout<<genap<<"  ";
														}
													while (genap<34);
										cout<<endl<<endl;			
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
												if (pilih ==1)
												{goto modulpertemuan;}
								
													else
													{
														cout<<"---* Program Selesai *--";
														goto selesai;
													}
						break;
						
						case 'E':
							 int a, b, c, n, iwhile;
							 a=0, b=1, n=12;
							cout<<"------Tugas Akhir LOOPING [WHILE]-----"<<endl;
							cout<<"  Program Fibonacci Menggunakan While"<<endl;
							cout<<"-------------------------------------------"<<endl;
							
									    cout<<"Menampilkan Bilangan Fibonacci\n";
									    cout<<"----------------------------------"<<endl;
									    cout<<"Fibonacci : "<<a<<" "<<b<<" ";
									    for(iwhile=0;iwhile<=n-3;iwhile++)
									    {
									        c=a+b; a=b; b=c;
									        cout<<c<<" ";
									    }
									    cout<<endl<<endl;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
														if (pilih ==1)
														{goto modulpertemuan;}
										
															else
															{
																cout<<"---* Program Selesai *--";
																goto selesai;
															}
						break;
						
						default:
						cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
						cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
						
					}											
			
			break;
			
			case 6:
				char pertemuan6;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT 7_1             <D>. LAT 7_4"<<endl;
				cout<<"<B>. LAT 7_2             <E>. LAT 7_5"<<endl;
				cout<<"<C>. LAT 7_3             <F>. Tugas_Akhir"<<endl;
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan6;cout<<endl;	
					switch (pertemuan6)
						{
							case 'A':
									int x;
									cout<<"  ------Tugas Latihan 7_1 FUNGSI-----"<<endl;
									cout<<" Program Parameter Rekursi dan Factorial"<<endl;
									cout<<"-------------------------------------------"<<endl;
									cout<<"-- Mencari Nilai Faktorial --"<<endl;
									cout<<"Masukkan Nilai x : ";cin>>x;
									cout<<"Nilai Faktorial dari [ "<<x<<" ] :"<<factorial(x);
									cout<<endl<<endl;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}
														
							break;
							
							case 'B':
										int i,j,k;
										i=5, j=7;
										k= findmax(i,j);
										printmax(k);
								
									int findmax (int n1, int n2);
									void printmax (int m);
									cout<<endl;
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
											{goto modulpertemuan;}
							
												else
												{
													cout<<"---* Program Selesai *--";
													goto selesai;
												}
							break;
							
							case 'C':
								int a, b;
								a=99, b=11;
								cout<<"------Tugas Latihan 7_3 FUNGSI-----"<<endl;
								cout<<"Program Parameter Parameter Formal Dan Actual"<<endl;
								cout<<"-------------------------------------------"<<endl;
								
								cout<<"nilai Sebelum Pemanggilan Fungsi"<<endl;
								cout<<"Nilai a = "<<a<<" Nilai b = "<<b<<endl<<endl;
								tukar(a,b);
								cout<<"Nilai Sesudah Pemanggilan Fungsi"<<endl;
								cout<<"Nilai a = "<<a<<" Nilai b = "<<b<<endl<<endl;
								
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							break;
							
							case 'D':
									int xf;
									cout<<"------Tugas Latihan 7_4 FUNGSI-----"<<endl;
									cout<<" Program Fungsi Rekursi Untuk Fibonacci"<<endl;
									cout<<"-------------------------------------------"<<endl;
										
										cout<<"Masukkan Nilai Fibonacci : ";cin>>xf;
										cout<<"Nilai Fibonacci Dari [ "<<xf<<" ] ="<<fibonacci(xf);
										cout<<endl;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}
							break;
							
							case 'E':
								int xk, yk, zk;
								int mult(int x, int y, int z);
								cout<<"------Tugas Latihan 7_4 FUNGSI-----"<<endl;
								cout<<"  Program Perkalian Dengan Fungsi"<<endl;
								cout<<"-------------------------------------------"<<endl;
									cout<<"Masukkan Bilangan Pertama : ";cin>>xk;
									cout<<"Masukkan Bilangan Kedua   : ";cin>>yk;
									cout<<"Masukkan Bilangan Ketiga  : ";cin>>zk;
									cout<<"Hasil Perkalian bilangan itu adalah : "<<mult(xk,yk,zk);
									cout<<endl<<endl;		
											cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}
							break;
							
							case 'F':
								cout<<"------Tugas Latihan 7_1 FUNGSI-----"<<endl;
								cout<<"    Program Parameter Rekursi dan Factorial"<<endl;
								cout<<"-------------------------------------------"<<endl;
									void ganjil (int ganjil);
									void genap  (int genap);
											int ix;
											    cout<<"Ganjil :";
											    
											    for (ix=1; ix<=35;ix++)
												    {
												        ganjil(ix);
												    }
											    cout<<endl;
											    
											    cout<<"Genap :";
											    for (ix=1; ix<=35;ix++)
												    {
												        genap(ix);
												    }
											    cout<<endl<<endl;
											    cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
																if (pilih ==1)
																{goto modulpertemuan;}
												
																	else
																	{
																		cout<<"---* Program Selesai *--";
																		goto selesai;
																	}
																	
							break;
							default:
											cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
											cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}		
							
						}										
				
			break;
			
			case 7:
				char pertemuan7;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT 8_1             <D>. LAT 8_4"<<endl;
				cout<<"<B>. LAT 8_2 "<<endl;
				cout<<"<C>. LAT 8_3             <E>. Tugas_Akhir"<<endl;
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan7;cout<<endl;	
					switch (pertemuan7)
						{
							case 'A':
								cout<<"------Tugas Latihan 8_1 ARRAY-----"<<endl;
								cout<<"     Contoh Program Penggunaan Array"<<endl;
								cout<<"-------------------------------------------"<<endl;
								
									int indeks, total;
									total = 0;
										for (indeks=0 ; indeks<=size-1; indeks++)
										{
											total +=a[indeks];
											
										}
										
										cout<<"Total Setiap Elemen Array Adalah :"<<total<<endl<<endl;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
												if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}
										
							break;
							
							case 'B':
								int square [100];
								int i,k;
								cout<<"------Tugas Latihan 8_2 ARRAY-----"<<endl;
								cout<<"     Contoh Program Penggunaan Array"<<endl;
								cout<<"-------------------------------------------"<<endl;
									for(i=0; i<10; i++)
										{
											k=i+1;
											square[i] = k*k;
										cout<<"Pangkat Dari [ "<<k<<" ] Adalah : "<<square [i]<<endl<<endl;
										}
									cout<<endl<<endl;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
														{goto modulpertemuan;}
										
															else
															{
																cout<<"---* Program Selesai *--";
																goto selesai;
															}
							break;
							
							case 'C':
								cout<<"       ------Tugas Latihan 8_3 ARRAY-----"<<endl;
								cout<<"Contoh Program Penggunaan Array Menggunakan Fungsi"<<endl;
								cout<<"-------------------------------------------"<<endl;
									void printarray (int [][3]);
										printarray (matrik1);cout<<endl;
										printarray (matrik2);cout<<endl;
										printarray (matrik3);cout<<endl;
														
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
											{goto modulpertemuan;}
							
												else
												{
													cout<<"---* Program Selesai *--";
													goto selesai;
												}
							break;
							
							case 'D':
								cout<<"      -----Tugas Latihan 8_4 ARRAY-----"<<endl;
								cout<<"     Contoh Program Array Marix 3 X3 "<<endl;
								cout<<"-------------------------------------------"<<endl;
									for (i=0; i<3; i++)
										{
											for (j=0; j<3; j++)
												{
													cout<<"Input Baris "<<(i+1)<<", Kolom "<<(j+1)<<" = ";
													cin>>a1[i][j];
												}
											cout<<endl;
										}
									cout<<" -- Matriks 3 x 3 --"<<endl<<endl;
										for (i=0; i<3; i++)
											{
												for (j=0; j<3; j++)
													{
														cout<<setw (4) <<a1[i][j];
													}
												cout<<endl<<endl;
											}
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
												if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}
							break;
							
							case 'E':
								cout<<"      -----Tugas Akhir ARRAY-----"<<endl;
								cout<<"     Contoh Program Array Marix 3 X 3 "<<endl;
								cout<<"-------------------------------------------"<<endl;
									for (i=0; i<3; i++)
										{
											for (j=0; j<3; j++)
												{
													cout<<"Input Baris "<<(i+1)<<", Kolom "<<(j+1)<<" = ";
													cin>>a1[i][j];
												}
											cout<<endl;
										}
									cout<<" -- Matriks 3 x 3 --"<<endl<<endl;
										for (i=0; i<3; i++)
											{
												for (j=0; j<3; j++)
													{
														cout<<setw (4) <<a1[i][j];
													}
												cout<<endl<<endl;
											}
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
												if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}
								
							break; 
							default:
								cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
												if (pilih ==1)
												{goto modulpertemuan;}
								
													else
													{
														cout<<"---* Program Selesai *--";
														goto selesai;
													}		
								}										
			break;
			
			case 8:
				char pertemuan8;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT 9_1           <E>. LAT 9_5"<<endl;
				cout<<"<B>. LAT 9_2           <F>. LAT 9_6"<<endl;
				cout<<"<C>. LAT 9_3           <G>. LAT 9_7"<<endl;
				cout<<"<D>. LAT 9_4           <H>. Tugas_Akhir"<<endl;
				cout<<" "<<endl;
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan8;cout<<endl;		
					switch (pertemuan8)
						{
							case 'A':
								char c;
								c='C';
								cout<<"------Tugas Latihan 9_1 STRING-----"<<endl;
								cout<<"    Program Stirng Dengan Isalpha "<<endl;
								cout<<"-------------------------------------------"<<endl;
									if (isalpha (c))
										{
											cout<<c<<" : Is Alphabetical "<<endl;
										}
									else
										{
											cout<<c<<" : Is Not Alphabetical"<<endl;
										}
											cout<<endl;
											cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}
							break;
							
							case 'B':
								char cs;
								cs='C';
								cout<<"------Tugas Latihan 9_2 STRING-----"<<endl;
								cout<<"   Program String Dengan Isdigit"<<endl;
								cout<<"-------------------------------------------"<<endl;
									if (isdigit (cs))
										{
											cout<<cs<<" : is a digit "<<endl;
										}
									else 
										{
											cout<<cs<<" : is not a digit"<<endl;
										}
											cout<<endl;
											cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}
								
							break;
							
							case 'C':
								char cl;
								cl='C';
								
								cout<<"------Tugas Latihan 9_3 STRING-----"<<endl;
								cout<<"    Program String Dengan Islower"<<endl;
								cout<<"-------------------------------------------"<<endl;
									if (islower (cl))
										{
											cout<<cl<<" is lower case character"<<endl;
										}
									else
										{
											cout<<cl<<" is not lower case character"<<endl;
										}
											cout<<endl;
											cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
												if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}
							break;
							
							case 'D':
								char cb;
								cb='C';
								cout<<"------Tugas Latihan 9_4 STRING-----"<<endl;
								cout<<"    Program String Dengan Isupper"<<endl;
								cout<<"-------------------------------------------"<<endl;
									if (isupper (cb))
										{
											cout<<cb<<" is an uppercase character"<<endl;
										}
									else
										{
											cout<<cb<<" is not an uppercase character"<<endl;
										}
											cout<<endl;
											cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
															if (pilih ==1)
															{goto modulpertemuan;}
											
																else
																{
																	cout<<"---* Program Selesai *--";
																	goto selesai;
																}
									
							break;
							
							case 'E':
								cout<<"------Tugas Latihan 9_5 STRING-----"<<endl;
								cout<<"    Program String Dengan strcpy"<<endl;
								cout<<"-------------------------------------------"<<endl;
										strcpy(str2, str1);
										cout<<str2;
										cout<<endl;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
												if (pilih ==1)
												{goto modulpertemuan;}
								
													else
													{
														cout<<"---* Program Selesai *--";
														goto selesai;
													}
							break;
							
							case 'F':
								cout<<"------Tugas Latihan 9_7 STRING-----"<<endl;
								cout<<"  Program String Menggunakan Fungsi"<<endl;
								cout<<"-------------------------------------------"<<endl;
									strcpy (destination,borland);
									strcpy (destination,blank);
									strcat (destination,ca);
									cout<<destination<<endl<<endl;

								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
											{goto modulpertemuan;}
							
												else
												{
													cout<<"---* Program Selesai *--";
													goto selesai;
												}
							break;
							
							case 'G':
							
								prog();
									cout<<endl<<endl;
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}				
							break;
							
							case 'H':
								
								cout<<"------Tugas Akhir STRING-----"<<endl;
								cout<<"  Program Menggabungkan String "<<endl;
								cout<<"-------------------------------------------"<<endl;
								
									cout<<"Masukkan Nama    :";
									cin>>nama;
									cout<<"Masukkan Hobi    :";
									cin>>hobi;cout<<endl<<endl;
									
									strcat (string1,spasi);
									strcat (string1, nama);
									strcat (string1,spasi);
									cout<<endl;
									strcat (string1,string2);
									strcat (string1,spasi);
									strcat (string1, hobi);				
									cout<<string1<<endl<<endl;
									
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
											{goto modulpertemuan;}
							
												else
												{
													cout<<"---* Program Selesai *--";
													goto selesai;
												}
											
							break;
								default:
										cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
														if (pilih ==1)
														{goto modulpertemuan;}
										
															else
															{
																cout<<"---* Program Selesai *--";
																goto selesai;
															}	
					
						}
			break;
			
			case 9:
				char pertemuan9;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT 10_1             <E>. LAT 10_5"<<endl;
				cout<<"<B>. LAT 10_2             <F>. LAT 10_6"<<endl;
				cout<<"<C>. LAT 10_3             <G>. LAT 10_7"<<endl;
				cout<<"<D>. LAT 10_4             <H>. Tugas_Akhir"<<endl;
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan9;cout<<endl;	
					switch (pertemuan9)
						{
							case 'A':
								int v, *p;
								v=7;
								p=&v;
								cout<<"------Tugas Latihan 10_1 POINTER-----"<<endl;
								cout<<"      Program Pointer Sederhana "<<endl;
								cout<<"----------------------------------------"<<endl<<endl;
								
								cout<<"Nilai v = [ "<<v<<" ] dan *p = [ "<<*p<<" ]"<<endl;
								cout<<"Alamatnya = [ "<<p<<" ]"<<endl<<endl;
									
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
														if (pilih ==1)
															{goto modulpertemuan;}
											
																else
																{
																	cout<<"---* Program Selesai *--";
																	goto selesai;
																}
							break;
							
							case 'B':
								int *ptr, num;
									ptr = &num;
									*ptr = 100;
								cout<<"------Tugas Latihan 10_2 POINTER-----"<<endl;
								cout<<"      Program Pointer Sederhana "<<endl;
								cout<<"----------------------------------------"<<endl<<endl;
								
									cout<<num<<" ";
									(*ptr)++;
									cout<<num<<" ";
									(*ptr)*2;
									cout<<num<<" ";
									cout<<endl<<endl;
										cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
											if (pilih ==1)
												{goto modulpertemuan;}
								
													else
													{
														cout<<"---* Program Selesai *--";
														goto selesai;
													}
								
							break;
							
							case 'C':
								int numx[10], *start, *end;
									start = numx;
									end = &numx[9];
								cout<<"------Tugas Latihan 10_3 POINTER-----"<<endl;
								cout<<"  Program Pointer Menggunakan While "<<endl;
								cout<<"----------------------------------------"<<endl;

										while (start != end)
											{
												cout<<"Masukan Bilangan :";
												cin>>*start;
												start++;
											}
								cout<<endl<<endl;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
											{goto modulpertemuan;}
							
												else
												{
													cout<<"---* Program Selesai *--";
													goto selesai;
												}
							break;
							
							case 'D':
								char *si;
								si = "Pointer masih digunakan";
								cout<<"------Tugas Latihan 10_4 POINTER-----"<<endl;
								cout<<"  Program Pointer Menggunakan Char "<<endl;
								cout<<"----------------------------------------"<<endl;
										
										cout<<si<<endl<<endl;

								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							break;
							
							case 'E':
								int numbers[5], *ps;
								ps = numbers, *ps = 10, ps++, *ps = 20;
								ps = &numbers[2], *ps = 30, ps = numbers +3, *ps = 40;
								ps = numbers, *(ps+4) = 50;
								
								cout<<"------Tugas Latihan 10_5 POINTER-----"<<endl;
								cout<<"      Program Pointer Sederhana "<<endl;
								cout<<"----------------------------------------"<<endl;

									for (int n =0; n<5 ;n++)
										{
											cout<<numbers[n]<<",";
											
										}
								cout<<endl<<endl;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
											{goto modulpertemuan;}
							
												else
												{
													cout<<"---* Program Selesai *--";
													goto selesai;
												}
							break;
							
							case 'F':
								int ix, *ip, **q;
								ix=10, ip=&ix, q=&ip;
								cout<<"------Tugas Latihan 10_6 POINTER-----"<<endl;
								cout<<"      Program Pointer Sederhana "<<endl;
								cout<<"----------------------------------------"<<endl;
								
								cout<<**q<<endl<<endl;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
												{goto modulpertemuan;}
								
													else
													{
														cout<<"---* Program Selesai *--";
														goto selesai;
													}
							break;
							
							case 'G':
									int x,y,z;
									x=1, y=3, z=7;
								cout<<"------Tugas Latihan 10_7 POINTER-----"<<endl;
								cout<<"      Program Pointer Sederhana "<<endl;
								cout<<"----------------------------------------"<<endl;
									
									duplicate(x,y,z);
									cout<<"x = [ "<<x<<" ], y = [ "<<y<<" ], z = [ "<<z<<" ]"<<endl<<endl;
									
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							break;
							
							case 'H':
								char String [100];
								cout<<"   ------Tugas Akhir POINTER-----"<<endl;
								cout<<"Menghitung Banyak Karakter Dengan Pointer "<<endl;
								cout<<"----------------------------------------"<<endl;
				
									cout<<"Inputlah Sebuah Kata      : ";cin>>String;
									cout<<"Jumlah Karakternya Adalah : "<<H(String)<<" Karakter "<<endl;
									cout<<endl;
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							break; 
							default:
									cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
													{goto modulpertemuan;}
									
														else
														{
															cout<<"---* Program Selesai *--";
															goto selesai;
														}		
						}										
			break;
			
			case 10:
				char pertemuan10;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT 11_1             <D>. LAT 11_4"<<endl;
				cout<<"<B>. LAT 11_2"<<endl;
				cout<<"<C>. LAT 11_3             <E>. Tugas_Ahkhir"<<endl;
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan10;cout<<endl;
					switch (pertemuan10)
						{
							case 'A':
								char buffer [50];
								cout<<"------Tugas Latihan 11_1 STRUCTURE-----"<<endl;
								cout<<"      Program Sructure Sederhana "<<endl;
								cout<<"----------------------------------------"<<endl;
								void printfmovie (movies_t movie);
												strcpy (mine.title, "2001 A Space Odyssey");cout<<endl<<endl;
												mine.year=1968;
												cin.ignore();
												cout<<"Masukan Judul Film Favorit :";cin.getline(yours.title,60);
												cout<<"Masukan Tahun :"; cin.getline(buffer,50);
												yours.year = atoi (buffer);
												cout<<"Judul Film Favorit yand ada : "<<endl;
												printfmovie (mine);
												cout<<"judul film favorit kamu adalah : "<<endl;
												printfmovie (yours);
								cout<<endl<<endl;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
											{goto modulpertemuan;}
							
												else
												{
													cout<<"---* Program Selesai *--";
													goto selesai;
												}
							break;
							
							case 'B':
								cout<<"------Tugas Latihan 11_2 STRUCTURE-----"<<endl;
								cout<<"      Program Sructure Sederhana "<<endl;
								cout<<"----------------------------------------"<<endl;
												int i;
														printf ("a[0].s =%s p->=%s a[2].slp ->s=%s \n",ax[0].s ,p->s, ax[2].slp->s);
														for (i=0; i<3; i++)
														{
															printf ("--a[i].i = %d", --ax[i].i);
														//	printf ("++a[i].s[3] = %c\n", ++ax[i].s[3]);
														}
								cout<<endl<<endl;				
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							break;
							
							case 'C':
								cout<<"------Tugas Latihan 11_3 STRUCTURE-----"<<endl;
								cout<<"Program Sructure Sederhana Menggunakan Looping "<<endl;
								cout<<"----------------------------------------"<<endl;

										employee_str employee[5];
									int loop;
										for (loop=0; loop<5; loop++)
											{
												cin.ignore(80,'\n');
												cout<<"Enter Name For Employee"<<(loop+1)<<";";
												cin.getline(employee [loop].name, 80, '\n');
						
												cout<<"Enter ID # :";
												cin>>employee[loop].idnum;
												
											}
												cout<<"\nemployee data :\n";
												cout.flags(ios::left);
												cout<<setw(15)<<"Name"<<"\t ID# \n __________________\n";
												
												for (loop=0; loop<5; loop++)
													{
														cout<<setw(15)<<employee[loop].name;
														cout<<"\t"<<employee[loop].idnum <<endl;
													}
										cout<<endl;

								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							break;
							
							case 'D':
								cout<<"------Tugas Latihan 11_4 STRUCTURE-----"<<endl;
								cout<<"      Program Sructure Sederhana "<<endl;
								cout<<"----------------------------------------"<<endl;

										int iii;
								char pilihan;
								
								lagi:
											cout<<"------------------------"<<endl;
											cout<<"      DATA SISWA        "<<endl;
											cout<<"------------------------"<<endl;
											cout<<"Nama Siswa    :";cin>>datasiswa[iii].nama;
											cout<<"Alamat        :";cin>>datasiswa[iii].alamat;
											cout<<"Jenis Kelamin :";cin>>datasiswa[iii].jk;
											cout<<"No HP         :";cin>>datasiswa[iii].telp;
											
									cout<<endl;
									cout<<"Mau Tambah Data Lagi ? [Y/T] :";
									cin>>pilihan; cout <<endl;
									
											if(pilihan=='Y' || pilihan=='y')
													{goto lagi;}
														else {goto selesai1;}
													selesai1:
														cout<<"Terimakasih :)"<<endl<<endl;
					
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
														{goto modulpertemuan;}
										
															else
															{
																cout<<"---* Program Selesai *--";
																goto selesai;
															}
							break;
							
							case 'E':
								int z, jumlah;
								char kodenikah, status[20];
								cout<<"------Tugas_Akhir STRUCTURE-----"<<endl;
								cout<<"      Program Sructure Sederhana "<<endl;
								cout<<"----------------------------------------"<<endl;
										cout<<"Masukkan Jumlah Karyawan :";cin>>jumlah;
											for (z=1; z<=jumlah; z++)
												{
													cout<<" DATA PEGAWAI "<<endl;
													cout<<"---------------"<<endl;
													cout<<"Data Pegawai Ke     : "<<z<<endl;
													cin.ignore();
													cout<<"Nama Pegawai        :";cin.getline(employe[z].nama,30);
													cout<<"Gaji Pegawai / Bln  :";cin>>employe[z].gaji;
													cout<<"Status [Menikah (s), Belum Nikah (n)] :";cin>>kodenikah;
														if (kodenikah =='s' || kodenikah =='S')
															{
																strcpy(status,"Menikah");
																cout<<"Jumlah Anak : ";cin>>employe[z].anak;
															
															}
														else if (kodenikah =='n' || kodenikah =='N')
															{
																strcpy(status,"Belum Nikah");
															}
												}
													cout<<"     Data Pegawai Tugas Akhir Structre"<<endl;
													cout<<"-------------------------------------------------------------------------"<<endl;
													cout<<"NO  |     Nama Pegawai    |     Gaji/Bln  | Jumlah Anak |     Status     |"<<endl;										
													cout<<"-------------------------------------------------------------------------"<<endl;
														int ulang;
															for (ulang=1; ulang<=jumlah; ulang++)
																{
																	cout<<ulang;
																	cout<<setw(16)<<employe[ulang].nama;
																	cout<<setw(19)<<employe[ulang].gaji;
																	cout<<setw(19)<<employe[ulang].anak;
																	cout<<setw(18)<<status;
																	cout<<endl<<endl;
																}
																		
																		cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
																		if (pilih ==1)
																		{goto modulpertemuan;}
														
																		else if(pilih == 2)
																			{
																				cout<<"---* Program Selesai *--";
																				goto selesai;
																			}						
							break;
								default:
									cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
													if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}	
						}											
			break;
			
			case 11:
					char pertemuan11;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT 12_1             <C>. LAT 12_3"<<endl;
				cout<<"<B>. LAT 12_2             <D>. Tugas_Akhir"<<endl;
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan11;cout<<endl;	
					switch (pertemuan11)
						{
							case 'A':
								
									int swap;
									
								cout<<"------Tugas Latihan 12_1 SORTING-----"<<endl;
								cout<<"     Program Penggunaan Sorting "<<endl;
								cout<<"--------------------------------------"<<endl;
									
									cout<<"Data Sebelum Diurutkan"<<endl;
										for (int ctr=0; ctr<8; ctr++)
											{
												cout<<setw(3)<<numlist[ctr];
											}
										cout<<endl<<endl;
											for (int is=0; is<7; is++)
											for (int iis=0; iis<7; iis++)
										if (numlist[iis] > numlist[iis + 1])
											{
												swap = numlist[iis];
												numlist [iis]= numlist[iis + 1];
												numlist [iis + 1] = swap;
											}
									cout<<"Data Setelah Diurutkan : "<<endl;
										for (int iiis=0 ; iiis<8; iiis++)
											{
												cout<<setw(3)<<numlist[iiis];
												cout<<"  ";
											}
									
								cout<<endl<<endl;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}	
							break;
						
							case 'B':
								int x;
									
								cout<<"------Tugas Latihan 12_1 SORTING-----"<<endl;
								cout<<"     Program Penggunaan Sorting "<<endl;
								cout<<"--------------------------------------"<<endl;
								
									qsort((void*)list,5,sizeof(list[0]), sort_function);
									for (x=0; x<5; x++)
									cout<<list[x]<<"   ";
								cout<<endl<<endl;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
							break;
							
							case 'C':
								int n, m;
								cout<<"------Tugas Latihan 12_3 SORTING-----"<<endl;
								cout<<"     Program Penggunaan Sorting "<<endl;
								cout<<"--------------------------------------"<<endl;
								
									for (n=sizei-1; n>0; n--)
									for (m=0; m<n; m++)
										if (numbers [m]>numbers[m+1]);
											SwapMembers (numbers,m, m+1);
										for (n=0; n<sizei; n++)
										cout<<numbers[n]<<", "; 
								cout<<endl<<endl;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
														if (pilih ==1)
															{goto modulpertemuan;}
											
																else
																{
																	cout<<"---* Program Selesai *--";
																	goto selesai;
																}
							break;
							
							case 'D':
								int n1, m1;
								cout<<"--------Tugas Akhir SORTING-----------"<<endl;
								cout<<"     Program Penggunaan Sorting "<<endl;
								cout<<"--------------------------------------"<<endl;
								
										 for(n1=sizea-1;n1>0;n1--)
									    for (m1=0; m1<n1; m1++)
									    	if (numbersa[m1] < numbersa[m1+1])
									    		SwapMembers(numbersa, m1, m1+1);
									    		for (n1=0; n1<sizea; n1++)
									    		cout<<numbersa[n1]<<", ";
									cout<<endl<<endl;
									cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
												{goto modulpertemuan;}
								
													else
													{
														cout<<"---* Program Selesai *--";
														goto selesai;
													}
							break;
								default:
								cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
												if (pilih ==1)
												{goto modulpertemuan;}
								
													else
													{
														cout<<"---* Program Selesai *--";
														goto selesai;
													}		
			break;
			
		}
		
			case 12:
				char pertemuan12;
				cout<<"Pilih File Latihan Yang Ingin Di Running"<<endl;
				cout<<"<A>. LAT 13_1"<<endl;
				cout<<"<B>. LAT 13_2"<<endl;
				cout<<"Pilih Modul Pertemuan :";cin>>pertemuan12;cout<<endl;	
					switch (pertemuan12)
						{
							case 'A':
								{
								
								cout<<"------Tugas Latihan 13_1 SEARCHING-----"<<endl;
								cout<<"     Program Penggunaan Searching "<<endl;
								cout<<"--------------------------------------"<<endl;
											const int array_size =10;
									int array [array_size] = {25, 36, 2, 48, 0, 69, 14, 22, 7, 19};
									cout<<"Isi Dari Array Adalah :"<<endl;
									cout<<"\nArray :"<<"\t\t      Data :"<<endl;
										for (int count = 0; count < array_size; count++)
											{
												cout<<"array [ "<<count<<" ] "<<"\t\t";
												cout<<array[count]<<endl;
											}
										int searching_element = 0;
										int flag= 0;
										cout<<"\n\nMasukan Data Yang Anda Cari = ";
										cin>>searching_element;
										flag = linear_search (array,array_size, searching_element);
											if (flag != -1)
												{
													cout<<"\nData Tersebut Ditemukan Pada Posisi : Array [ "<<flag<<" ]";
												}
											else 
											{
												cout<<"\nData Tersebut Tidak Ditemukan";
												
											}
				
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}
								}
							break;
							
							case 'B':
								{
								
									cout<<"------Tugas Latihan 13_2 SEARCHING-----"<<endl;
									cout<<"     Program Penggunaan Searching "<<endl;
									cout<<"--------------------------------------"<<endl;
										cout<<" isi dari array adalah : "<<endl;
									 	cout<<"\n array:"<<"\t\t data:"<<endl;
									 	for (int count=0; count<array_size13; count++)
											 {
												 cout<<"\t "<<"array["<<count<<"] "<<"\t\t";
												 cout<<array13[count]<<endl;
											 }
									int flag13=0;
									 int searching_element=0;
											 cout<<"\n masukan data yang anda cari = ";
											 cin>>searching_element;
											 flag13 = binary_search(array13,array_size13, searching_element);
											 if(flag13 !=-1)
											 cout<<"\n data tersebut ditemukan pada posisi array[ "<<flag13<<"]";
											 else
											 cout<<"\n data tersebut tidak ditemukan ";
											 
								cout<<endl<<endl;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
										if (pilih ==1)
										{goto modulpertemuan;}
						
											else
											{
												cout<<"---* Program Selesai *--";
												goto selesai;
											}			
								}
							break;
							
							default:
								{
								
									cout<<endl<<endl;
									cout<<"File Latihan Tidak Ada !!"<<endl<<endl;;
								cout<<"Kembali Kepilihan Modul ? < 1= Ya, 2 =Tidak > :";cin>>pilih;
												if (pilih ==1)
												{goto modulpertemuan;}
								
													else
													{
														cout<<"---* Program Selesai *--";
														goto selesai;
													}	
							}
							
							break;
						}
			default:
				cout<<"Modul Yang Dipilih Tidak Ada !!";
		
	}
	selesai:
		cout<<endl<<endl;
		cout<<"\t---E N D---";
	return 0;
}
		

//fungsi pert 13_2 searching start

//fungsi pert 13_2 searching end


