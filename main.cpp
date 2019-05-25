/*
#include <iostream>
#include <vector>
#include "templates.h"

int main() {

    UF <int> uf(5);
    uf[1] >> uf[0];
    uf[14] >> uf[13];
    uf[13] >> uf[8];
    uf[8] >> uf[3];
    uf[24] >> uf[23];
    uf[21] >> uf[20];
    uf[20] >> uf[15];

    Node<int>* n = uf.FindParent(14);
    std::string s = n->PrintId();
    std::cout << s;

    return 0;
}
*/