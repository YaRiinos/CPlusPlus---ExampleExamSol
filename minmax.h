//
// Created by yarin665 on 11/06/18.
//

#ifndef EXAM_MINMAX_H
#define EXAM_MINMAX_H

#include <stdlib.h>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

template <typename T, typename S>
void  minmax(T startV1, T endV1, S startV2, S endV2){

     //Check Length
    int le1=distance(startV1,endV1);
    int le2=distance(startV2,endV2);

    if (le1 == le2){
        T& it1 = startV1;
        S& it2 = startV2;

        while(it1!=endV1){
            if (*it1 > *it2)
                iter_swap(it1,it2);

                it1++;it2++;
        }
    }

    else{
        if (le1>le2)
            cout<<"sequence 1 is longer"<<endl;
        else
            cout<<"sequence 2 is longer"<<endl;
    }
};



#endif //EXAM_MINMAX_H
