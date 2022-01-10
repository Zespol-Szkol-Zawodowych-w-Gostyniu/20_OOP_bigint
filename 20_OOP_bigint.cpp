//Klasa bigint
#include <iostream>
#include <string>
#include "bigint.h"

using namespace std;


int main()
{
    //bigint num1("2");
    //bigint num2("2");
    //bigint num1("12345678901234567890123456789010234567");
    bigint num2("123456789012345678901234567890102345671234567890123456789012345678901023456712345678901234567890123456789010234567");
    bigint num3;
    num2.decTobin();
    cout << num2.binnumber << endl;
    cout << num2.bingetLen() << endl;
    //cout << (num1 > num2) << endl;
    //cout << num1.err << endl;
    //cout << num1.getNumber() << endl;
   /* num3 = num1  / num2;
    cout << num3.getNumber() << endl;
    cout << num3.getLen() << endl;*/

    //Tablice obiektów
    //dla tablicy statycznej
    bigint tabBigNumber[3];
    tabBigNumber[0].setNumber("1200");
    tabBigNumber[1].setNumber("1300");
    tabBigNumber[2].setNumber("1400");
    cout << tabBigNumber[1].getNumber() << endl;
    //dla tablicy dynamicznej
    bigint* wsk = new bigint[3];
    wsk->setNumber("800");
    wsk[1].setNumber("900");
    wsk[2].setNumber("1000");
    cout << wsk[2].getNumber() << endl;

    //dla tablicy dynamicznej z wskaźnikami do obiektów klasy
    int x = 3;
    bigint** wsk1 = new bigint*[x];
    wsk1[0] = new bigint("2100");
    wsk1[1] = new bigint("3100");
    wsk1[2] = new bigint("4100");
    cout << wsk1[0]->getNumber() << endl;

}
