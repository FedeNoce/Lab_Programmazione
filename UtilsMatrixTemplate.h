//
// Created by federico on 01/03/19.
//

#ifndef MATRIC_CALCULATOR_UTILSMATRIXTEMPLATE_H
#define MATRIC_CALCULATOR_UTILSMATRIXTEMPLATE_H

#include <cmath>
#include <cfloat>



template<typename T>
bool isEqual(const T&left, const T&right) {
    return left==right;
}

template<>
bool isEqual<float>(const float&left,const float&right) {
    return fabsf(left - right) <= FLT_EPSILON;
}

template<>
bool isEqual<double>(const double&left,const double&right) {
    return fabs(left - right) <= FLT_EPSILON;
}

#endif //MATRIC_CALCULATOR_UTILSMATRIXTEMPLATE_H
