#pragma once

#include <string>
#include <memory>

// A creature that is cute and can fight other ones.


class Pokemon
{
    public:
        Pokemon(const std::string& name);
        Pokemon(const Pokemon& other);
       

        const std::string& name() const;
        int id() const;

        Pokemon& operator=(const Pokemon &other);
            
        

    
    private:
        std::string _name;
        int _id;
        static inline int next_id;


};

using PokemonPtr = std::unique_ptr<Pokemon>;
