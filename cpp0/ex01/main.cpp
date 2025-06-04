#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string command;

    while (true)
    {
        std::cout << "\nHi! What do you want to do? Add a contact?(\033[36mADD\033[0m),"
        << " search for one?(\033[36mSEARCH\033[0m) or exit?(\033[36mEXIT\033[0m):\n";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
        {
            std::cout << "Bye!" << std::endl;
            break ;
        }
    }
    return (0);
}
