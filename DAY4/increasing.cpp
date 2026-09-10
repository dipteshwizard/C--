/*write a programme to check if the digits in a number are in increasing order*/
#include<iostream>
int main(){
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;

    
    int temp = n;
    int c=0;;
    while (temp != 0) {
        int digit = temp % 10;
        temp/=10;
        if (c > digit) {
            c = digit;
        }
    }
    if (c!=0) {
        std::cout << "True" << std::endl;
    }
    else {
        std::cout << "False" << std::endl;
    }
    return 0;
}