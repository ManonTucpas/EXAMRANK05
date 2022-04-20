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
    // delete book;
    // std::map<std::string, ASpell *>::iterator it = array.begin();
    // std::map<std::string, ASpell *>::iterator ite = array.end();
    // while(it != ite)
    // {
    //     delete it->second;
    //     it++;
    // }
    


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
    book.learnSpell(ptr);
}

void    Warlock::forgetSpell(std::string forget)
{
    book.forgetSpell(forget);
}

void    Warlock::launchSpell(std::string spellname, ATarget const& ref)
{
    ATarget const *test = 0;
    if (test == &ref)
        return ;
    ASpell *temp = book.createSpell(spellname);
    if (temp)
        temp->launch(ref);
}