//
// Created by Giyoung Lee on 4/2/22.
//

#ifndef CPP05_EX00_DOUBLE_HPP
#define CPP05_EX00_DOUBLE_HPP

#include "Caster.hpp"

class Double : public Caster{
private:
    double db;
protected:
    void cast(std::string src);
public:
    Double();
    ~Double();
    Double(Double& src);
    Double(std::string const& src);
    Double& operator=(Double& src);
};

#endif //CPP05_EX00_DOUBLE_HPP
