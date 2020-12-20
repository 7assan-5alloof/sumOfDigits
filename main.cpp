#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int numberWorking = number;
    for (int i = 10; numberWorking > 0;)
    {
        numberWorking %= i;
        sum += numberWorking;
        i *= 10;
    }

    return 0;
}
