#ifndef _WARLOCK_HPP_
#define _WARLOCK_HPP_

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock 
{
    private:

        std::string name;
        std::string title;
        Warlock();
        Warlock &operator=(Warlock const& other);
        Warlock(Warlock const& cpy);


    public:

        Warlock(std::string const& name, std::string const& title);
        ~Warlock();

        std::string const& getName(void) const;
        std::string const& getTitle(void) const;

        void    setTitle(std::string const& titletoset);

        void    introduce() const;

};

#endif