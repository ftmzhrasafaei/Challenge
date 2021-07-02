#include "LegendaryValue.h"




std::vector<int> LegendaryValue::run(std::vector<int> list, int legendaryValue) {
    std::vector<int> legenderies{};
    for (unsigned i{0}; i < list.size(); i ++)
    {
      // for each element in list  x
        for (unsigned j{i + 1}; j < list.size(); j ++)
        {
          // chech if there is a number(y) to establish the statment : x + y = legendaryValue
            if (list[i] + list[j] == legendaryValue)
            {
                legenderies.push_back(list[i]);
                legenderies.push_back(list[j]);

            }

        }
    }

    return legenderies;
}
