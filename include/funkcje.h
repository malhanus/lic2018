#ifndef FUNKCJE_H
#define FUNKCJE_H
#include <string>
#include "singleVertice.h"

using namespace std;

class Vertices
{
    public:
        Vertices();
        virtual ~Vertices();
        bool Wczytanie(string , string , string );
        char getZnak(ifstream &in);


    protected:
        singleVertice *verticeAnalize (string );

    private:

        float *vertices;

};

#endif // FUNKCJE_H
