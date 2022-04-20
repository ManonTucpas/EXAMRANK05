#ifndef _TARGETGENERATOR_HPP_
#define _TARGETGENERATOR_HPP_

#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include "ASpell.hpp"
#include "ATarget.hpp"


class TargetGenerator 
{
    private:

       
        std::map<std::string, ATarget *> array;
        TargetGenerator &operator=(TargetGenerator const& other);
        TargetGenerator(TargetGenerator const& cpy);


    public:

        TargetGenerator();
        ~TargetGenerator();

       

        void    learnTargetType(ATarget *ptr);
        void    forgetTargetType(std::string const& typetoforget);
        ATarget* createTarget(std::string const &spetype);

};

#endif