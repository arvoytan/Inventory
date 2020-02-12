#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using std::cout;
using std::endl;
  
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}
/* this is the constructor that takes the information that the user passes to it and then createsthat inventory item*/

void Inventory::sell()
{
  if(m_in_stock >0)
    m_in_stock--;
  else
    cout<<"Sorry, that item is out of stock"<<endl;

}
// this function just decreases the amount in stock by one eveytime we call the sell function

ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
//this function lists the item name and then tells the user the price to two decimal places.
