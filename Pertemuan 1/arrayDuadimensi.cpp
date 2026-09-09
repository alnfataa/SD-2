#include <iostream>
using namespace std;

int main(){

    int nilai[3][4] = { //ini merupakan array2 dimensia yang mana [3][4] menunjukan bawha ada 3 baris and 4 kolom
        {80, 75, 90, 85},
        {70, 60, 88, 77},
        {95, 85, 92, 89}
    };
    for(int i=0; i<3; i++){ //ini merupakan perulangan untuk menampilkan mahasiswa
        cout <<"Mahasiswa" << i+1 << ": ";

    
    for(int j = 0; j < 4; j++) { // ini merupakan pengulagan untuk menampilkan mahasiswa 1-3 dan juga nilainya
        cout << nilai[i][j]  << " ";
    }
    cout << endl;
}
return 0;
}
// 3midensi adalah tabel simpelnya