//
// Created by Giyoung Lee on 3/21/22.
//

#ifndef CPP01_EX02_FRAGTRAP_H
#define CPP01_EX02_FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
private:
    std::string name;
    int         hitpoints;
    int         energypoints;
    int         attackdamage;
public:
    FragTrap( void );
    ~FragTrap( void );
    FragTrap(FragTrap const& src);

    explicit FragTrap(const std::string &name);

    FragTrap&   operator=(FragTrap const& src);
    void        highFivesGuys( void );
    std::string getName() const;
    int getHitpoints() const;
    int getEnergypoints() const;
    int getAttackdamage() const;
};

#endif //CPP01_EX02_FRAGTRAP_H
