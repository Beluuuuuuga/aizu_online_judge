#include<iostream>
using namespace std;

int main(){
    int n, x;

    while(1){
        cin >> n >> x;
        if (n == 0 && x == 0) break;
        int cnt = 0;
        for (int i = 1; i <= n; ++i){
            for (int j = i + 1; j <= n; ++j){ // それぞれでcontinueする必要がない
                for (int k = j + 1; k <= n; ++k){ // それぞれでcontinueする必要がない
                    if (i + j + k == x) cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    

    return 0;
}
