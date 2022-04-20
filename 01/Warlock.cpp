#include "Warlock.hpp"

Warlock::Warlock(std::string const& name, std::string const& title)
{
    this->title = title;
    this->name = name;
    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!\n";
}

std::string const& Warlock::getName(void) const { return (this->name); } 
std::string const& Warlock::getTitle(void) const { return (this->title); }

void    Warlock::setTitle(std::string const& titletoset)
{
    this->title = titletoset;
}

 void     Warlock::introduce() const
 {
     std::cout << this->name << ": I am "<< this->name  << ", " << this->title << "!\n";
 }


void    Warlock::learnSpell(ASpell *ptr)
{
    array.insert(std::pair<std::string, ASpell *>(ptr->getName(), ptr->clone()));
}

void    Warlock::forgetSpell(std::string forget)
{
    std::map<std::string, ASpell *>::iterator it = array.find(forget);
    if (it != array.end())
        delete it->second;
    array.erase(forget);
}

void    Warlock::launchSpell(std::string spellname, ATarget const& ref)
{
    ASpell *spel = array[spellname];
    if (spel)
       spel->launch(ref);
}