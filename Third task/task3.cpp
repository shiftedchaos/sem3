#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, k, lam;
    std::cout << "Input amount of elem in array: ";
    std::cin >> N;
    std::vector<int> a;
    std::cout << "Input array: ";

    for (size_t i = 0; i < N; ++i)
    {
        std::cin >> k;
        a.push_back(k);
    }
    std::cout << "1 - ascending, 2 - descending, 3 - non-descending, 4 - non-ascending";
    std::cin >> lam;

    std::sort(a.begin(), a.end(), [lam](auto &x,auto&y){
        if (lam == 2)
            return(x > y);
        else if (lam == 1)
            return (x < y);
        else if (lam == 3)
          return (x <= y);
        else
          return (x >= y);
        });

    std::cout << "Sorted array ";
    for (size_t i = 0; i < N; ++i)
    {
        std::cout << a[i] << " ";
    }
    return 0;
}
