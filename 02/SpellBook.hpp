#ifndef _SPELLBOOK_HPP_
#define _SPELLBOOK_HPP_

#include <map>
#include <iterator>
#include "ASpell.hpp"

class SpellBook 
{
    private:

        std::map<std::string, ASpell *> array;
        SpellBook &operator=(SpellBook const& other);
        SpellBook(SpellBook const& cpy);

    public:

        SpellBook();

        ~SpellBook();

        void    learnSpell(ASpell *ptr);
        void    forgetSpell(std::string const& forget);
        ASpell*   createSpell(std::string const& spellname);

};

#endif