#ifndef ROOMLIST_HPP
#define ROOMLIST_HPP

#include "SingetonList.hpp"
#include "Room.hpp"
#include "Singeton.hpp"

class RoomList : public Singeton<RoomList>, public SingetonList<Room>
{
    public:
        void validate(const Room&) const {
            // Validation logic for Room objects
        }
    private:
        RoomList() {}  // Constructor is private
        ~RoomList() {} // Destructor is private
        RoomList(const RoomList&);
        RoomList& operator=(const RoomList&);
        friend class Singeton<RoomList>; 
};

#endif