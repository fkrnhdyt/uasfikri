# Ujian Akhir Semester 
<br>Mata Kuliah &emsp;: Dasar Pemrograman
<br> Nama	 &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	: Fikri Nur Hidayat
<br>NIM		  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&emsp;&nbsp;&nbsp;&nbsp;: 1227050046
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Pada soal no 1
<br>Menjelaskan tentang  mencari nilai menggunakan array 2 dimensi dengan dibalikannya yg semulanya nilai baris dibalik menjadi kolom dan nilai kolom mejadi baris.
<br>Sedangkan pada no 2
<br>Menjelaskan tentang cara mencari nilai deret bilangan matematika yang tidak habis dibagi 3,5 dan 7 menggunakan array 2 dimensi
## Source Code
Soal no 1
 ```cpp
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
}  ```
  Soal no 2
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
No 1
<img src="https://github.com/fkrnhdyt/uasfikri/blob/main/Screenshot%202022-12-22%20142902.png">

No 2
<img src="https://github.com/fkrnhdyt/uasfikri/blob/main/Screenshot%202022-12-22%20142611.png">
