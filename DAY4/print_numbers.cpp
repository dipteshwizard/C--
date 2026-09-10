/*print numbers from 1 to n*/
#include <iostream>
int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "Numbers from 1 to " << n << ":\n";
    for (int i = 1; i <= n; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}