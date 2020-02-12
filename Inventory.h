#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};
/* Inventory consists of a name for an item the price of that item and how many are in stock at that moment
 * we have 3 private members and three public member.
 * the private members are the name price and stock.
 * the public members are the constructor a function to sell and this friend function
 * */

#endif
