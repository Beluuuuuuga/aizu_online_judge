#include <iostream>
using namespace std;

int main(){
    int a, b, ans;
    string op;
    while(true){
        cin >> a >> op >> b;
        if (op == "?") break;
        else if ( op == "+") ans = a + b;
        else if ( op == "*") ans = a * b;
        else if ( op == "/") ans = a / b;
        else ans = a - b;
        cout << ans << endl;
    }

    return 0;
}
