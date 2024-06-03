#ifndef SECRETARIALOFFICE_HPP
#define SECRETARIALOFFICE_HPP

#include <vector>
#include "Form.hpp"
#include "Room.hpp"

class SecretarialOffice: public Room
{
    private:
	    std::vector<Form*> _archivedForms;

    public:
};

#endif