#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

main(){

    string nama, alamat, prodi;

    cout << endl;
    cout << "Masukkan nama      : ";
    getline(cin, nama);
    cout << "Masukkan alamat    : ";
    getline(cin,alamat);
    cout << "Masukkan prodi     : ";
    getline(cin,prodi);
    cout << endl;
    cout << "===================" << endl;
    cout << "Nama Anda      : " << nama << endl;
    cout << "Alamat Anda    : " << alamat << endl;
    cout << "Program Studi  : " << prodi << endl; 
    cout << endl;
}