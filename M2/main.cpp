#include <iostream>

using namespace std;
int main()
{
    int num1, num2;
    float numFloat1, numFloat2;

    cout << "Input Num 1: ";
    cin >> num1;
    cout << "Input Num 2: ";
    cin >> num2;

    printf("Hasil %d + %d adalah %d \n", num1, num2, num1 + num2);
    printf("Hasil %d - %d adalah %d \n", num1, num2, num1 - num2);
    printf("Hasil %d * %d adalah %d \n", num1, num2, num1 * num2);

    numFloat1 = num1;
    numFloat2 = num2;
    printf("Hasil %d / %d adalah %f \n", num1, num2, numFloat1 / numFloat2);

    return 0;
}
