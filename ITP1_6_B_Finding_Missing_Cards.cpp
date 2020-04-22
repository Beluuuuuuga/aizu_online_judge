#include<iostream>
using namespace std;

int main()
{
    int A[4][13]{0}, n, y;
    char s;
    cin >> n;
    
    for (int i = 0; i < n; ++i){
        cin >> s >> y;
        if (s == 'S') A[0][y-1] = 1;
        if (s == 'H') A[1][y-1] = 1;
        if (s == 'C') A[2][y-1] = 1;
        if (s == 'D') A[3][y-1] = 1;
    }
    
    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 13; ++j){
            if (i == 0 && A[i][j] != 1) cout << "S " << j+1 << endl;
            if (i == 1 && A[i][j] != 1) cout << "H " << j+1 << endl;
            if (i == 2 && A[i][j] != 1) cout << "C " << j+1 << endl;
            if (i == 3 && A[i][j] != 1) cout << "D " << j+1 << endl;
        }
    }

    return 0;
}
