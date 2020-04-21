#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    long long sum = 0; // long long にしないとエラーが出る
    int max = -10000000;
    int min = 10000000;
    cin >> n;
    int A[n-1];
    int i = 0;
    while(i<n){
        cin >> A[i];
        sum += A[i];
        max = std::max(A[i], max);
        min = std::min(A[i], min);
        ++i;
    }
    cout << min << " " << max << " " << sum << endl;

    return 0;
}
