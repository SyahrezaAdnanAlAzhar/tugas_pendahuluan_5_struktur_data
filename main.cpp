#include <iostream>
#include "tp_5.h"

using namespace std;

int main()
{
    int pilihan = 0, N, pilihKata, pilihKarakter;
    list arrayKata[N];


    pilihan = selectMenu_1302223041();

    while (pilihan != 0){
        switch(pilihan){

        case 1:
            cout << "Jumlah data yang akan ditambahkan: ";
            cin >> N;
            cout << "Masukkan tiap huruf pada kata yang anda inginkan." << endl;
            cout << "Akhiri dengan tanda titik (.)" << endl;

            for (int i = 0; i < N; i++){
                createList_1302223041(arrayKata[i]);

                infotype kata = '!';
                address pKata;

                cout << "Masukkan kata ke-"<< i+1 << endl;
                while (kata != '.'){
                    cout << "Masukkan tiap huruf: ";
                    cin >> kata;
                    if (kata != '.'){
                        pKata = createNewElement_1302223041(kata);
                        insertLast_1302223041(arrayKata[i], pKata);
                    }
                }
                cout << "Kata ke-" << i+1 << ", berhasil dimasukkan" << endl;
                cout << "Kata tersebut adalah ";
                showAllData_1302223041(arrayKata[i]);
                cout << endl << endl;
            }

            break;

        case 2:
            for (int i = 0; i < N; i++){
                cout << "Kata ke-" << i+1 << endl;
                showAllData_1302223041(arrayKata[i]);
            }
            cout << endl << endl;
            break;

        case 3:
            float persentase;
            cout << "Pilih kata ke berapa yang ingin anda hitung :";
            cin >> pilihKata;
            cout << "Kata yang dipilih adalah ";
            showAllData_1302223041(arrayKata[pilihKata-1]);
            persentase = vocalPersentage_1302223041(arrayKata[pilihKata-1]) * 100;
            cout << "Persentase huruf vokal dari kata ke-" << pilihKata << " adalah " << persentase << "%" << endl << endl;
            break;

        case 4:
            cout << "Pilih kata ke berapa yang ingin anda tampilkan :";
            cin >> pilihKata;
            cout << "Kata yang dipilih adalah ";
            showAllData_1302223041(arrayKata[pilihKata-1]);
            cout << "Karakter ke berapa yang ingin ditampilkan :";
            cin >> pilihKarakter;
            cout << "Karakternya adalah ";
            showLastK_1302223041(arrayKata[pilihKata-1], pilihKarakter);
            cout << endl << endl;
            break;
        }
        pilihan = selectMenu_1302223041();
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;


    return 0;
}
