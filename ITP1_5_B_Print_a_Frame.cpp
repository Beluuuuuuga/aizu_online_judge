#include <iostream>
using namespace std;

int main(){
    int H, W;
    while(true){
        cin >> H >> W;
        if (H == 0 && W == 0) break;
        for (int i = 0; i < H; ++i){
            if (i == 0 || i == H - 1){
                for (int j = 0; j < W; ++j){
                    cout << "#";
                }
            }else{
                for (int j = 0; j < W; ++j){
                    if (j == 0 || j == W - 1){
                        cout << "#";
                    }else{
                        cout << ".";
                    }
                } 
            }
            cout << endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
