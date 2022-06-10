#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
public:
    Brain();
    Brain(const Brain &src);
    virtual ~Brain();
    Brain&operator=(const Brain &other);

    std::string ideas[100];

private:
};

#endif