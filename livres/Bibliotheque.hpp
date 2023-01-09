#ifndef Bibliotheque_hpp
#define Bibliotheque_hpp

#include <vector>
#include "Livre.hpp"

using namespace std;

class Bibliotheque
{
public:
    Bibliotheque();

    ~Bibliotheque();

    void addLivre(Livre unLivre);

    void Afficher();

protected:

private:
    vector<Livre> livres;
};

#endif