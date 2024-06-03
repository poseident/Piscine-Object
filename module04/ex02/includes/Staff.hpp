#ifndef STAFF_HPP
#define STAFF_HPP

#include "Person.hpp"
#include "Form.hpp"

class Staff : public Person
{
	private:

	public:
		Staff(const std::string& name) : Person(name) {}
		void sign(Form* p_form);
};

#endif