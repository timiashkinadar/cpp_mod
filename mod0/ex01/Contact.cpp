#include "Contact.h"

void Contact::set_fn(std::string s){
    f_name = s;
}

void Contact::set_ln(std::string s){
    l_name = s;
}

void Contact::set_nn(std::string s){
    nickname = s;
}

void Contact::set_pn(std::string s){
    num = s;
}

void Contact::set_ds(std::string s){
    secret = s;
}

std::string Contact::get_fn(){
    return f_name;
}

std::string Contact::get_ln(){
    return l_name;
}

std::string Contact::get_nn(){
    return nickname;
}

std::string Contact::get_pn(){
    return num;
}

std::string Contact::get_ds(){
    return secret;
}