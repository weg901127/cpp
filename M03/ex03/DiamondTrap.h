//
// Created by Giyoung Lee on 3/21/22.
//

#ifndef CPP03_EX03_DIAMONDTRAP_H
#define CPP03_EX03_DIAMONDTRAP_H


#include "FragTrap.h"
#include "ScavTrap.hpp"
//claptrap 다시 바꿔야함! private --> protected
class DiamondTrap : public ScavTrap, FragTrap{
private:
    std::string name;
};


#endif //CPP03_EX03_DIAMONDTRAP_H
