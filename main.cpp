#include <iostream>

int firstInput  = 0;
int inCalcul    = 0;
int manageImput = 0;
char quitInput;

const char oui = 'o';
const char non = 'n';


bool inputOn = false;

int FIRST_INPUT();
int INPUT_WHILE();
int FIRSTINPUT_DETECTOR();
int QUIT_ASK_001();
int QUIT_INPUT_QA001();
int QUIT();
int HELPER();
int CLEAR();

///--------------------------------------------------

int main()
{
    // CODE:

    std::cout << " Bienvenue dans 'Organ Counter' !" << std::endl;
    FIRST_INPUT();
    
    while (inputOn == true)
    {
        FIRSTINPUT_DETECTOR();
        break;
    }

    return 0;
}



///------------------------------------------------------------------------------------------------------------------------------------------------------
///------------------------------------------------------------------------------------------------------------------------------------------------------
///------------------------------------------------------------------------------------------------------------------------------------------------------



int FIRST_INPUT()
{
    if (firstInput != 0)
    {
        firstInput = 0;
    }

    std::cout << "Enter une commande." << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "   ====================================================================== " << std::endl;
    std::cout << "   | [1] --> Commence un nouveau calcul.                                |          <-- Not working." << std::endl;
    std::cout << "   | [2] --> Ouvrir un fichier calculde organ counter (fichier '.OCCL').|          <-- Not working." << std::endl;
    std::cout << "   | [3] --> Ouvre l'aide.                                              |          <-- Not working." << std::endl;
    std::cout << "   | [4] --> Nettoyer.                                                  |          <-- Not working." << std::endl;
    std::cout << "   | [5] --> Quitte 'Organ Counter'.                                    |          <-- Not working." << std::endl;
    std::cout << "   ====================================================================== " << std::endl;

    std::cout << ">";
    std::cin >> firstInput;
    std::cin.ignore();

    FIRSTINPUT_DETECTOR();

    return 0;
}

int INPUT_WHILE()
{
    while (inputOn == true)
    {
        FIRST_INPUT();
    }

    inputOn = false;
    return 0;
}

int FIRSTINPUT_DETECTOR()
{
    if (firstInput < 0 && firstInput > 5)               ///entry detect
    {
        std::cout << "ERR: WRONG_ENTRY." << std::endl;
        std::cout << "Please retry..." << std::endl;

        INPUT_WHILE();
        FIRST_INPUT();
        std::cin.ignore();
    }
    else
    {
        if (firstInput == 1)                              ///start new calcul
        {
            //bla bla bla...
            inputOn = true;
        }
        if (firstInput == 2)                              ///open .occl file
        {
            //bla bla bla...
            inputOn = true;
        }
        if (firstInput == 3)                              ///open help
        {
            //bla bla bla...
            inputOn = true;
            HELPER();
            FIRST_INPUT();
        }
        if (firstInput == 4)                              ///clear prompt
        {
            CLEAR();
            FIRST_INPUT();
            inputOn = true;
        }
        if (firstInput == 5)                              ///quit program
        {
            //bla bla bla
            inputOn = true;
            QUIT_ASK_001();
        }
    }

    firstInput = 0;
    return 0;
}

int CLEAR()
{
    system("cls");

    return 0;
    //system("clear"); /* Sous Unix et dérivé */
    //system("cls"); /* Sous Windows */
}
//system("clear"); /* Sous Unix et dérivé */
//system("cls"); /* Sous Windows */


int QUIT_ASK_001()
{
    std::cout << "Etes-vous sure de vouloir quite Organ Counter ? [O/n]" << std::endl;
    std::cout << ">";
    std::cin >> quitInput;

    QUIT_INPUT_QA001();

    return 0;
}

int QUIT_INPUT_QA001()
{
    if (quitInput == oui)
    {
        QUIT();
    }
    if (quitInput == non)
    {
        FIRST_INPUT();
    }
    else
    {
        FIRST_INPUT();
    }

    return 0;
}

int QUIT()
{
    exit(0);
    
    return 0;
}


///--------------------------------------------------------------------------------------------------------------------------------------------------
///--------------------------------------------------------------------------------------------------------------------------------------------------
///--------------------------------------------------------------------------------------------------------------------------------------------------

