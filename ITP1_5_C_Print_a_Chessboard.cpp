#include <iostream>
using namespace std;

int main(){
    int H, W;
    while(true){
        cin >> H >> W;
        if (H == 0 && W == 0) break;
        for (int i = 0; i < H; ++i){
            for (int j = 0; j < W; ++j){
                if (i % 2 == 1){
                    if (j % 2 == 1) cout << "#";
                    else cout << ".";
                }else{
                    if (j % 2 == 0) cout << "#";
                    else cout << ".";                    
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
