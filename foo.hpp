#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
   
    for (auto it = people.begin(); it != people.end(); ++it)
    {
        it->birthday();
        
    }
    
    std::vector< char > result;
    for (auto rit = people.rbegin(); rit!= people.rend(); rit++) 
        {
            if (rit->isMonster()) {
            
                result.push_back('n');
            } 
            else {
                result.push_back('y');
                }
    }


    return result;
}
