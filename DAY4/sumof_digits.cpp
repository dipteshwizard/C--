/*print sum of digits of a number*/
#include <iostream>
int main() {
    int n;
    std::cout << "Enter the range: ";
    std::cin >> n;

    int sum = 0;
    int temp = n;
    if (temp == 0) {
        sum = 0;
    } else {
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }
    std::cout << "Sum of digits in " << n << " is: " << sum << std::endl;

    return 0;
}