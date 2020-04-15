#include <iostream>
using namespace std;

int main(){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    int left , right , bottom, top;
    left = x - r;
    right = x + r;
    bottom = y - r;
    top = y + r;
    
    if (left < 0 || bottom < 0 || right > W || top > H){ cout << "No" << endl;}
    else {cout << "Yes" << endl;}
    return 0;
}
