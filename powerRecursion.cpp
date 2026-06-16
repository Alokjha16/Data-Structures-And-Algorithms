#include<iostream>
using namespace std;
int power(int a, int b){
    if(b == 0){
        return 1;
    }
    return a * power(a , b-1);
}

int main(){
    int num,pow;
    cout << "enter a number:" ;
    cin  >>  num;
    cout << "enter a power:" ;
    cin  >>  pow;
    cout << power(num,pow)<<endl;
   

}