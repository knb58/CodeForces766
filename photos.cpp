#include <iostream>

using namespace std;

int main(){
    int rows=0, cols=0;
    char color=0;
    cin>>rows;
    cin>>cols;
    for(int i=0; i<rows*cols; i++){
        cin>>color;
        if (color=='C' || color=='M' || color=='Y'){
            cout<<"#Color"<<endl;
            return 0;
        }
    }
    cout<<"#Black&White"<<endl;
return 0;
}
