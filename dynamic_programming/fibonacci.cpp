#include <iostream>
#include <vector>

long long fib(int n)
{
    std::vector<long long> fibArr(n + 1, -1);

    fibArr[0] = 0;
    fibArr[1] = 1;

    if (n <= 1)
        return fibArr[n];

    for (int i = 2; i <= n; ++i)
    {
        fibArr[i] = fibArr[i - 1] + fibArr[i - 2];
    }

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

        std::cout << "fibn(n) : " << fib(n) << "\n";
    }
}