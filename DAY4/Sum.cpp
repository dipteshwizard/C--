/*print sum of numbers from 1 to n*/
#include <iostream>
int main() {
    int n;
    std::cout << "Enter the range: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    std::cout << "Sum of numbers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}