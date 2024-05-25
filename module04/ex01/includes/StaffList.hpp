#ifndef STAFFLIST_HPP
#define STAFFLIST_HPP

#include "SingetonList.hpp"
#include "Staff.hpp"
#include "Singeton.hpp"

class StaffList : public Singeton<StaffList>, public SingetonList<Staff>
{
    public:
        void validate(const Staff&) const {
            // Validation logic for Staff objects
        }
    private:
        StaffList() {}  // Constructor is private
        ~StaffList() {} // Destructor is private
        StaffList(const StaffList&);
        StaffList& operator=(const StaffList&);
        friend class Singeton<StaffList>; 
};

#endif