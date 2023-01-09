#include "Bibliotheque.hpp"
#include "Livre.hpp"

int main(int argc, char* argv[])
{
    Bibliotheque bibliotheque;

    // Paramétrage du premier Livre
    Livre unLivre;
    unLivre.setTitre("Voyage au Centre de la Terre");
    unLivre.setAuteur("Jules Verne");
    unLivre.setPrix(7.49);
    bibliotheque.addLivre(unLivre);

    // Paramétrage du deuxième Livre
    Livre deuxLivre;
    deuxLivre.setTitre("Les Comtes");
    deuxLivre.setAuteur("Racine");
    deuxLivre.setPrix(4.19);
    bibliotheque.addLivre(deuxLivre);

    // Affiche le contenu de la bibliothèque
    bibliotheque.Afficher();
    
    return 0;
}
