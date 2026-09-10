/*count the number of digits in a number*/
#include <iostream>
int main() {
    int n;
    std::cout << "Enter the range: ";
    std::cin >> n;

    int count = 0;
    int temp = n;
    if (temp == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }
    std::cout << "Number of digits in " << n << " is: " << count << std::endl;

    return 0;
}   