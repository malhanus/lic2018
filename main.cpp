#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include "funkcje.h"

struct testStruct{
    float x;
    float y;
    float z;
};

using namespace std;
int main()
{
        string linia;
        ifstream plik;
        plik.open("cube.txt");
        char aaa;
        plik.get(aaa);
        cout << aaa;
        Vertices *xaaa = new Vertices();
        cout << xaaa->getZnak(plik);
        /*while(getline(plik,linia))
        {
            cout<<linia<<endl;

        }*/
        //sequence 1
        string test ="V2: P(-1, -1, -2) N(0, -1, 0) TC(0, 0)";
        char miss;
        int nrV;
        istringstream robStream(test);
        testStruct ts;
        robStream >> miss >> nrV >> miss >> miss >> miss >>
            ts.x >> miss >> ts.y >> miss >> ts.z >>
            miss >> miss >> miss ;

        cout << ts.x << " " << ts.y << " " << ts.z << endl;
        //end sequence 1
    return 0;
}
