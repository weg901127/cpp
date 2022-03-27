//
// Created by Giyoung Lee on 3/27/22.
//

#ifndef CPP04_EX02_AMATERIA_HPP
#define CPP04_EX02_AMATERIA_HPP

#include <string>

class ICharacter;
class AMateria {
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const& type);
    virtual ~AMateria();
    AMateria(AMateria const& src);
    AMateria& operator=(AMateria const& src);
    const std::string &getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


#endif //CPP04_EX02_AMATERIA_HPP
