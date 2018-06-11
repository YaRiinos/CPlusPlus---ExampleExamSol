//
// Created by yarin665 on 11/06/18.
//

#ifndef EXAM_INTEGERTABLE_H
#define EXAM_INTEGERTABLE_H

class IntegerTable : public AbstractTable{
    int intSize;
    int *theArr;

public:
    IntegerTable(int newSize): intSize(newSize){
        AbstractTable::addC();
        theArr = new int [newSize];
    }

    ~IntegerTable(){AbstractTable::removeC();}

    void  print(){
        for (int i = 0; i < intSize; ++i) {
            cout<<theArr[i]<<" ";
        }
        cout<<endl;
    }
};

#endif //EXAM_INTEGERTABLE_H
