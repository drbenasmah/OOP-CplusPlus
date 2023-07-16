#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> egArray = {2, 4, 4, 6, 1, 9};

  int evenSum = 0, oddProduct = 1;

  for (int i = 0; i < egArray.size(); i++) {
    int n = egArray[i];

    if (n % 2 == 0) {
      evenSum += n;
    } else {
      oddProduct *= n;
    }
  }

  cout << "Even Sum: " << evenSum << endl;
  cout << "Odd Sum: " << oddProduct << endl;

  return 0;
}
