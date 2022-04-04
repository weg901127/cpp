//
// Created by Giyoung Lee on 4/2/22.
//

#include "Double.hpp"
#include <sstream>
#include <float.h>

void Double::cast(std::string src) {
    std::string tmp = removef(src);
    std::stringstream c(tmp);
    c >> db;
    try {
        if ((db == 0 && invaliddot(tmp))
            || (!isnum(tmp))
            || (db ==  DBL_MAX && (std::to_string(db) != tmp))
            || (db == DBL_MAX && (std::to_string(db) != tmp))
            || )
            throw ImpossibleException();
        if (src.length() == 1 && isalpha(src[0]))
            setArgv(std::to_string((int)src[0]));
        else
            setArgv(tmp);
    } catch (std::exception& e) {
        Caster::setArgv(e.what());
    }
}

Double::Double() {

}

Double::~Double() {

}

Double::Double(Double &src) {
    *this = src;
}

Double::Double(const std::string &src) {
    cast(src);
}

Double &Double::operator=(Double &src) {
    (void)src;
    return *this;
}
