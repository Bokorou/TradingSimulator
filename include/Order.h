#pragma once
#include "Trader.h"
#include "Stock.h"

class Order{
    private:
        int id;
        // Trader* trader;
        Stock* stock;
        int quantity;
    public:
        Order(int id, Stock* stock, int quantity) : 
                    id(id),  stock(stock), quantity(quantity){}
        virtual ~Order() = default;
        
    public:
        virtual void execute();
        virtual std::string serializeToString();

};