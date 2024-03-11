#include <vector>
#include <iostream>
using namespace std;

static int counter = 0;

int fib(int n){
  
    vector<int> fibList;
    fibList.push_back(0);
    fibList.push_back(1);

    for(int index = 2; index <= n; index++){
      counter++;
      fibList[index] = fibList[index - 1] + fibList[index - 2];
    }
    return fibList[n];
}

int main() {
    int n = 7;

   cout << "\nFib of " << n << " = " << fib(n);

   cout << "\n\nCounter: " << counter << endl;
}