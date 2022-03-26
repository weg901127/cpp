//
// Created by Giyoung Lee on 3/21/22.
//

#ifndef CPP03_EX03_DIAMONDTRAP_HPP
#define CPP03_EX03_DIAMONDTRAP_HPP


#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
private:
    std::string name;
    int         hitpoints;
    int         energypoints;
    int         attackdamage;
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(DiamondTrap& src);
    DiamondTrap(const std::string &name);
    DiamondTrap&    operator=(DiamondTrap& src);
    void        attack(std::string const& target);
    void        whoAmI();
};


#endif //CPP03_EX03_DIAMONDTRAP_HPP
