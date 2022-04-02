/*
    Zadanie z platformy oki.org.pl
    Nazwa zadanie: Kolejka v2
    Link do zadania: https://oki.org.pl/kolejka-v2-zadanie/
    Wynik: 100/100
 */

#include <iostream>
#include <vector>
using namespace std;

class mqueue {
public:
    mqueue() {
        first = last = -1;
    }
    bool empty() {
        if (first == -1)
            return true;
        return false;
    }
    void push(int value) {
        if (empty() == true) {
            elements.push_back(value);
            first = last = 0;
            return;
        }
        elements.push_back(value);
        ++last;
    }
    int dequeue() {
        int value;
        if (empty()) {
            return value;
        }
        if (first == last) {
            value = elements[first];
            first = last = -1;
            elements.clear();
            return value;
        }
        value = elements[first];
        ++first;
        return value;
    }

    void pop()
    {
        dequeue();
    }
    int size()
    {
        return elements.size();
    }
    int first_in_vector()
    {
        return elements[first];
    }
private:
    vector<int> elements;
    int first, last;
};

int main() {
    mqueue	payments;
    int value;

    cout << "empty?: " << payments.empty() << "\n";
    payments.push(5);
    payments.push(-3);
    payments.push(8);
    cout << "empty?: " << payments.empty() << "\n";
    cout << "serviced: " << payments.dequeue() << "\n";
    cout << "serviced: " << payments.dequeue() << "\n";
    payments.push(11);
    cout << "serviced: " << payments.dequeue() << "\n";
    cout << "serviced: " << payments.dequeue() << "\n";
    cout << "empty?: " << payments.empty() << "\n";
    cout << "size: " << payments.size() << endl;
    payments.push(10);
    cout << payments.first_in_vector() << endl;
    payments.pop();
    cout << "empty?: " << payments.empty();
    return 0;
}