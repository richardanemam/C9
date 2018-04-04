#include<iostream>
using namespace std;

    bool espelho(int a, int b){
        int d4a, d3a, d2a, d1a, d4b, d3b, d2b, d1b;
        d4a = a%10;
        a /= 10;
        d3a = a%10;
        a /= 10;
        d2a = a%10;
        d1a = a/10;
    
        d4b = b%10;
        b /= 10;
        d3b = b%10;
        b /= 10;
        d2b = b%10;
        d1b = b/10;
    
        return (d1a==d4b && d2a==d3b && d3a==d2b && d4a==d1b);
    }

    int main(){
        int a, b;
    
        cin >> a >> b;
        cout << (espelho(a,b)? "":"nao") << "espelho"<< endl;
        return 0;
    }