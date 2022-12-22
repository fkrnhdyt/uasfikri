# Ujian Akhir Semester 
<br>Mata Kuliah 	:
<br> Nama		:
<br>NIM		:	
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum


## Source Code
soal no 1
 ```cpp
  #include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //1. input banyaknya baris dan kolom pakai dimensi dua
    //isi dengan nilai
    //setelah diisi tukar baris dan kolom
    int baris, kolom;
    cout << "masukkan banyak baris : ";cin >> baris;
    cout << "masukkan banyak kolom : ";cin >> kolom;
    const int baris_R = baris;
    const int kolom_R = kolom;
    int array[baris_R][kolom_R];
    int tuker[kolom_R][baris_R];
    cout << "masukkan nilai : " << endl;
    for(int i = 0; i < baris_R; i++){
        for(int j = 0; j < kolom_R; j++){
            cout << "baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
            cin >> array[i][j]; 
        }
    }
    cout << "bentuk awal : " << endl;
    for(int i = 0; i < baris_R; i++){
        for(int j = 0; j < kolom_R; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < baris_R; i++){
        for(int j = 0; j < kolom_R; j++){
            tuker[j][i] = array[i][j];
        }
    }
    cout << "bentuk akhir setelah ditukar : " << endl;
    for(int i = 0; i < kolom_R; i++){
        for(int j = 0; j < baris_R; j++){
            cout << tuker[i][j] << " ";
        }
        cout << endl;
    }
      
    getch();         
    return 0;
}
  ```
  soal no 2
  ```cpp
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
  
  
  ```

## Output
no 1
<img src="https://github.com/fkrnhdyt/uasfikri/blob/main/Screenshot%202022-12-22%20142611.png">
