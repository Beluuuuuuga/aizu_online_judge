#include<iostream>
using namespace std;

int main(){
    int m, f, r;
    char s;
    int sum;
    while(1){
        cin >> m >> f >> r;

        if (m == -1 && f == -1 && r == -1) break;
        
        sum = m + f;
        if (m == -1 || f == -1) s = 'F';
        else if (sum >= 80) s = 'A';
        else if (sum < 80 && sum >= 65) s = 'B';
        else if (sum < 65 && sum >= 50) s = 'C';
        else if (sum < 50 && sum >= 30){
            s = 'D';
            if (r >= 50) s = 'C';
        } 
        else s = 'F';
        
        cout << s << endl;
        
    }

    return 0;
}
