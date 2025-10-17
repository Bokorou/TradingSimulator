#pragma once
#include <vector>
#include <iostream>
#include "Stock.h"
#include "Order.h"

class Trader {
    private:
        int id;
        double balance = 1000.00;
        char type;
        std::vector<Stock*> stocks;
        std::vector<Order*> orders;

    public:
        Trader(int id, double balance);
        virtual ~Trader();

    public:
        int getID() const;
        char getType() const;
        double getBalance() const;
        const std::vector<Stock*>& getStocks() const;
        const std::vector<Order*>& getOrders() const;
        // void setId(int);
        // void setType(char);
        void setBalance(double*);
        // void makeOrder(Order*);
        // void addStock(Stock*);
        // Stock* findStock(int) const;
        // virtual std::string createOrder(Stock*);
};