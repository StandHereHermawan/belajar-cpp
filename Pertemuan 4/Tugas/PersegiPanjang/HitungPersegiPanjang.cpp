#include<iostream>

using namespace std;

main(){
    int panjang, lebar, luas, keliling;

    cout << endl;
    cout << "Input Program Menghitung persegi panjang" << endl;
    cout << "========================================" << endl;
    cout << "masukkan ukuran panjang persegi panjang    : ";
    cin >> panjang;
    cout << "masukkan ukuran lebar persegi panjang      : ";
    cin >> lebar;
    cout << endl;
    cout << "Output Program Menghitung persegi panjang"<< endl;
    cout << "========================================" << endl;
    cout << "Panjang Persegi panjang adalah     : " << panjang << endl;
    cout << "Lebar Persegi panjang adalah       : " << lebar << endl;
    keliling = (panjang + lebar) * 2;
    cout << "Keliling persegi adalah    : " << keliling << endl;
    luas = panjang * lebar;
    cout << "Luas persegi adalah        : " << luas << endl;
    cout << endl;
}