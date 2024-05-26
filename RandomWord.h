#ifndef RANDOMWORD_H_INCLUDED
#define RANDOMWORD_H_INCLUDED
#include <fstream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

string RandomWord ()
{
    ifstream in ("data.txt");
    int n;
    in >> n;
    srand(time(NULL));
    int random = rand()%n+1;
    string cuvant;


    for (int i = 0; i < random; i++)
    {
        in >> cuvant;
    }
    in.close();
    return cuvant;
}


#endif // RANDOMWORD_H_INCLUDED
