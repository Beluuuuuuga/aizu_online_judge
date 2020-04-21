#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int sum = 0;
    int max = -10000000;
    int min = 10000000;
    cin >> n;
    int A[n-1];
    int i = 0;
    while(i<n){
        cin >> A[i];
        sum += A[i];
        if (A[i] >= max) max = A[i];
        if (A[i] <= min) min = A[i];
        ++i;
    }
    cout << min << " " << max << " " << sum << endl;

    return 0;
}
