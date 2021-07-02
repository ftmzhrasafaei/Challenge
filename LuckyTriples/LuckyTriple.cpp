#include "LuckyTriple.h"

int LuckyTriple::run(std::vector<int> list) {
    unsigned long length{list.size()};
    int counter{0};
    for (unsigned i{0} ; i < length; i ++){
        for(unsigned k{ i + 1 }; k < length ; k ++){
            if(list[k] % list[i] == 0){
                for(unsigned j{k + 1} ; j < length ; j ++){
                    if(list[j] % list[k] == 0){
                        counter ++;
                    }
                }
            }
        }
    }

    return counter;
}
