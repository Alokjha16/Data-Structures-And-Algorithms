#include<iostream>
using namespace std;
int multi(int n){
    if(n == 1){
        return 1;
        
    }
    return n * multi(n-1);
    cout<<n<<endl;

}

int main(){
    int n;
    cout <<" Enter a  number:" ;
    cin>>n;

    cout<<multi(n)<<endl;

}