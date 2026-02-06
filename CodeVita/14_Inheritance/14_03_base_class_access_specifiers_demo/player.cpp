 #include "person.h"
 #include "player.h"
 #include <iostream>

 Player::Player(){

 }
 Player::~Player()
{
}
std::ostream &operator<<(std::ostream &out, const Player &player)
{
    out << "Player : " << std::endl
        << "Full name : " << player.get_full_name() << std::endl
        << "Age : " << player.get_age() << std::endl
        << "Address : " << player.get_address() << "]";

    return out;
}