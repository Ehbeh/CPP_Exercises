#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"
#include <string>
#include <map>


class ObjectNode : public Node{

     public:
        
        ~ObjectNode() override{}

        NodeKind kind() const{
            return NodeKind::OBJECT;
        }

        std::string print() const override{
            std::string str = "{";
            for(auto &elem : _map){
                str.append("\"").append(elem.first).append("\"").append(":").append(elem.second->print()).append(",");
            }
            if(str.length() > 1){
                str.erase(str.length() - 1);
            }
            str.append("}");
            return str;
        }

        static std::unique_ptr<ObjectNode> make_ptr() {
            return std::make_unique<ObjectNode>();
        }

        int child_count() const{
            return _map.size();
        }

        void insert(const std::string& str,NodePtr ptr){
            _map.insert({str,std::move(ptr)});
        }

       
       

    
    private:
        std::map<std::string,NodePtr> _map;

};
