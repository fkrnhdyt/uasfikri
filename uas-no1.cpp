#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int baris, kolom;
    cout << "masukkan banyak baris : ";cin >> baris;
    cout << "masukkan banyak kolom : ";cin >> kolom;
    const int baris_z = baris;
    const int kolom_z = kolom;
    int array[baris_z][kolom_z];
    int tuker[kolom_z][baris_z];
    cout << "masukkan nilai : " << endl;
    for(int i = 0; i < baris_z; i++){
        for(int j = 0; j < kolom_z; j++){
            cout << "baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> array[i][j]; 
        }
    }
    cout << "bentuk awal : " << endl;
    for(int i = 0; i < baris_z; i++){
        for(int j = 0; j < kolom_z; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < baris_z; i++){
        for(int j = 0; j < kolom_z; j++){
            tuker[j][i] = array[i][j];
        }
    }
    cout << "bentuk akhir setelah ditukar : " << endl;
    for(int i = 0; i < kolom_z; i++){
        for(int j = 0; j < baris_z; j++){
            cout << tuker[i][j] << " ";
        }
        cout << endl;
    }
      
    getch();         
    return 0;
}
