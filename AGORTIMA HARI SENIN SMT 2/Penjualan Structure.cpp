#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>

using namespace std;
		
		struct dt_penjualan{
			char barang[50];
			int harga;
			int jumlah;
			int g_total;
			int t_pembelian;
			int bayar;
		}transaksi[5];
		
	int main()
	
	{
			cout<<"================================"<<endl;
			cout<<"|      DATA PENJUALAN BARANG 	|"<<endl;
			cout<<"|	  PT. SURYA KENCANA NO 1    |"<<endl;
			cout<<"================================="<<endl<<endl;
		int i, t_pembelian=0, looping;
				cout<<"  --TRANSAKSI PENJUALAN BARANG--"<<endl<<endl;
				
				for(i=1; i<6; i++){
				cout<<"  Masukkan Data Transaksi Barang "<<endl;
				cout<<"+--------------------------------+"<<endl;
				cout<<"|Nama Barang   :"; cin>> transaksi[i].barang;cout<<endl;
				cout<<"|Harga Barang  :"; cin>>transaksi[i].harga;cout<<endl;
				cout<<"|Jumlah Barang :"; cin>>transaksi[i].jumlah;cout<<endl;
				transaksi[i].g_total=transaksi[i].harga*transaksi[i].jumlah;
				cout<<"|Grand Total   :"<<transaksi[i].g_total<<endl;
				
				
					if (transaksi[i].g_total>=50000){
						transaksi[i].t_pembelian=transaksi[i].g_total*0.2;
						transaksi[i].bayar=transaksi[i].g_total-transaksi[i].t_pembelian;
				cout<<"|Diskon        :"<<transaksi[i].t_pembelian<<endl;
				cout<<"|Bayar         :"<<transaksi[i].g_total-transaksi[i].t_pembelian<<endl;
			}
					else 
							if(transaksi[i].g_total>=25000){
						transaksi[i].t_pembelian=transaksi[i].g_total*0.1;
						transaksi[i].bayar=transaksi[i].g_total-transaksi[i].t_pembelian;
				cout<<"|Diskon        :"<<transaksi[i].t_pembelian<<endl;
				cout<<"|Bayar         :"<<transaksi[i].g_total-transaksi[i].t_pembelian<<endl;
					}	
					else
					{
				cout<<"|Diskon        : 0"<<endl;
				cout<<"|Bayar         :"<<transaksi[i].g_total-transaksi[i].t_pembelian<<endl;
					}
				cout<<"+--------------------------------+"<<endl<<endl;
				
				
				
				}
				system("cls");
			cout<<"==========================================================================="<<endl;
			cout<<"|                            DATA PENJUALAN BARANG                      	|"<<endl;
			cout<<"|	                        PT. SURYA KENCANA NO 1                      |"<<endl;
			cout<<"============================================================================"<<endl<<endl;
			cout.flags(ios::left);
			cout<<setw(15)<<"NO   NAMA BARANG    HARGA    JUMLAH   SUBTOTAL   DISKON     TOTAL BAYAR"<<endl;
			cout<<"       -----------------------------------------------------------------------"<<endl;
			
				for(looping=1; looping<6; looping++){
					cout<<setiosflags(ios::left)<<setw(7)<<looping;
						cout<<setiosflags(ios::left)<<setw(15)<<transaksi[looping].barang;
						cout<<setiosflags(ios::left)<<setw(10)<<transaksi[looping].harga;
						cout<<setiosflags(ios::left)<<setw(7)<<transaksi[looping].jumlah;
						cout<<setiosflags(ios::left)<<setw(10)<<transaksi[looping].g_total;
						cout<<setiosflags(ios::left)<<setw(10)<<transaksi[looping].t_pembelian;
						cout<<setiosflags(ios::left)<<setw(10)<<transaksi[looping].bayar;
					cout<<endl;
				}
				cout<<endl;
				cout<<"                       \n*** T E R I M A  K A S I H ***";
				getch();
			return 0;	
		
			}							

