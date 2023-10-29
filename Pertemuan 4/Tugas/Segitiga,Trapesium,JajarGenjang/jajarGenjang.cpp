#include<iostream>

using namespace std;

int main(){
    int alasJajarGenjang,
        tinggiJajarGenjang;

    double luasJajarGenjang;

    string  inputTextHead, 
            inputTextAlas,
            inputTextTinggi,
            inputTextOutput,
            inputTextLuas;

    string  ukuranAlas,
            ukuranTinggi,
            ukuranLuas;

    string  jajarGenjang;

    string  adalah,
            titikDua,
            equalsBarrier;

    adalah = " adalah : ";
    equalsBarrier = "========================================";
    titikDua = " : ";
    jajarGenjang ="Jajar Genjang";

    inputTextOutput = "Output Program Menghitung ";
    inputTextAlas = "masukkan ukuran alas ";
    inputTextTinggi = "masukkan ukuran tinggi ";

    ukuranAlas = "ukuran alas ";
    ukuranTinggi = "ukuran tinggi ";
    ukuranLuas = "ukuran Luas ";

    cout << endl;
    cout << "Program Menghitung Luas " << jajarGenjang << endl;
    cout << endl;
    cout << inputTextHead << jajarGenjang << endl;
    cout << equalsBarrier << endl;
    cout << inputTextAlas << jajarGenjang << titikDua << endl;
    cin >> alasJajarGenjang;
    cout << inputTextTinggi << jajarGenjang << titikDua << endl;
    cin >> tinggiJajarGenjang;
    cout << endl;

    cout << inputTextOutput << jajarGenjang << endl;
    cout << equalsBarrier << endl;
    cout << ukuranAlas << jajarGenjang << adalah << alasJajarGenjang << endl;
    cout << ukuranTinggi << jajarGenjang << adalah << tinggiJajarGenjang << endl;
    
    luasJajarGenjang = (double)alasJajarGenjang * (double)tinggiJajarGenjang;
    
    cout << ukuranLuas << jajarGenjang << adalah << luasJajarGenjang << endl;
    cout << endl;    
    return 0;
}