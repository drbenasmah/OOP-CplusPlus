#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int height, width;
  char symbol;

  cout << "Height: " << endl;  // Prompt for height input
  cin >> height;              // Read the height value
  cout << "Width: " << endl;   // Prompt for width input
  cin >> width;               // Read the width value
  cout << "Symbol: " << endl;  // Prompt for symbol input
  cin >> symbol;              // Read the symbol value

  for (int h = 0; h < height; h++)
  {
    for (int w = 0; w < width; w++)
    {
      cout << setw(3) << symbol;  // Print the symbol with fixed width of 3
    }
    cout << endl;  // Move to the next line after printing a row of symbols
  }

  return 0;
}
