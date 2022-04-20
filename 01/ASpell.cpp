#include "ASpell.hpp"

ASpell::ASpell(std::string const& name, std::string const& effects)
{
    this->effects = effects;
    this->name = name;
}

ASpell::~ASpell()
{
}

ASpell::ASpell() {}
ASpell &ASpell::operator=(ASpell const& other)
{
    return (*this = other);
}
ASpell::ASpell(ASpell const& cpy)
{
    this->name = cpy.name;
    this->effects = cpy.effects;
}


std::string const& ASpell::getName(void) const { return (this->name); } 
std::string const& ASpell::getEffects(void) const { return (this->effects); }

void ASpell::launch(ATarget const& ref) const
{
    ref.getHitBySpell(*this);
}




