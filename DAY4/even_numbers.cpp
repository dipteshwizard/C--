/*print even numbers from 1 to n*/
#include <iostream>
int main() {
    int n;
    std::cout << "Enter the range: ";
    std::cin >> n;

    std::cout << "Even numbers from 1 to " << n << ":\n";
    for (int i = 2; i <= n; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}