#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main() {
  // uncomment the next line to see the `assert` statment in action
  // assert(2 + 2 == 5);

  // instead, we can use try/catch blocks
  int dividend, divisor, quotient;

  string inpStr = "The input stream is in the fail state.";

  try {
    // ask the user for numbers to do division with
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << endl;

    cout << "Enter the divisor: ";
    cin >> divisor;
    cout << endl;

    // process the user's input
    if (divisor == 0) {
      throw divisor;
    } else if (divisor < 0) {
      throw string("Negative divisor.");
    } else if (!cin) {
      throw inpStr;
    }

    // we only get this far if we don't `throw` an exception
    quotient = dividend / divisor;

    cout << "Quotient = " << quotient << endl;
  }
  catch (int x) {
    // this block matches *any* integer expressions
    cout << "Division by " << x << endl;
  }
  catch (string s) {
    cout << s << endl;
  }
  catch (...) {
    cout << "catch all block" << endl;
  }

  return 0;
}
