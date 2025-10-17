#include "Trader.h"

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








