#include <iostream>
#include "Bibliotheque.hpp"

// Constructeur
Bibliotheque::Bibliotheque()
{

}

// Destructeur
Bibliotheque::~Bibliotheque()
{
    
}

// Ajoute un livre à la biblio
void Bibliotheque::addLivre(Livre unLivre)
{
    livres.push_back(unLivre);
}

// Affiche l'intégralité des infos de tout les livres
void Bibliotheque::Afficher()
{
    // Iteration du vecteur livres, affiche leurs infos respectives
    for (Livre i : livres)
    {
        i.Afficher();
    }
}