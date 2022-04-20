#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
        
TargetGenerator::~TargetGenerator() {}

void    TargetGenerator::learnTargetType(ATarget *ptr)
{
    if (ptr)
     array.insert(std::pair<std::string, ATarget *>(ptr->getType(), ptr->clone()));
}

void    TargetGenerator::forgetTargetType(std::string const& typetoforget)
{
    std::map<std::string, ATarget *>::iterator it = array.find(typetoforget);
    if (it != array.end())
        delete it->second;
    array.clear();
}

ATarget* TargetGenerator::createTarget(std::string const &spetype)
{
    std::map<std::string, ATarget *>::iterator it = array.find(spetype);
    if (it != array.end())
        return array[spetype];
    return NULL;
}

