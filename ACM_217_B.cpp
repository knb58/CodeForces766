#include<iostream>
#include<algorithm>

using namespace std;
 int arr[100001];
int main(){
    int a,b;
    cin>>a;

    for(int i=0; i<a; i++){
        cin>>b;
        arr[i]=b;
    }

    sort(arr,arr+a);

    bool good=false;

    for(int i=0; i<a-2; i++){
        if((arr[i]+arr[i+1]) > (arr[i+2])){
            good=true;
            break;
        }
    }

    if(good){ cout << "YES";}
    else{ cout<< "NO";}

return 0;
}
