#ifndef Livre_hpp
#define Livre_hpp

#include <string>

using namespace std;

class Livre
{
public:
    Livre();

    ~Livre();

    string getTitre();
    void setTitre(string unTitre);

    string getAuteur();
    void setAuteur(string unAuteur);

    float getPrix();
    void setPrix(float unPrix);

    void Afficher();

protected:

private:
    string titre;
    string auteur;
    float prix;
};

#endif