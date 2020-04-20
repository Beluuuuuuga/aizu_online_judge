#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double r;
    double pi = 3.141592653589;
    cin >> r;
    
    double area = r*r*pi;
    double circumference = 2*r*pi;
    
    // 桁数を揃える
    cout << std::setprecision(16) << std:: fixed <<  area << " " << circumference;
    
    return 0;
}
