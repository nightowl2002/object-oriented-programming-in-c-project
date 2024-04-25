/*
Name - MEHTAB SINGH JAGDE
Student ID - 119003226
Email - mjagde@myseneca.ca
Section - ZBB
Date - 14 / 03 / 2024

We have completed this assignment ourselves respecting academic integrity.

*/
#ifndef SENECA_UTILITIES_H
#define SENECA_UTILITIES_H
#include <iostream>
namespace seneca {
	std::string trim(std::string& src);
	class Utilities {
		size_t m_widthField{ 1 };
		static char m_delimiter;
	public:
		void setFieldWidth(size_t newWidth);
		size_t getFieldWidth() const;
		std::string extractToken(const std::string& str, size_t& next_pos, bool& more);
		static void setDelimiter(char newDelimiter);
		static char getDelimiter();
	};
}
#endif // !SENECA_UTILITIES_H
