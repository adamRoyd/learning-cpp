#include <string>

class Person 
{
private:
	std::string firstname;
	std::string lastname;
	int arbitraryNumber;
public:
	Person(std::string first, std::string last, int arbitrary);
	std::string getName();
};