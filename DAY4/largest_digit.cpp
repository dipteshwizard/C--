/*print the largest digit in a number*/
#include<iostream>
int main(){
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;

    int largest_digit = 0;
    int temp = n;
    if (temp == 0) {
        largest_digit = 0;
    } else {
        while (temp != 0) {
            int digit = temp % 10;
            if (digit > largest_digit) {
                largest_digit = digit;
            }
            temp /= 10;
        }
    }
    std::cout << "Largest digit in " << n << " is: " << largest_digit << std::endl;

    return 0;
}