#include "Pokemon.h"

Pokemon::Pokemon(const std::string& name)
            :_name{name}
            ,_id{next_id++}
            {

            }
Pokemon::Pokemon(const Pokemon& poke)
        :_name(poke._name)
        ,_id(next_id++){

}

const std::string &Pokemon::name() const
{
    return _name;
}

int Pokemon::id() const{
    return _id;
}

Pokemon& Pokemon::operator=(const Pokemon& other){
    if(this != &other)
    {
        _name = other._name;
    }
    return *this;
}