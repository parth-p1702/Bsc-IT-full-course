#include <iostream>
#include <cmath>

using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int number) {
    int originalNumber = number;
    int result = 0;
    int n = countDigits(number);

    while (number != 0) {
        int digit = number % 10;
        result += pow(digit, n);
        number /= 10;
    }

    return result == originalNumber;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
