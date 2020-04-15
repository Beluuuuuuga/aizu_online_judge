#include <iostream>
using namespace std;

int main(){
    std::string s = "Hello World";
    int i = 0;
    while (i<1000){
        cout << s << endl;
        ++i;
    }
    return 0;
}
