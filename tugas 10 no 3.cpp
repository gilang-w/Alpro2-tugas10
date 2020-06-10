#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14 //Deklarasi Makro

int main(){
    int r,hasil;
    
    cout<<"Masukkan Radius : ";
    cin>>r;
    
    hasil = PI * pow(r, 2);
    printf("Luas Lingkaran = %d",hasil);
}


//Preprocessor Macro Function
#include <iostream>
using namespace std;

#define MAX(a,b) ((a)>(b)?(a):(b)) //Deklarasi Makro Function

int main(){
    int x,y;
    
    cout<<"Masukkan 2 Angka Untuk Dibandingkan :\n";
    cin>>x;
    cin>>y;
    
    printf("Angka Yang Lebih Besar Adalah = %d",MAX(x,y));
}



