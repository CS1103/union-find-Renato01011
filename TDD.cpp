#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "templates.h"

SCENARIO("Union Find") {
    GIVEN("One union find vector") {
        WHEN("n = 0") {
            THEN("is_empty is true") {
                UF <int> uf(0);
                REQUIRE(uf.is_empty() == true);
            }
        }
    }
}

SCENARIO("Union Find 2") {
    GIVEN("One union find vector") {
        WHEN("n = 5, 14 >> 13 >> 8 >> 3") {
            THEN("father of 14 is 3") {
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
                REQUIRE(s == "3");
            }
        }
    }
}