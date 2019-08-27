#include <iostream>

using namespace std;

int main()
{
    long long int number, length = 0;

    cout << "Enter the Number:";
    cin >> number;

    while(number != 0){
        number = number/10;
        length++;
    }
    cout << "Length of the number:" << length << endl;
    return 0;
}
