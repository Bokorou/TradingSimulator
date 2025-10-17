#pragma once
#include <iostream>
#include <string>

class Stock{
    private:
        std::string name;
        double price;

    public:
        Stock(std::string name, double price) : name(name), price(price) {}
        virtual ~Stock() = default;
    
    public:
        void setName(std::string);
        void setPrice(double);
        std::string getName() const;
        double getPrice() const;
};