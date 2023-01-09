#include <iostream>
#include "Livre.hpp"

// Constructeur
Livre::Livre()
{
    titre = "Inconnu";
    auteur = "N/a";
    prix = 0;
}

// Destructeur
Livre::~Livre()
{
    
}

// Renvoie le titre
string Livre::getTitre()
{
    return titre;
}

// Mettre un titre
void Livre::setTitre(string unTitre)
{
    titre = unTitre;
}

// Renvoie l'auteur
string Livre::getAuteur()
{
    return auteur;
}

// Mettre un auteur
void Livre::setAuteur(string unAuteur)
{
    auteur = unAuteur;
}

// Renvoie le prix
float Livre::getPrix()
{
    return prix;
}

// Mettre le prix
void Livre::setPrix(float unPrix)
{
    prix = unPrix;
}

// Afficher les infos
void Livre::Afficher()
{
    cout << "Titre: " << titre << endl << "Auteur: " << auteur << endl << "Prix: " << prix << " euros" << endl; 
}
