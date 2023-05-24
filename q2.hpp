#include <iostream>
#include <iomanip>
using namespace std;

void getInput(int &n1, int &n2, int &n3)
{
    cout << "Enter three numbers:";
    cin >> n1 >> n2 >> n3;
}

int findMin(int n1, int n2, int n3)
{
    int min = n1;
    if (n2 < min)
        min = n2;
    if (n3 < min)
        min = n3;
    return min;
}

void printResult(int n1, int n2, int n3, int min)
{
    cout << "Numbers: " << n1 << ", " << n2 << ", " << n3 << endl;
    cout << "Minimum: " << min << endl;
}