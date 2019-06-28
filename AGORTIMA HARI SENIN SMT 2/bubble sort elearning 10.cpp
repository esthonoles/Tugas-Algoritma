#include <iostream>
using namespace std;

int data[5], data2[5];

int jdata;

void value(int a, int b)

{

 int x;

 x = data[b];

 data[b] = data[a];

 data[a] = x;

}



void bubble_sort()

{

 for(int i=1; i<=jdata; i++)

 {

  for(int k=jdata; k>=i; k--)

  {

   if(data[k] < data[k-1])

   {

    value(k, k-1);

   }

  }

 }

}

main()

{

 cout << "Masukkan jumlah data: ";

 cin >> jdata;

 cout << endl;

 for(int i=1; i<=jdata; i++)

 {

  cout << "Masukkan data ke-" << i << ": ";

  cin >> data[i];

  data2[i] = data[i];
  
 }
	cout<<"Data Sebelum Diurutkan "<<endl;
for (int i=1; i<=jdata; i++)
{

  cout<<data[i]<<"  ";
}


 bubble_sort();

 

 cout << "\nData Setelah diurutkan" << endl;

 for(int i=1; i<=jdata; i++)

 {

  cout << data[i] << " ";

 }

 cout << endl;

 system("pause");

}
