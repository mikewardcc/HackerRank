#include <iostream>
#include <vector>


int main()
{
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; ++arr_i)
    {
       std::cin >> arr[arr_i];
    }
    for (int arr_i = n-1; arr_i >= 0; --arr_i)
    {
        std::cout << arr[arr_i] << " ";
    }
    return 0;
}

