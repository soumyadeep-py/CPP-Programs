#include<iostream>
using namespace std;

int main() { 
    while(true) {
        int n, sum = 0;
        cout << "Enter a number (or -1 to exit): ";
        cin >> n;
        if(n == -1) {
            break;
        }
        sum += n;
        cout << "Current Sum: " << sum << endl;
    }
    return 0;
}