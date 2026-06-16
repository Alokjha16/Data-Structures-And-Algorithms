// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "ENTER THE NUMBER OF ROWS: ";
//     cin >> n;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j <= i; j++){
//             cout<<"*"<<" ";
    
//         }  
//         cout << endl;
    
    
//     }
//     return 0;  
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "ENTER THE NUMBER OF ROWS: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n+1-i; j++){
        
            cout<<"*"<<" ";
            
        }  
        cout << endl;
    
    
    }
    return 0;  
}