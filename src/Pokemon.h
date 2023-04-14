#pragma once

#include <string>
#include <memory>

// A creature that is cute and can fight other ones.

class Trainer;


class Pokemon{
    public:
        Pokemon(const std::string &name)
                :_name{name}
                ,_trainer{nullptr}
                {
                    _id = global_id++;
                }
        
        Pokemon(const Pokemon &other) // le other c'est celui qu'on avait crée avant
         :_name{other._name}
         ,_id{global_id++}
         ,_trainer{nullptr}
         {
            
         }

         Pokemon& operator=(const Pokemon& other){
            if(this != &other){
                _name = other._name;
            }
            
            return *this;
         }
        

        const std::string &name() const{
            return _name;
        }

        int id() const{
            return _id;
        }

        const Trainer *trainer() const{
            return _trainer;
        }
        
        void set_trainer(Trainer *trainer){
            _trainer = trainer;
        }
           
        
    

    private:
        std::string _name;
        int _id;
        Trainer *_trainer;
        inline static int global_id; //pour pouvoir utiliser la variable id avant de lavoir initialiser
};

using PokemonPtr = std::unique_ptr<Pokemon>;