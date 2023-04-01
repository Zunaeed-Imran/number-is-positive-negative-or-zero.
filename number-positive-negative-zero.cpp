#include <iostream>

using namespace std;

int main () {
  int num;

  cout << "Enter Any Number: ";
  cin >> num;

  if (num > 0) {
    cout << num << " is positive ";
  } else if (num < 0  ){
    cout << "Number is Negative ";
  } else {
    cout << num << "Number is Zero ";
  };

  return 0;
}