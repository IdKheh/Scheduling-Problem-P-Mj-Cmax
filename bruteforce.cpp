#include "functions.hpp"
#include <iostream>
#include <vector>
#include <chrono>
#include <iterator>
#include <algorithm>

void bruteForce(int n, int m)
{
    std::vector<int> arr = {1,2,3};
	do {
		std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << "\n";

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if()
            }
        }
	} while(std::next_permutation(arr.begin(), arr.end()));
}
void bruteForceInit(int n, int m)//machines and tasks
{
    auto start = std::chrono::high_resolution_clock::now();
    bruteForce(n,m);
    auto stop = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);   
    std::cout<<"Time: "<< elapsed.count() * 1e-9<<" seconds.\n";
}