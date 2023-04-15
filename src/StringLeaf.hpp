#pragma once
#include "Leaf.hpp"
#include "NodeKind.hpp"
#include <string>


class StringLeaf : public Leaf{
    public:
        StringLeaf(const std::string &data)
            :_data{data}
            {

            }
        
        ~StringLeaf() override{}
        
        const std::string& data() const{
            return _data;
        }

         std::string print() const override{
            return "\""+ _data+ "\"";
        }

        NodeKind kind() const{
            return NodeKind::STRING;
        }

        static std::unique_ptr<StringLeaf> make_ptr(const std::string &data) {
            return std::make_unique<StringLeaf>(data);
        }


    

    private:
        std::string _data;




};