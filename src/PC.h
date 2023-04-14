#pragma once
#include<vector>
#include"Pokemon.h"
#include"Pokeball.h"
#include<memory>

// A PC is the place where Pokemons get automagically sent when the trainer's pockets are full.
// When a Pokemon is transferred to the PC, this one takes ownership.

class PC{

    public:

        bool empty(){
            return _lst.size() == 0;
        }

        const std::vector<PokemonPtr> &pokemons() const{
            return _lst;
        }

        void transfer(PokemonPtr pokemon){
            _lst.emplace_back(std::move(pokemon));
        }

    private:
        std::vector<PokemonPtr> _lst;
};
