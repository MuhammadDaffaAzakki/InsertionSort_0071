#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input()
{ // Produce Input
while (true)
{
cout << "Masukkan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
cin >> n; // memanggil variable inputan n

if (n <= 20)
{ // Membuat Kondisi n tidak lebih dari 20
break;
}
else
{
cout << "\nArray yang anda masukkan maksimal 20 Element.\n"; // Menampilkan Pesan Jika data lebih dari 20
}
}
cout << endl; // Membuat jarak per baris program
cout << "======================" << endl;
cout << "Masukkan Element Array" << endl;
cout << "======================" << endl;

for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
{
cout << "Data ke-" << (i + 1) << ": "; // Memasukkan atau menginput nilai data n
cin >> arr[i]; // Menyimpan nilai data n kedalam array arr
}
}

void insertionSort()
{ // Procedure InsertionSort

    int temp; // Membuat variable data temporer atau menyimpan sementara
    int j, i; // Membuat variable j sebagai penanda
    
    for (i = 1; i <= n - 1; i++)
    { // Step 1
    
    temp = arr[i]; // Step 2
    
    j = i - 1; // Step 3
    
    while (j >= 0 && arr[j] > temp) // Step 4
    {
    arr[j + 1 ] = arr[j]; //Step 4a
    j--; // Step 4b
    }
    
    arr[j + 1] = temp; // Step 5
    } 
    }
    
    void display()
    {
    cout << endl; // Output baris Kosong
    cout << "==================================" << endl;
    cout << "Total Pass = " << n - 1 << endl; //count element movement
    cout << "==================================" << endl; // Output kelayar
    cout << "Element Array yang telah tersusun" << endl; // Output kelayar
    cout << "==================================" << endl; // Output kelayar
    
   