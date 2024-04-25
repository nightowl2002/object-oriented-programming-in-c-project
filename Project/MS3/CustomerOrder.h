/*
Name - MEHTAB SINGH JAGDE
Student ID - 119003226
Email - mjagde@myseneca.ca
Section - ZBB
Date - 14 / 03 / 2024

We have completed this assignment ourselves respecting academic integrity.

*/
#ifndef SENECA_CUSTOMERORDER_H
#define SENECA_CUSTOMERORDER_H
#include <iostream>
#include <iomanip>
#include <string>
#include "Station.h"
#include "Utilities.h"

namespace seneca {
    struct Item
    {
        std::string m_itemName;
        size_t m_serialNumber{ 0 };
        bool m_isFilled{ false };

        Item(const std::string& src) : m_itemName(src) {};
    };
    class CustomerOrder
    {
        std::string m_name;
        std::string m_item;
        size_t m_cntItem;
        Item** m_lstItem;
        static size_t m_widthField;
    public:
        CustomerOrder();
        CustomerOrder(const std::string& input);
        CustomerOrder(const CustomerOrder& order);
        CustomerOrder& operator=(const CustomerOrder& order) = delete;
        CustomerOrder(CustomerOrder&& order) noexcept;
        CustomerOrder& operator=(CustomerOrder&& src) noexcept;
        ~CustomerOrder();
        bool isOrderFilled() const;
        bool isItemFilled(const std::string& itemName) const;
        void fillItem(Station& station, std::ostream& os);
        void display(std::ostream& os) const;
    };
}
#endif // !SDDS_CUSTOMERORDER_H