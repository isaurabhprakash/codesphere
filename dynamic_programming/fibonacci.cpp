#include <iostream>
#include <vector>

long long fib(int n, std::vector<long long> &fibArr)
{
    if (n == 0 || n == 1)
        return n;

    if (fibArr[n] != -1)
        return fibArr[n];

    fibArr[n] = fib(n - 1, fibArr) + fib(n - 2, fibArr);

    return fibArr[n];
}

int main()
{
    int n;

    std::cout << "Enter (-) number to exit\n";

    while (true)
    {
        std::cout << "\nEnter n : ";
        std::cin >> n;

        if (n < 0)
            return 0;

        std::vector<long long> fibArr(n + 1, -1);
        std::cout << "fibn(n) : " << fib(n, fibArr) << "\n";
    }
}