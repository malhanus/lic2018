#include "funkcje.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "singleVertice.h"
#include <sstream>

using namespace std;



Vertices::Vertices()
{
    //ctor
}

Vertices::~Vertices()
{
    //dtor
}

bool Vertices:: Wczytanie (string plikCuba, string plikSfera, string plikPostac)
{
    ifstream plik (plikCuba.c_str());
    if(!plik)
    {
        return false;
    }


}

singleVertice *Vertices::verticeAnalize (string linia )
{
    float tab[8];
    int nrV;
    char miss;
    istringstream robStream(linia);
    robStream >> miss >> nrV >> miss >> miss >> miss >>
            tab[0] >> miss >> tab[1] >> miss >> tab[2] >>
            miss >> miss >> miss >>
            tab[3] >> miss >> tab[4] >> miss >> tab[5] >>
            miss >> miss >> miss >> miss >>
            tab[6] >> miss >> tab[7];
    return new singleVertice(tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7]);
}
char Vertices::getZnak(ifstream & in){
    char temp;
    in >> temp;
    return temp;
}

