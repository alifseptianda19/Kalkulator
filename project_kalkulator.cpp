#include<iostream>
using namespace std;

int main(){

    double num1,num2, hasil;
    int pilihan;

        cout << " Kalkulator Sederhana\n " << endl;
        cout << "Pilihan operasi kalkulator :" << endl;
        cout << "1. Pertambahan\n" << endl;
        cout << "2. Pengurang\n" << endl;
        cout << "3. Perkalian\n" << endl;
        cout << "4. Pembagian\n" << endl;

        cout << "Masukkan pilihan (1/2/3/4): " << endl;
        cin >> pilihan;

        cout << "Masukkan angka pertama: " << endl;
        cin >> num1;
        cout << "Masukkan angka kedua: " << endl;
        cin >> num2;

    switch (pilihan){
        case 1:
            cout << " Hasilnya adalah : " << num1 + num2 << endl;
            break;

        case 2:
            cout << " Hasilnya adalah : " << num1 - num2 << endl;
            break;

        case 3:
            cout << " Hasilnya adalah : " << num1 * num2 << endl;
            break;

        case 4:
            if (num2 != 0)
            cout << " Hasilnya adalah: " << num1 / num2 << endl;

            else
            cout << " Error !!! Pembagian tidak boleh nol." << endl;
            break;
            default:
                cout << " Pilihan tidak diketahui !" << endl;
    }


return 0;
}
