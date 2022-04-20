#ifndef _WARLOCK_HPP_
#define _WARLOCK_HPP_

#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock 
{
    private:

        std::string name;
        std::string title;
       // std::map<std::string, ASpell *> array;
        Warlock();
        Warlock &operator=(Warlock const& other);
        Warlock(Warlock const& cpy);

        SpellBook book;

    public:

        Warlock(std::string const& name, std::string const& title);
        ~Warlock();

        std::string const& getName(void) const;
        std::string const& getTitle(void) const;

        void    setTitle(std::string const& titletoset);

        void    introduce() const;

        void    learnSpell(ASpell *ptr);
        void    forgetSpell(std::string forget);
        void    launchSpell(std::string spellname, ATarget const& ref);
        

};

#endif