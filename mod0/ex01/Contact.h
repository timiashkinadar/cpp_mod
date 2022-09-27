#ifndef CPP_MOD_CONTACT_H
#define CPP_MOD_CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact{
public:
    void set_fn(std::string s);
    void set_ln(std::string s);
    void set_nn(std::string s);
    void set_pn(std::string s);
    void set_ds(std::string s);
    std::string get_fn();
    std::string get_ln();
    std::string get_nn();
    std::string get_pn();
    std::string get_ds();
private:
    std::string f_name;
    std::string l_name;
    std::string nickname;
    std::string num;
    std::string secret;

};
#endif //CPP_MOD_CONTACT_H
