#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b, c, d, r;
    double f;
    cin >> a >> b;
    d = a / b;
    r = a % b;
    f = (double) a / b; // 1.0 * a / b
    // std::setprecision(13)を使用するためにはiomanipが必要
    // std::fixedがないとエラーになる
    cout << d << " " << r << " " << std::setprecision(13) << std::fixed << f << endl;

    return 0;
}
