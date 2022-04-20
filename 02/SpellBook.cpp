#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    std::map<std::string, ASpell *>::iterator it = array.begin();
    std::map<std::string, ASpell *>::iterator ite = array.end();
    while(it != ite)
    {
        delete it->second;
        it++;
    }
    array.clear();
 
}

void    SpellBook::learnSpell(ASpell *ptr)
{
    if (ptr)
        array.insert(std::pair<std::string, ASpell *>(ptr->getName(), ptr->clone()));
}

void    SpellBook::forgetSpell(std::string const& forget)
{
    std::map<std::string, ASpell *>::iterator it = array.find(forget);
    if (it != array.end())
        delete it->second;
    array.erase(forget);
}

ASpell*    SpellBook::createSpell(std::string const& spellname)
{
    std::map<std::string, ASpell *>::iterator it = array.find(spellname);

    if (it != array.end())
        return array[spellname];
    return NULL;
}
