#include <iostream>
using namespace std;

int main() {
    int  n;
    bool isPrime = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    
    if (n == 0 || n == 1) {
        isPrime = 0;
    }
    else {
        for (int i = 2; i <= n/2; ++i) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime){
        cout << n << " is a prime number";
    }
    else{
        cout << n << " is not a prime number";
}
    return 0;
}