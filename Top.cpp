#include "Top.hpp"
#include "Kova.hpp"
#include<iostream>
#include <cstdlib>
#include <ctime>


Top::Top()
{
    int random = 1 + (rand() % 25);
    this->veri = alphabet[random];
}
