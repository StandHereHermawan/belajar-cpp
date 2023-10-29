#include <iostream>

using namespace std;

main(){
    int variabelNilaiA, variabelNilaiB, variabelNilaiC;
    float hasilBagi;

    cout << endl;
    cout << "Masukkan nilai A   : ";
    cin >> variabelNilaiA;
    cout << "Masukkan nilai B   : ";
    cin >> variabelNilaiB;
    cout << endl;
    cout << "=====================" << endl;
    variabelNilaiC = variabelNilaiA + variabelNilaiB;
    cout << "Hasil Penjumlahan      : " << variabelNilaiC << endl;
    variabelNilaiC = variabelNilaiA - variabelNilaiB;
    cout << "Hasil Pengurangan      : " << variabelNilaiC << endl;
    variabelNilaiC = variabelNilaiA * variabelNilaiB;
    cout << "Hasil Perkalian        : " << variabelNilaiC << endl;
    variabelNilaiC = variabelNilaiA / variabelNilaiB;
    cout << "Hasil Pembagian Bulat  : " << variabelNilaiC << endl;
    variabelNilaiC = variabelNilaiA % variabelNilaiB;
    cout << "Hasil Sisa Bagi        : " << variabelNilaiC << endl;
    hasilBagi = (float)variabelNilaiA / (float)variabelNilaiB;
    cout << "Hasil Pembagian Real   : " << hasilBagi << endl;
    cout << endl;
}