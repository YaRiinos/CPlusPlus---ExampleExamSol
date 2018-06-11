//
// Created by yarin665 on 11/06/18.
//

#ifndef EXAM_STRINGTABLE_H
#define EXAM_STRINGTABLE_H



class StringTable : public AbstractTable{
    int stringSize;
    string* theArr;

public:
    StringTable(int newSize): stringSize(newSize), theArr(new string [newSize]) {
        for (int i = 0; i < newSize; ++i) {
            theArr[i]='.';
        }
        AbstractTable::addC();
    }

    ~StringTable(){AbstractTable::removeC();}

    void  print(){
        for (int i = 0; i < stringSize; ++i) {
            cout<<theArr[i]<<" ";
        }
        cout<<endl;
    }
};

#endif //EXAM_STRINGTABLE_H
