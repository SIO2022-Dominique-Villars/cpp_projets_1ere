/********************************************************************************
 *
 *                          P R O J E T      Q C M
 *
 *                           g++ -o qcm ./qcm.cpp
 *
 *******************************************************************************/

/* Projet fait avec les Vector */

#include <string> // Inclusion de la bibliothèque C++ string
#include <iostream> // Inclusion de la bibliothèque C++ iostream (cout, cin, endl)
#include <vector>

// Déclaration de l'usage de l'espace de nommage std
// pour simplifier la syntaxe d'accès à string, cout, cin et endl
using namespace std;

/**
 * Cette classe permet de gérer une question du QCM.
 *
 * Note: en accord avec le client la V1 du programme ne gere que des questions à choix
 * unique avec trois réponses possibles.
 */
class Question
{
public:
    
    // Constructeur de la classe
    Question()
    {
    }
    
    // Destructeur de la classe
    ~Question()
    {
    }
    
    // Accesseur de la consigne
    string getConsigne()
    {
        return this->consigne;
    }

    // Mutateur de la consigne
    void setConsigne(string uneConsigne)
    {
        this->consigne = uneConsigne;
    }

    // TODO Choix Multiples
    // Gestion des réponses
    vector<bool> getReponses()
    {
        return this->reponses;
    }

    void addReponse(int ma_reponse)
    {
        this->reponses.at(ma_reponse-1) = true;
    }

    // Gestion des choix
    vector<string> getChoix()
    {
        return this->choix;
    }

    void addChoix(string mon_choix)
    {
        this->choix.push_back(mon_choix);
        this->reponses.push_back(false);
    }
    
private:
    // Consigne à afficher
    string consigne;

    // TODO Choix multiples
    vector<string> choix;
    vector<bool> reponses;
};

// Fonction princiaple du programme
int main()
{
    const int nbQuestion = 2;
    int note = 0;
    
    // Création du formulaire sous forme d'un tableau C de questions
    Question questionnaire[nbQuestion];
    
    questionnaire[0].setConsigne("Quel est le mode de comptage utilisé en informatique?");
    questionnaire[0].addChoix("Base 1");
    questionnaire[0].addChoix("Base 8");
    questionnaire[0].addChoix("Base 10");
    questionnaire[0].addReponse(2);

    questionnaire[1].setConsigne("Les données entre la mémoire centrale et l'unité centrale de traitement transitent par...");
    questionnaire[1].addChoix("Les unités de stockage");
    questionnaire[1].addChoix("Un système de buse de communication");
    questionnaire[1].addChoix("Les périphériques d'entrée");
    questionnaire[1].addChoix("Le périphérique parisien");
    questionnaire[1].addReponse(2);

/*
    questionnaire[2].setConsigne("Quelle est la plus petite unité d'information manipulable par une machine numérique ?");
    questionnaire[2].addChoix("Bit");
    questionnaire[2].addChoix("Byte");
    questionnaire[2].addChoix("Octet");
    questionnaire[2].addReponse(1);

    questionnaire[3].setConsigne("Un octet est composé de...");
    questionnaire[3].addChoix("8 bits");
    questionnaire[3].addChoix("16 bits");
    questionnaire[3].addChoix("32 bits");
    questionnaire[3].addChoix("64 bits");
    questionnaire[3].addReponse(1);

    questionnaire[4].setConsigne("Le langage C est un langage");
    questionnaire[4].addChoix("De programmation procédural");
    questionnaire[4].addChoix("Compilé");
    questionnaire[4].addChoix("Interprété");
    questionnaire[4].addReponse(1);
    questionnaire[4].addReponse(2);

    questionnaire[5].setConsigne("Une variable est...");
    questionnaire[5].addChoix("Une zone en mémoire modifiable via son identificateur");
    questionnaire[5].addChoix("Un identificateur");
    questionnaire[5].addChoix("Un identificateur de fonction");
    questionnaire[5].addChoix("Une instruction conditionelle");
    questionnaire[5].addReponse(1);
*/

    // Itération sur le tableaux de questions
    for(int i=0; i<nbQuestion; i++)
    {
        int nb_choix = questionnaire[i].getChoix().size(); // Nombre de choix dans la question

        // Renvoie la consigne
        cout << questionnaire[i].getConsigne() << endl;

        // Ecris les choix dispos de la question
        for (int k=0; k<nb_choix; k++)
        {
            cout << k+1 << ") " << questionnaire[i].getChoix().at(k) << endl;
        }

        // Je donne ma réponse pour chaque choix dispos
        int reponse[nb_choix];
        cout << "Mettez 1 si VRAI, 0 si FAUX" << endl;
        for (int k=0; k<nb_choix; k++)
        {
            cout << k+1 << ") ";
            cin >> reponse[k];
        }

        // Vérification des réponses
        bool added = false; // Pour savoir si le point est déjà ajouté
        for (int k=0; k<nb_choix; k++)
        {
            if (reponse[k] == questionnaire[i].getReponses()[k] && !added) // Si réponse vraie j'ajoute 1
            {
                added = true;
                note += 1;
            }
            else if (reponse[k] != questionnaire[i].getReponses()[k]) // Arrête la vérif quand ma réponse est fausse
            {
                if (added) // Si j'avais juste et que j'ai mis une réponse fausse : je retire le point
                    note -= 1;
                break;
            }
        }
        
    }
    
    cout << "Votre note est de " << note << "/" << nbQuestion << endl; // Renvoie de la note

    return 0;
}