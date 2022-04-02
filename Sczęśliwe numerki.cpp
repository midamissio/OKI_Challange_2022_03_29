/*
    Zadanie z platformy codeforces.com
    Nazwa zadania: Nearly Lucky Number
    Link do zadaniia: https://codeforces.com/problemset/problem/110/A
    Wynik: 100/100
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string liczba;
    int liczba_cyfr = 0;

    cin >> liczba;
    //liczba_cyfr = liczba.size();
    //liczba = to_string(liczba_cyfr);

    for (int i = 0; i < liczba.size(); i++)
        if (liczba[i] == '7' || liczba[i] == '4')
            liczba_cyfr++;
    
    if (liczba_cyfr == 7 || liczba_cyfr == 4)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}