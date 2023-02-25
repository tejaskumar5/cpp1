#include <iostream>
using namespace std;

int main() {
    
    int n, p;

    cout << "Enter two numbers: ";
    cin >> n >> p;

    // check if n is the largest number
    if(n >= p)
        cout << "Largest number: " << n;

    // check if p is the largest number
    else if(p >= n)
        cout << "Largest number: " << p;
  
    return 0;
}
