/*
    Zadanie z platformy szkopul.edu.pl
    Nazwa zadania: H4x0r
    Link do zadania: https://szkopul.edu.pl/problemset/problem/-sW59iNCsLGhh8xyFPEmtn7F/site/?key=statement
    Wynik 100/100
*/

#include <iostream>
using namespace std;
int main()
{
    string napis_hackerski;

    cin >> napis_hackerski;

    for (int i = 0; i < napis_hackerski.size(); i++)
    {
        if (napis_hackerski[i] == 'a')
            napis_hackerski[i] = '4';
        else if (napis_hackerski[i] == 'e')
            napis_hackerski[i] = '3';
        else if (napis_hackerski[i] == 'i')
            napis_hackerski[i] = '1';
        else if (napis_hackerski[i] == 'o')
            napis_hackerski[i] = '0';
        else if (napis_hackerski[i] == 's')
            napis_hackerski[i] = '5';
    }

    cout << napis_hackerski;
}
