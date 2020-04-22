#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int A[n];
    int i = 0;
    while (i < n){
        cin >> A[i];
        ++i;
    }
    cout << A[n-1];
    for (int j = n - 2; j >= 0; --j){
        cout << " " << A[j];
    }
    cout << endl;
    
    return 0;
}
