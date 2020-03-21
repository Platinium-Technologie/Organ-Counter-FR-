#include <iostream>

const char yes = 'y';
const char no  = 'n';

const char next = 'next';
const char back = 'back';
const char done = 'done';
const char save = 'save';
const char stop = 'stop';
const char quit = 'quit';

int A = 0;

int KeyBoardNbr = 0;
int KeyNbr      = 0;
int PedalNbr    = 0;

char KeyBoardNbrVER;
char KeyNbrVER;
char KeyBoardVER;
char PedalNbrVER;

//----------------------------------------------------------------------------------------------------

char Calc001;

//----------------------------------------------------------------------------------------------------

int FIRST_ENTRY();
int BASIC_ENTRY();
int RANG_ENTRY();

int FIRST_ENTRY_001();
int FIRST_ENTRY_001_S();

int FIRST_ENTRY_002();
int FIRST_ENTRY_002_S();

//----------------------------------------------------------------------------------------------------

int main()
{
    FIRST_ENTRY();

    return 0;
}

//----------------------------------------------------------------------------------------------------

int FIRST_ENTRY()
{
    std::cout << "Welcome to the Organ Counter calculator." << std::endl;

    

    std::cout << "Now, enter the number of key on you key board :" << std::endl;
    std::cout << ">";
    std::cin >> KeyNbr;

    std::cout << "So, you have" << KeyNbr << "Keys ? [Y/n]" << std::endl;
    std::cin >> KeyNbrVER; //------------------------------------------------------------------------

    std::cout << "So, in total you have :" << std::endl;
    std::cout << KeyBoardNbr << "key board for," << KeyNbr << "key, each ? [Y/n]" << std::endl;
    std::cin >> KeyBoardVER; //----------------------------------------------------------------------

    std::cout << "Ok, so now, pedal, how many pedals you have :" << std::endl;
    std::cout << ">";
    std::cin >> PedalNbr;

    std::cout << "So, in total you have" << PedalNbr << "Pedals ? [Y/n]" << std::endl;
    std::cin >> PedalNbrVER; //----------------------------------------------------------------------

    std::cout << "Let's recap : you have :" << std::endl;
    std::cout << KeyBoardNbr << "key board for," << KeyNbr << "key, each." << std::endl;
    std::cout << PedalNbr << "Pedals" << std::endl;
    std::cout << "Do you want to continue ?" << std::endl;
    std::cout << "[NEXT] [BACK] . [DONE]" << std::endl;
    std::cout << ">";
    std::cin >> Calc001;

    std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;

    return 0;
}

int FIRST_ENTRY_001()
{
    std::cout << "First, enter the number of key board :" << std::endl;
    std::cout << ">";
    std::cin >> KeyBoardNbr;
}

int FIRST_ENTRY_001_S()
{
    std::cout << "So, you have" << KeyBoardNbr << "key board ? [Y/n]" << std::endl;
    std::cin >> KeyBoardNbrVER; //-------------------------------------------------------------------
}

int FIRST_ENTRY_002()
{
    //---
}

int FIRST_ENTRY_002_S()
{
    //---
}




int BASIC_ENTRY()
{
    return 0;
}
int RANG_ENTRY()
{
    return 0;
}