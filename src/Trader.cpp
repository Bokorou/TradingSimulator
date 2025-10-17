#include "Trader.h"

Trader::Trader(int id, double balance) : id(id), balance(balance){
    std::cout << "Creating Trader with ID: " << id << " and balance: " << balance<< std::endl;
}

Trader::~Trader(){

}

int Trader::getID() const{
    return id;
}

char Trader::getType() const{
    return type;
}

double Trader::getBalance() const{
    return balance;
}

void Trader::setBalance(double* balance){
    this -> balance = *balance;
}








