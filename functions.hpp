#include <vector>
class Functions
{
public:
    int n;
    int m;
    std::vector<Task> task;
    std::vector<Machine> machines;
    std::vector<Machine> bestMachines;
    void bruteForceInit();
    void geneticAlgorythmInit();
    void greedyInit();
    void generator();
};

