#include "phonebook.hpp"

void PhoneBook::set_contact(int i, t_all *all)
{
	conta[i].set_all(all);
}
t_all PhoneBook::print_contacts(int i)
{
	t_all all;

	all = conta[i].get_all();
	return (all);
}