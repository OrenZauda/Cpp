#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;

//10 test 
TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happy xxx yyy";
    //5 tests, from 1 to 5 in binary
    CHECK(find(text, "Happy") == string("Happy"));
    CHECK(find(text, "HAPPy") == string("Happy"));
    CHECK(find(text, "HAPpy") == string("Happy"));
    CHECK(find(text, "HAppy") == string("Happy"));
    CHECK(find(text, "HAppy") == string("Happy"));
    //another 5, when A is in upper case
    CHECK(find(text, "hAPPY") == string("Happy"));
    CHECK(find(text, "hAPPy") == string("Happy"));
    CHECK(find(text, "hAPpy") == string("Happy"));
    CHECK(find(text, "HAppY") == string("Happy"));
    CHECK(find(text, "hAppy") == string("Happy"));
    //another 5
    CHECK(find(text, "hAppy") == string("Happy"));
    /* Add more checks here */
}
