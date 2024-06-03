#ifndef HEADMASTER_HPP
#define HEADMASTER_HPP

#include "Staff.hpp"
#include <vector>

class Headmaster : public Staff
{
    private:
	    std::vector<Form*> _formToValidate;
	
    public:
        Headmaster(const std::string &name) : Staff(name) {}
	    void receiveForm(Form* p_form);
};

#endif