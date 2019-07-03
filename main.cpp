#include <iostream>
#include "MatrixTemplate.h"

int main() {

     MatrixTemplate<int> A(3, 2);
    A.setValue(1, 1, 4);
    A.setValue(1, 2, 2);
    A.setValue(2, 1, 6);
    A.setValue(2, 2, 3);
    A.setValue(3, 1, 2);
    A.setValue(3, 2, 1);
    A.print();
    MatrixTemplate<int> B(2, 3);
    B.setValue(1, 1, 2);
    B.setValue(1, 2, 0);
    B.setValue(1, 3, 5);
    B.setValue(2, 1, 1);
    B.setValue(2, 2, 5);
    B.setValue(2, 3, 3);
    B.print();
    MatrixTemplate<int> C = A * B;
    C.print();
    MatrixTemplate<int> D = C.transpose();
    D.print();
    MatrixTemplate<int> Dcl = D.selectColumn(1);
    Dcl.print();
    MatrixTemplate<int> Drw = D.selectRow(3);
    Drw.print();
}
