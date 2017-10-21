#include <iostream>
#include <map>
// Using memoization to turn O(phi ^ n/2) calculation
// of Fibonnaci sequence into an efficient algorithm
// concept and algorithm theory from MIT OpenCourseWare
//
// 10/20/2017
// Adam J. Rock

using namespace std;

map<int, long int> memo;
   
long int fib(int n) {
    map<int, long int>::iterator k;
    long int f = 0;
    cout << endl << "n: " << n;
    k = memo.find(n);
    
    if (k != memo.end()) {
        cout << " - memoizing makes this faster";
        return k->second;
    }
    if (n <= 2) {
        f = 1;
    } else {
        f = fib(n-1) + fib(n-2);
    }
    memo[n] = f;
    return f;

}

int main(int argc, char **argv) {
    int n;
    while (true) {
        cout << "Return the nth Fibonacci Number" << endl;
        cin >> n;
        if (n == -1) 
            return 0;
        long int k = fib(n);
        cout << endl << "The " << n << "th Fibonacci Number is: " << k << endl;
    }
    return 0;
}
