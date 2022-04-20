#ifndef _ATARGET_HPP_
#define _ATARGET_HPP_

#include <iostream>


class ASpell;

class ATarget 
{
    private:

        std::string type;
       

    public:

         ATarget();
        ATarget(std::string const& type);
        virtual ~ATarget();
     
        ATarget &operator=(ATarget const& other);
        ATarget(ATarget const& cpy);

        std::string const& getType(void) const;
        virtual ATarget *clone() const = 0;

        void getHitBySpell(ASpell const& ref) const;


};

#include "ASpell.hpp"

#endif