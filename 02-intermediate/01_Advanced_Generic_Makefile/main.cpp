#include "HumanA.h"
#include "HumanB.h"
#include "Weapon.h"

#include <iostream>

void	check_leaks() {
    system("leaks -q violence");
}

int	main() {
    atexit(check_leaks);

    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return 0;
}
