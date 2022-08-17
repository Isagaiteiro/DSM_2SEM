#include <iostream>
#include <locale>
using namespace std;

//Fazer um programaque imprime,em formato detabela,a tabuada de 1 a 9.

int main(){
    setlocale(LC_ALL, "portuguese");
    int x=1;
    
    do {
        cout<<"Tabuada do "<< x <<" | \n";
        for(int i=0; i<=10; i++ ){
            cout<<x<< " x " <<i << " = " << x*i<<endl;
        }
        cout<<"--------------\n";
        x++;
    } while (x<=9);
}
