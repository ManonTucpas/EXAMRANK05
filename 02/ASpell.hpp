#ifndef _ASPELL_HPP_
#define _ASPELL_HPP_


#include <iostream>



class ATarget;

class ASpell 
{
    private:

        std::string name;
        std::string effects;
       

    public:

        ASpell(std::string const& name, std::string const& effects);
        virtual ~ASpell();
        ASpell();
        ASpell &operator=(ASpell const& other);
        ASpell(ASpell const& cpy);

        std::string const& getName(void) const;
        std::string const& getEffects(void) const;
        virtual ASpell *clone() const = 0;

        void launch(ATarget const& ref) const;
};

#include "ATarget.hpp"

#endif