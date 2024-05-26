#ifndef PARSARECUVANT_H_INCLUDED
#define PARSARECUVANT_H_INCLUDED
#include <string>
using namespace std;

string EliminaLitera (string cuvant)
{
    char prima_lit = cuvant[0];
    for (int i = 0; i < cuvant.length(); i++)
    {
        if (cuvant[i] != prima_lit)
            cuvant[i] = '*';
    }
    return cuvant;
}

string ReadaugaLitera (string cuvant, char litera, string cuvant_bun)
{
    for (int i = 0; i < cuvant.length(); i++)
    {
        if (litera == cuvant_bun[i])
        {
            cuvant[i] = litera;
        }
    }
    return cuvant;
}


#endif // PARSARECUVANT_H_INCLUDED
