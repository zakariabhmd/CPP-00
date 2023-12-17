#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook{
	private:
		Contact contact[8];
	public:
		void set_contact(int i, t_all *all);
		t_all	print_contacts(int i);
};

#endif