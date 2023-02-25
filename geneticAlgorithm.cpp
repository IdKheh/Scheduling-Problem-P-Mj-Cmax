#include "functions.hpp"
#include <iostream>
#include <vector>
#include <chrono>

void geneticAlgorithmInit(int n, int m)//machines and tasks
{
    auto start = std::chrono::high_resolution_clock::now();
    //geneticAlgotithm
    auto stop = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);   
    std::cout<<"Time: "<< elapsed.count() * 1e-9<<" seconds.\n";
}