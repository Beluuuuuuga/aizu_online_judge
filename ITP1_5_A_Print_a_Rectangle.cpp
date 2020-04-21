#include <iostream>
using namespace std;

int main(){
    int H, W;
    while(true){
        cin >> H >> W;
        if (H == 0 && W == 0) break;
        for (int i = 0; i < H; ++i){
            std::string s = "";
            for (int j = 0; j < W; ++j){
                s = s + "#";
            }
            cout << s << endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
