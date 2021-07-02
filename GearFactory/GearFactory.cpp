#include "GearFactory.h"

std::vector<int> GearFactory::run(std::vector<int> pegs) {

    unsigned long length {pegs.size()};
    int constant {0};
    int coefficient {-1};
    int numerator{0};
    int denumerator{0};
    // rn = list(n) + 2(- list(n -1) + list(n - 2) - ... +- list(2)) + (-1)^(n%2)(list(1) + r1)
    // r1 = 2 * rn
    // r1 < list(2) - list(1) 
    for(unsigned long i{length - 2}; i > 0 ; i--){
        constant = constant + coefficient * pegs[i];
        coefficient = -1 * coefficient;
    }

    if (length%2)
    {
        numerator = - 2 * (pegs[length - 1] + 2 * constant + pegs[0]);
        denumerator = 1;
    }
    else{
        numerator = pegs[length - 1] + 2 * constant  -  pegs[0];
        if (numerator % 3 == 0)
        {
            numerator = numerator / 3;
            denumerator = 1;
        }
        else{
            denumerator = 3;
        }
    }
    std::vector<int> result{numerator , denumerator};
    if (numerator < 0)
    {
        //std::cout<<" Negetive value " << numerator<<std::endl;
        result[0] = -1;
        result[1] = -1;
    }
    else if (result[0] > (pegs[1] -pegs[0]) * result[1])
    {

        //std::cout<<" Initial Condition error " <<std::endl;
        result[0] = -1;
        result[1] = -1;
    }
    else if (result[0] < result[1])
    {
        //std::cout<<" Raduis is less than 1 " <<std::endl;
        result[0] = -1;
        result[1] = -1;
    }


    return result;
}
