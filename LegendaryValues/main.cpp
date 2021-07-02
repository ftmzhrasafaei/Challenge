#include "LegendaryValue.h"

int main() {
    LegendaryValue legendaryValueObject{};
    std::vector<int> inputList{1 , 2 , 3 , 4 , 5 , 6};
    std::vector<int> result{};
    int legendaryValue {7};
    result = legendaryValueObject.run(inputList , legendaryValue);
    std::cout << "Output: ";
    for (unsigned i{0}; i < result.size() - 1; i ++)
    {
        std::cout << result[i] << ",";
    }
    std::cout << result[result.size() - 1] << std::endl;
    
    return 0;
}
