#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "ENTER THE NUMBER OF ROWS: ";
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            cout<<ch<<" ";
            
        }
        ch++;
    cout << endl;
    
    
    
    }  
      return 0;  
}
