#include "ScavTrap.hpp"

int main( void ) {
    ScavTrap a;
    ScavTrap b(ScavTrap("kkk"));
    b.guardGate();
    b.attack("asdf");
    return 0;
}
