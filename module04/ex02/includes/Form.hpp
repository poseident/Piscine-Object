#ifndef FORM_HPP
#define FORM_HPP

#include "FormType.hpp"

class Form
{
    private:
	    FormType _formType;

    public:
	    Form(FormType p_formType) : _formType(p_formType) {};
        FormType& getFormType() {
            return this->_formType;
        }
	virtual void execute() = 0;
};

#endif