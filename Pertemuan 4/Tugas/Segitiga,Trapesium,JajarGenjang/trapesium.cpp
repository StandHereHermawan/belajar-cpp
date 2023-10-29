#include<iostream>

using namespace std;

int main(){

    int sisiAlasTrapesium,
        sisiAtapTrapesium,
        tinggiTrapesium;

    double  luasTrapesium;

    string  inputTextHead, 
            inputTextAlas,
            inputTextAtap,
            inputTextTinggi,
            inputTextOutput;

    string  trapesium;
    
    string  adalah,
            titikDua,
            equalsBarrier;

    string  ukuranAlas,
            ukuranTinggi,
            ukuranAtap,
            ukuranLuas;

    adalah = " adalah : ";
    equalsBarrier = "========================================";
    titikDua = " : ";

    inputTextOutput = "Output Program Menghitung ";
    inputTextAlas = "masukkan ukuran alas ";
    inputTextTinggi = "masukkan ukuran tinggi ";
    inputTextAtap = "masukkan ukuran atap ";

    ukuranAlas = "ukuran alas ";
    ukuranTinggi = "ukuran tinggi ";
    ukuranLuas = "ukuran Luas ";
    ukuranAtap = "ukuran atap ";

    trapesium = "trapesium";    
    
    cout << endl;
    cout << "Program Menghitung Luas Trapesium." << endl;
    cout << equalsBarrier << endl;
    
    cout << inputTextAlas << trapesium << titikDua;
    cin >> sisiAlasTrapesium;
    
    cout << inputTextTinggi << trapesium << titikDua;
    cin >> tinggiTrapesium;
    
    cout << inputTextAtap << trapesium << titikDua;
    cin >> sisiAtapTrapesium;
    cout << endl;

    cout << inputTextOutput << trapesium << endl;
    cout << equalsBarrier << endl;
    cout << ukuranAlas << trapesium << adalah << sisiAlasTrapesium << endl;
    cout << ukuranAtap << trapesium << adalah << sisiAtapTrapesium << endl;
    cout << ukuranTinggi << trapesium << adalah << tinggiTrapesium << endl;
    
    luasTrapesium = 0.5*((double)sisiAlasTrapesium + (double)sisiAtapTrapesium)*(double)tinggiTrapesium;
    
    cout << ukuranLuas << trapesium << adalah << luasTrapesium << endl;
    cout << endl;
    return 0;
}