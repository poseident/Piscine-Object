#pragma once

#include "singetons.hpp"
#include "Room.hpp"

class RoomList : public Singetons<Room>
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
};

#endif