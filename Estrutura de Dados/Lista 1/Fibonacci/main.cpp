#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){
    setlocale (LC_ALL,"Portuguese");
    
    int n1=1, n2=1, n;
    
    
    cout<<"\n==========================================================================================\n";
    cout<<"\n-----------------------------------------Fibonacci----------------------------------------\n";
    cout<<"\n==========================================================================================\n";
    cout<<n1<<" - "<<n2<<" - ";
    for (int i=0; i<=15;i++) {
       cout<< (n1+n2) <<" - ";
       n=n1;
       n1=n2;
       n2=n2+n;
    }
    cout<<"\n==========================================================================================\n";
    
    return 0;
}