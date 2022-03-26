#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {
private:
    std::string	name;
    int			hitpoints;
    int			energypoints;
    int			attackdamage;
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(ScavTrap const& src);
    explicit ScavTrap(std::string const& name);
    ScavTrap& operator=(ScavTrap const& src);
    void		attack(std::string const& target);
    void		guardGate();
    std::string getName() const;
    int getHitpoints() const;
    int getEnergypoints() const;
    int getAttackdamage() const;

};
#endif
