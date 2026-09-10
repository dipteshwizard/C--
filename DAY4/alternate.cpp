/*Print the alternate sum of numbers from 1 to n*/
#include <iostream>
int main() {
    int n;
    std::cout << "Enter the range: ";
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    for (int i = 2; i <= n; i += 2) {
        sum -= i;
    }
    std::cout << "Alternate sum of numbers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}