#include<iostream>

using namespace std;

int main(){
    int tinggiSegitiga,
        alasSegitiga;

    double luasSegitiga;

    string  inputTextHead, 
            inputTextAlas,
            inputTextTinggi,
            inputTextOutput,
            inputTextLuas;

    string  ukuranAlas,
            ukuranTinggi,
            ukuranLuas;

    string  segitiga;

    string  adalah,
            titikDua,
            equalsBarrier;

    adalah = " adalah : ";
    equalsBarrier = "========================================";
    titikDua = " : ";
    segitiga = "segitiga";

    inputTextOutput = "Output Program Menghitung ";
    inputTextAlas = "masukkan ukuran alas ";
    inputTextTinggi = "masukkan ukuran tinggi ";

    ukuranAlas = "ukuran alas ";
    ukuranTinggi = "ukuran tinggi ";
    ukuranLuas = "ukuran Luas ";

    cout << endl;
    cout << "Program Menghitung Luas Segitiga" << endl;
    cout << equalsBarrier << endl;
    cout << inputTextAlas << segitiga << titikDua;
    cin >> alasSegitiga;
    cout << inputTextTinggi << segitiga << titikDua;
    cin >> tinggiSegitiga;
    cout << endl;
   
    cout << inputTextOutput << segitiga << endl;
    cout << equalsBarrier << endl;
    cout << ukuranAlas <<  segitiga << adalah << alasSegitiga << endl;
    cout << ukuranTinggi << segitiga << adalah << tinggiSegitiga << endl;
    
    luasSegitiga = 0.5 * (double)alasSegitiga * (double)tinggiSegitiga;
    
    cout << ukuranLuas << segitiga << adalah << luasSegitiga << endl;
    cout << endl;
    
    return 0;
}