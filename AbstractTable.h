//
// Created by yarin665 on 11/06/18.
//

#ifndef EXAM_ABSTRACTTABLE_H
#define EXAM_ABSTRACTTABLE_H

#include <string>

using namespace std;

class AbstractTable{

    static int counter;

public:

    AbstractTable() = default;

    ~AbstractTable(){removeC();}

    static int count(){
        return counter;
    }

    static void addC(){
         counter++;
    }

    static void removeC(){
        counter--;
    }

    virtual void print()=0;

};

int AbstractTable::counter = 0;


#endif //EXAM_ABSTRACTTABLE_H
