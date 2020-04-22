#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int A[100][100];
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) cin >> A[i][j]; 
    }
    
    int B[100];
    for (int i = 0; i < m; ++i) cin >> B[i];
    
    
    for (int i = 0; i < n; ++i){
        int ans = 0;
        for (int j = 0; j < m; ++j){
            ans += A[i][j] * B[j];
        }
        cout << ans << endl;
    }

    return 0;
}