int HELPER()
{
	std::cout << "************" << std::endl;
	std::cout << "*   AIDE   *" << std::endl;
	std::cout << "************" << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "    **************************" << std::endl;
	std::cout << "    *   AIDE AUX COMMANDES   *" << std::endl;
	std::cout << "    **************************" << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "        **************************" << std::endl;
	std::cout << "        *   COMMANDES BASIQUES   *" << std::endl;
	std::cout << "        **************************" << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "            [1] . Commence un nouveau calcul." << std::endl;
	std::cout << "            --------------------------------------------------" << std::endl;
	std::cout << "            Utiliser cette commandes pour commence un nouveau" << std::endl;
	std::cout << "            calcul." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "            *************************************" << std::endl;
	std::cout << "            *   AIDE : NOUVEAU CALCUL (START)   *" << std::endl;
	std::cout << "            *************************************" << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "                [STOP] . Arret de l'operation actuelle." << std::endl;
	std::cout << "                --------------------------------------------------" << std::endl;
	std::cout << "                Stop l'operation en cours." << std::endl;
	std::cout << "                Utiliser 'continue' pour poursuivre l'operation." << std::endl;
	std::cout << "                Permet egalement d'utiliser 'next', 'back' ou" << std::endl;
	std::cout << "                'done'." << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "                [CONTINUE] . Revenir au calcul." << std::endl;
	std::cout << "                --------------------------------------------------" << std::endl;
	std::cout << "                Permet de poursuivre l'operation apres un 'stop'." << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "                [NEXT] . Etape suivante." << std::endl;
    std::cout << "                --------------------------------------------------" << std::endl;
	std::cout << "                Entre 'next' quand Organ Counter declare avoir" << std::endl;
	std::cout << "                termine l'operation pour passe à l'operation" << std::endl;
	std::cout << "                suivante." << std::endl;
	std::cout << "                'next' peut aussi etre utiliser pour passer" << std::endl;
	std::cout << "                l'operation actuelle apres un 'stop'." << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "                [BACK] . Etapes precedantes." << std::endl;
	std::cout << "                --------------------------------------------------" << std::endl;
	std::cout << "                Entre 'back' quand Organ Counter declare avoir" << std::endl;
	std::cout << "                termine l'operation pour revenir à l'operation" << std::endl;
	std::cout << "                precedante." << std::endl;
	std::cout << "                'back' peut aussi être utiliser pour annuler" << std::endl;
	std::cout << "                l'operation actuelle apres un 'stop'." << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "                [DONE] . Termine l'operation en cours." << std::endl;
	std::cout << "                --------------------------------------------------" << std::endl;
	std::cout << "                Termine l'operation actuelle." << std::endl;
	std::cout << "                permet egalement de sauvgarder le calcul en cours." << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "                    ***************************************" << std::endl;
	std::cout << "                    *   AIDE : COMMANDES DE SAUVEGARDES   *          <-- Not working." << std::endl;
	std::cout << "                    ***************************************" << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "                        [1] . Sauvegarder le calcul (.txt)." << std::endl;
	std::cout << "                        --------------------------------------------------" << std::endl;
	std::cout << "                        Sauvegarder le calcul au format '.TXT' dans les" << std::endl;
	std::cout << "                        dossiers de Organ Counter (dossier : saves)." << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "                        [2] . Sauvegarder le calcul (.occl)." << std::endl;
	std::cout << "                        --------------------------------------------------" << std::endl;
	std::cout << "                        Sauvegarder le calculau format '.OCCL' dans les" << std::endl;
	std::cout << "                        dossiers de Organ Counter (dossier : saves)." << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------


	///--------------------------------------------------------------------------------------------------------------------------------------------------
    ///--------------------------------------------------------------------------------------------------------------------------------------------------
    ///--------------------------------------------------------------------------------------------------------------------------------------------------

	std::cout << "    **********************************" << std::endl;
	std::cout << "    *   INFORMATIONS DES COMMANDES   *" << std::endl;
	std::cout << "    **********************************" << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "        [1] . Commence un nouveau calcul." << std::endl;
	std::cout << "        --------------------------------------------------" << std::endl;
	std::cout << "        Cette commandes permet de démarrer un nouveau" << std::endl;
	std::cout << "        calcul. Elle execute une fonction appelle" << std::endl;
	std::cout << "        'NEW_CALCUL', en entrant une series de variable" << std::endl;
	std::cout << "        Organ Counter va realiser une series de calcul via" << std::endl;
	std::cout << "        des boucles de types 'while'." << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "        [2] . Aide." << std::endl;
	std::cout << "        --------------------------------------------------" << std::endl;
	std::cout << "        Pas besoin de l'expliquer vous l'avez devant les" << std::endl;
	std::cout << "        yeux." << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "        [3] . Ouvrir un fichiers.                                   <-- Not working." << std::endl;
	std::cout << "        --------------------------------------------------" << std::endl;
	std::cout << "        Cette commande execute une fonction permetant" << std::endl;
	std::cout << "        d'ouvrir un fichier depuis l'explorer ou via le" << std::endl;
	std::cout << "        chemin d'acces du fichier." << std::endl;
	std::cout << "        Organ Counter ne peut ouvrir que des fichiers en" << std::endl;
	std::cout << "        '.OCCL'. Les fichiers '.OCCL' sont des fichiers" << std::endl;
	std::cout << "        XML." << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "        [4] . Stop." << std::endl;
	std::cout << "        --------------------------------------------------" << std::endl;
	std::cout << "        La commande 'stop' permet basiquement de stopper " << std::endl;
	std::cout << "        la tache actuelle. Permetant alors d'effectuer un" << std::endl;
	std::cout << "        nettoyage du prompt (clear), terminer un calcul" << std::endl;
	std::cout << "        (done), ou quitte Organ Counter (quit)" << std::endl;
    std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "        [5] . Quiter Organ Counter." << std::endl;
	std::cout << "        --------------------------------------------------" << std::endl;
	std::cout << "        Execute une fonction appellé 'QUIT_ASK', qui vous" << std::endl;
	std::cout << "        demandera alors si vous êtes sur de vouloir quitte" << std::endl;
	std::cout << "        Organ Counter. Pour quité entre 'o' pour 'Oui'," << std::endl;
	std::cout << "        pour annuler, entre 'n' pour 'non'." << std::endl;
	std::cout << " " << std::endl;          //-------------------------------------------------- --- ------------------------------
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;
	std::cout << "    " << std::endl;

	///--------------------------------------------------------------------------------------------------------------------------------------------------

	return 0;
}

//std::cout << "    " << std::endl;
//std::cout << "" << std::endl;
//std::cout << "    --------------------------------------------------" << std::endl;

//--------------------------------------------------
//-------------------------------------------------- ---
//-------------------------------------------------- --- ------------------------------

///--------------------------------------------------------------------------------------------------------------------------------------------------
