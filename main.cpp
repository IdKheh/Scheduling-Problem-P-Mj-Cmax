#include <iostream>
#include <vector>
#include "task.hpp"
#include "machine.hpp"
#include "functions.hpp"

int main()
{
    Functions Main;
    Main.generator();
    Main.bruteForceInit();
    Main.greedyInit();
    Main.geneticAlgorythmInit();
    return 0;
}
