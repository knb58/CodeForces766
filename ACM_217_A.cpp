#include <iostream>

using namespace std;

int main(){

    string a,b;
    cin>>a >>b;

    if (a == b){ cout << -1; }
    else if( b.length() > a.length()){ cout << b.length(); }
    else if( a.length() > b.length()){ cout << a.length(); }
    else { cout<<a.length(); }

    return 0;
}
