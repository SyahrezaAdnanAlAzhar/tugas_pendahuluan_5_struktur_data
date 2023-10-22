#include <iostream>
#include "tp_5.h"

using namespace std;

void createList_1302223041(list &L) {
    first(L) = NULL;
}

address createNewElement_1302223041(infotype data) {
    address P = new elmList;
    info(P) = data;
    next(P) = NULL;
    return P;
}

void insertLast_1302223041(list &L, address P) {
    address Q;
    if (first(L) == NULL){
        first(L) = P;
    }else{
        Q = first(L);
        while (next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void showAllData_1302223041(list L){
    address P = first(L);
    if (P == NULL){
        cout << "List kosong" << endl;
    }else{
        while (P != NULL){
            cout << info(P);
            P = next(P);
        }
        cout << endl;
    }
}

float vocalPersentage_1302223041(list L){
    address P = first(L);
    int jumlahVokal = 0, jumlahHuruf = 0;
    while (P != NULL){
        jumlahHuruf++;
        if (info(P) == 'A' || info(P) == 'I' || info(P) == 'U' || info(P) == 'E' || info(P) == 'O' ||
            info(P) == 'a' || info(P) == 'i' || info(P) == 'u'  || info(P) == 'e'  || info(P) == 'o'){
            jumlahVokal++;
        }
        P = next(P);
    }
    return (float(jumlahVokal) / float(jumlahHuruf));
}

void showLastK_1302223041(list L, int K){
    address P, Q;
    bool ketemu = false;
    P = first(L);
    while ((P != NULL) && (!ketemu)){
        Q = P;
        for (int i = 1; i <= K; i++){
            Q = next(Q);
        }
        if (Q == NULL){
            ketemu = true;
        }
        if (!ketemu){
            P = next(P);
        }
    }
    cout << info(P);
}

int selectMenu_1302223041(){
    int input = 0;
    cout << "=====Menu=====" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menghitung persentase huruf vokal" << endl;
    cout << "4. Menampilkan karakter data ke-K terakhir" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilihan menu: ";
    cin >> input;

    return input;
}
