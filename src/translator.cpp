#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <sstream>
#include <map>


std::set<std::string> make_exit_command(){
    std::set<std::string> my_set;
    my_set.insert({"q","quit","e","exit"});
    return my_set;
}


int main(){

   
    std::map<std::string,std::string> map;

    while (true)
    {   
     
        std::string words;

        std::cout << "This is a translator, but it does nothing for now..." << std::endl;
        std::getline(std::cin,words);
        std::vector<std::string> tab;
        std::stringstream s(words);
        std::string tmp;

        while(s >> tmp){
            tab.emplace_back(tmp);
        }



            
        if(tab.size() == 1 && make_exit_command().count(tab[0]) == 1){
            break;
        }

        if(tab[0] == "add"){
            map.insert({tab[1],tab[2]});
            std::cout << tab[1] << " => " << tab[2] << std::endl;
        }

        else if(tab[0] == "translate"){
            std::string tranlation = map[tab[1]];
            if(tranlation == ""){
                std::cout << "pas de traduction" << std::endl;
            }
            else{
                std::cout << tranlation << std::endl; 
            }

        else if()
                
        }
        

    }

    return 0;
}