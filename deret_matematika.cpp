#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"Deret matematika bilangan yang tidak habis dibagi 3,5 dan 7"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    int array[20][20], baris, kolom;
    cout << "masukkan jumlah baris : ";cin >> baris;
    cout << "masukkan jumlah kolom : ";cin >> kolom;
    cout << "masukkan nilai : " << endl;
    for(int z = 0; z < baris ;z++){
        for(int j = 0; j < kolom ;j++){
            cout << "masukkan nilai baris ke-" << z+1 << " kolom ke-" << j+1 << " : ";
            cin >> array[z][j];
        }
    }
    cout << "nilai awal :" << endl;
    for(int z = 0; z < baris ;z++){
        for(int j = 0; j < kolom ;j++){
            cout << array[z][j] << " ";
        }
        cout << endl;
    }
    cout << "nilai akhir :" << endl;
    for(int z = 0; z < baris ;z++){
            for(int j = 0; j < kolom ;j++){
                if(array[z][j]%3 != 0 && array[z][j]%5 != 0 && array[z][j]%7 != 0){
                    cout << array[z][j] << " ";
                }
                else{
                }
            }
}
    getch();
    return 0;
}
