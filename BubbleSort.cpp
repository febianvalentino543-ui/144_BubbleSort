#include <iostream>
#include <string>
using namespace std;

int arr[20]; // dekalarasi variabel global array a dengan ukuran 20
int n; // deklarasi variabel global n untuk menyimpan banyaknya elemen pada array

void input() {          // prosedur untuk input
    while (true) {
        cout << "Masukkan banyaknya elemen pada array: ";       // output ke layar
        cin >> n;       // input dari pengguna
        if (n <= 20)    // jika n kurang dari atau sama dengan 20 
            break;      // keluar dari loop
        else            // jika n lebih dari 20
            cout << "\nArray dapat memiliki maksimal 20 elemen.\n";     //tampilkan pesan error
    }
}

