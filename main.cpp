#include <iostream>
#include <array>
#include <algorithm> // Library 

using namespace std;

int main(){
    system("cls"); // Membersihkan Layar terminal

    array<int, 10> Angka; // Deklarasi Variabel
    int nomor = 1, AngkaCari; // Deklarasi Variabel
    bool Hasil; // Variabel Hasil

    cout << "Masukkan 10 Angka Secara Acak" << endl;
    
    for (int &A : Angka){
        cout << "Masukkan Angka Ke-" << nomor << " : ";
        cin >> A;
        nomor++;
    }
    cout << endl << "Masukkan Angka yang dicari : ";
    cin >> AngkaCari;
    sort(Angka.begin(), Angka.end());

    Hasil = binary_search(Angka.begin(), Angka.end(), AngkaCari);

    if (Hasil == 1){
        cout << "Angka Ditemukan";
    }else{
        cout << "Angka Tidak Ada";
    }

    cout << endl << endl;
    
    
    cin.get();
    return 0;
}