#include <iostream>
#include <string>

using namespace std;

class DivisionByZero {
private:
  string message;
public:
  DivisionByZero() {
    message = "Division by zero";
  }
  DivisionByZero(string str) {
    message = str;
  }
  // the `what` function typically returns a relevant error message
  string what() {
    return message;
  }
};

int main() {
  int dividend, divisor, quotient;

  try {
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << endl;

    cout << "Enter the divisor: ";
    cin >> divisor;
    cout << endl;

    if (divisor == 0) {
      throw DivisionByZero();
    } else if (divisor < 0) {
      throw DivisionByZero("negative divisor");
    }

    quotient = dividend / divisor;
    cout << "Quotient: " << quotient << endl;
  }
  catch (DivisionByZero divByZeroObj) {
    cout << "In catch block: " << divByZeroObj.what() << endl;
  }

  return 0;
}
