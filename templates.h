#ifndef CLASE_5_24_TEMPLATES_H
#define CLASE_5_24_TEMPLATES_H
#include <iostream>
#include <queue>
#include <cmath>

template <typename T>
struct Node {
    Node(int id): id{id}, father{nullptr} {}
    int id;
    Node<T>* father;
    std::string PrintId() {return std::to_string(id);}
    std::string PrintFather() {if (father != nullptr) {return father->PrintId();} else return "No father";}
};

template <typename T>
class UF {
private:
    std::vector <Node<T>> v;
public:
    UF<T>(int n) {
        for (int i = 0; i < pow(n,2); i++)
            v.push_back(Node<T>(i));
    }
    Node <T>* FindParent(int n) {
        Node <T>* father = nullptr;
        father = &v[n];
        bool Condition = true;
        while (Condition) {
            if (father->father != nullptr) {father = father->father;}
            else {Condition = false;}
        }
        return father;
    }
    Node <T>& operator[](int n) {return v[n];}
    bool is_empty() {if (v.size() == 0) {return true;} else return false;}
};

template <typename T>
void operator>>(Node<T> &par1, Node<T> &par2) {
    par1.father = &par2;
};


#endif //CLASE_5_24_TEMPLATES_H