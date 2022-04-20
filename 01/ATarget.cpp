#include "ATarget.hpp"

ATarget::ATarget(std::string const& type)
{
    this->type = type;
}

ATarget::~ATarget()
{
}

ATarget::ATarget() {}

ATarget &ATarget::operator=(ATarget const& other)
{
    return (*this = other);
}
ATarget::ATarget(ATarget const& cpy)
{
        this->type = cpy.type;
}

std::string const& ATarget::getType(void) const { return (this->type); }

void ATarget::getHitBySpell(ASpell const& ref) const
{
    std::cout << this->type << " has been " << ref.getEffects() << "!\n";
}


