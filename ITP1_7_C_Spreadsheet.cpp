#include<iostream>
using namespace std;

int main(){
    int r, c, hsum, hsum2, vsum, vsum2;
    cin >> r >> c;
    int A[200][200];
    for (int i = 0; i < r; ++i){
        hsum = 0;
        for (int j = 0; j < c; ++j){
            cin >> A[i][j];
            hsum += A[i][j];
        }
        A[i][c] = hsum;
        hsum2 += hsum;
    }
    
    // すでに行の合計は求めている
    for (int j = 0; j <= c; ++j){
        vsum = 0;
        for (int i = 0; i < r; ++i){
            vsum += A[i][j];
        }
        A[r][j] = vsum;
    }
    
    
    for (int i = 0; i <= r; ++i){
        for (int j = 0; j <= c; ++j){
            if (j == 0) cout << A[i][j];
            else cout << " " << A[i][j];
        }
        cout << endl;
    }

    return 0;
}
