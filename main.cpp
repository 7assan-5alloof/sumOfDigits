#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;

    int sum = 0;
    int number;
    int numberWorking;
    while (true)
    {
        cout << "Enter a number: ";
        cin >> number;
        numberWorking = number;
        while (numberWorking > 0)
        {
            sum += numberWorking % 10;
            numberWorking /= 10;
        }

        cout << "The sum of digits of " << number << " is " << sum << endl;
    }
    return 0;
}
