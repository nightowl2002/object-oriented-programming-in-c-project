/*
Name - MEHTAB SINGH JAGDE
Student ID - 119003226
Email - mjagde@myseneca.ca
Section - ZBB
Date - 14 / 03 / 2024

We have completed this assignment ourselves respecting academic integrity.

*/
#ifndef SENECA_STATION_H
#define SENECA_STATION_H
#include <iostream>
#include <string>
namespace seneca {
	class Station
	{
		int id;
		std::string name;
		std::string desc;
		unsigned int nextSerialNo;
		unsigned int noItems;
		static size_t m_widthField;
		static int id_generator;

	public:
		Station(const std::string& record);
		const std::string& getItemName() const;
		size_t getNextSerialNumber();
		size_t getQuantity() const;
		void updateQuantity();
		void display(std::ostream& os, bool full) const;
	};
};

#endif // !SENECA_STATION_H
