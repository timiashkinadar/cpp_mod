//
// Created by daria on 25.11.22.
//

#ifndef CPP_MOD_HARL_H
#define CPP_MOD_HARL_H

#include <iostream>
class Harl{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    void complain(std::string level);
};

#endif //CPP_MOD_HARL_H
