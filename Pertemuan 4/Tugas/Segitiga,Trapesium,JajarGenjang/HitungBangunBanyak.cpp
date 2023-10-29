#include<iostream>

using namespace std;

int main() {
    int angkaMenuUtama,
        pilihan1,
        pilihan2,
        pilihan3;

    int sisiAlasTrapesium,
        sisiAtapTrapesium,
        tinggiTrapesium;

    int tinggiSegitiga,
        alasSegitiga;
    
    int alasJajarGenjang,
        tinggiJajarGenjang;

    bool    opsi1,
            opsi2,
            opsi3;

    double  luasSegitiga,
            luasTrapesium,
            luasJajarGenjang;

    string  inputTextHead, 
            inputTextAlas,
            inputTextAtap,
            inputTextTinggi,
            inputTextOutput,
            inputTextLuas;

    string  adalah,
            titikDua,
            equalsBarrier;

    string  ukuranAlas,
            ukuranTinggi,
            ukuranAtap,
            ukuranLuas;

    string  segitiga,
            trapesium,
            jajarGenjang;

    adalah = " adalah : ";
    equalsBarrier = "========================================";
    titikDua = " : ";

    inputTextHead = "Input Program Menghitung ";
    inputTextAlas = "masukkan ukuran alas ";
    inputTextAtap = "masukkan ukuran atap ";
    inputTextTinggi = "masukkan ukuran tinggi ";
    inputTextOutput = "Output Program Menghitung ";
    inputTextLuas = "Menghitung Luas ";
    
    ukuranAlas = "ukuran alas ";
    ukuranTinggi = "ukuran tinggi ";
    ukuranAtap = "ukuran atap ";
    ukuranLuas = "ukuran Luas ";
    
    segitiga = "segitiga";
    trapesium = "trapesium";
    jajarGenjang ="Jajar Genjang";

    cout << endl;
    cout << "Program Menghitung Luas Segitiga, Trapesium dan Jajar Genjang" << endl;
    cout << equalsBarrier << endl;
    cout << "1. " << inputTextLuas << segitiga << endl;
    cout << "2. " << inputTextLuas << trapesium << endl;
    cout << "3. " << inputTextLuas << jajarGenjang << endl;
    cout << "Pilih Bangun Ruang : "; 
    cin >> angkaMenuUtama;

    pilihan1 = 1;
    pilihan2 = 2;
    pilihan3 = 3;

    cout << endl;
    opsi1 = (angkaMenuUtama == pilihan1);
    cout << opsi1 << endl;
    opsi2 = (angkaMenuUtama == pilihan2);
    cout << opsi2 << endl;
    opsi3 = (angkaMenuUtama == pilihan3);
    cout << opsi3 << endl;

    if (opsi2) 
    {
        cout << endl;
        cout << inputTextHead << trapesium << endl;
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
    else if (opsi1)
    { 
        cout << endl;
        cout << inputTextHead << segitiga << endl;
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
    else if (opsi3)
    { 
        cout << endl;
        cout << inputTextHead << jajarGenjang << endl;
        cout << equalsBarrier << endl;
        cout << inputTextAlas << jajarGenjang << titikDua;
        cin >> alasJajarGenjang;
        cout << inputTextTinggi << jajarGenjang << titikDua;
        cin >> tinggiJajarGenjang;
        cout << endl;

        cout << inputTextOutput << trapesium << endl;
        cout << equalsBarrier << endl;
        cout << ukuranAlas << jajarGenjang << adalah << alasJajarGenjang << endl;
        
        cout << ukuranTinggi << jajarGenjang << adalah << tinggiJajarGenjang << endl;

        luasJajarGenjang = (double)alasJajarGenjang * (double)tinggiJajarGenjang;
        
        cout << ukuranLuas << jajarGenjang << adalah << luasJajarGenjang << endl;
        cout << endl;
        return 0; 
    } 
    else 
    {
        cout << endl;
        cout << "perintah tidak dimengerti, program berakhir." << endl;
        cout << endl;
        return 0;
    }
    return 0;   
}