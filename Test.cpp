/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include <iostream>
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
    // 2 more cases
    text = "xxx pub bub yyy";
    CHECK(find(text, "bub") == string("pub")); //checks its get the first apperance
    CHECK(find(text, "bup") == string("pub"));
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi")); //0
    CHECK(find(text, "Happi") == string("Happi")); //16
    CHECK(find(text, "HAPPI") == string("Happi")); //31
    CHECK(find(text, "HaPpI") == string("Happi")); //6
    /* Add more checks here */
    
    // 28 more cases, 30 overall
    // assume lower case is 0, upper case is 1
    CHECK(find(text, "happI") == string("Happi")); // parallel to 1, binary-wise
    CHECK(find(text, "hapPi") == string("Happi")); // parallel to 2
    CHECK(find(text, "hapPI") == string("Happi")); // parallel to 3
    CHECK(find(text, "haPpi") == string("Happi")); // parallel to 4
    CHECK(find(text, "haPpI") == string("Happi")); // parallel to 5
    CHECK(find(text, "haPPI") == string("Happi")); // parallel to 7
    CHECK(find(text, "hAppi") == string("Happi")); // parallel to 8
    CHECK(find(text, "hAppI") == string("Happi")); // parallel to 9
    CHECK(find(text, "hApPi") == string("Happi")); // parallel to 10
    CHECK(find(text, "hApPI") == string("Happi")); // parallel to 11
    CHECK(find(text, "hAPpi") == string("Happi")); // parallel to 12
    CHECK(find(text, "hAPpI") == string("Happi")); // parallel to 13
    CHECK(find(text, "hAPPi") == string("Happi")); // parallel to 14
    CHECK(find(text, "hAPPI") == string("Happi")); // parallel to 15
    CHECK(find(text, "HappI") == string("Happi")); // parallel to 17
    CHECK(find(text, "HapPi") == string("Happi")); // parallel to 18
    CHECK(find(text, "HapPI") == string("Happi")); // parallel to 19
    CHECK(find(text, "HaPpi") == string("Happi")); // parallel to 20
    CHECK(find(text, "HaPpI") == string("Happi")); // parallel to 21
    CHECK(find(text, "HaPPi") == string("Happi")); // parallel to 22
    CHECK(find(text, "HaPPI") == string("Happi")); // parallel to 23
    CHECK(find(text, "HAppi") == string("Happi")); // parallel to 24
    CHECK(find(text, "HAppI") == string("Happi")); // parallel to 25
    CHECK(find(text, "HApPi") == string("Happi")); // parallel to 26
    CHECK(find(text, "HApPI") == string("Happi")); // parallel to 27
    CHECK(find(text, "HAPpi") == string("Happi")); // parallel to 28
    CHECK(find(text, "HAPpI") == string("Happi")); // parallel to 29
    CHECK(find(text, "HAPPi") == string("Happi")); // parallel to 30


}

/* Add more test cases here */
// 6 more cases, 36 overall 
TEST_CASE("Test replacement of p and f") {
    string text = "xxx happy yyy";
    CHECK(find(text, "haffy") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));
    text = "xxx people yyy";
    CHECK(find(text, "feofle") == string("people"));
    CHECK(find(text, "feople") == string("people"));
    CHECK(find(text, "peofle") == string("people"));

}
// 6 more cases, 42 overall
TEST_CASE("Test replacement of b and f") {
    string text = "xxx bobcat yyy";
    CHECK(find(text, "fofcat") == string("bobcat"));
    CHECK(find(text, "fobcat") == string("bobcat"));
    CHECK(find(text, "bofcat") == string("bobcat"));
    text = "xxx fof yyy";
    CHECK(find(text, "bob") == string("fof"));
    CHECK(find(text, "bof") == string("fof"));
    CHECK(find(text, "fob") == string("fof"));
}
// 6 more cases, 48 overall

TEST_CASE("Test replacement of v and w") {
    string text = "xxx wow yyy";
    CHECK(find(text, "vov") == string("wow"));
    CHECK(find(text, "vow") == string("wow"));
    CHECK(find(text, "wov") == string("wow"));
    text = "xxx vivid yyy";
    CHECK(find(text, "wiwid") == string("vivid"));
    CHECK(find(text, "wivid") == string("vivid"));
    CHECK(find(text, "viwid") == string("vivid"));

}
// 6 more cases, 52 overall

TEST_CASE("Test replacement of g and j ") {
    string text = "xxx gorgeous yyy";
    CHECK(find(text, "jorjeous") == string("gorgeous"));
    CHECK(find(text, "jorgeous") == string("gorgeous"));
    CHECK(find(text, "gorjeous") == string("gorgeous"));
    text = "xxx jojo yyy";
    CHECK(find(text, "gogo") == string("jojo"));
    CHECK(find(text, "jogo") == string("jojo"));
    CHECK(find(text, "gojo") == string("jojo"));
}
// 6 more cases, 58 overall

TEST_CASE("Test replacement of c and k ") {
    string text = "xxx cycle yyy";
    CHECK(find(text, "kykle") == string("cycle"));
    CHECK(find(text, "kycle") == string("cycle"));
    CHECK(find(text, "cykle") == string("cycle"));
    text = "xxx kiki yyy";
    CHECK(find(text, "cici") == string("kiki"));
    CHECK(find(text, "kici") == string("kiki"));
    CHECK(find(text, "ciki") == string("kiki"));
}
// 6 more cases, 64 overall

TEST_CASE("Test replacement of q and k ") {
    string text = "xxx koko yyy";
    CHECK(find(text, "qoqo") == string("koko"));
    CHECK(find(text, "qoko") == string("koko"));
    CHECK(find(text, "koqo") == string("koko"));
    text = "xxx qq yyy";
    CHECK(find(text, "kk") == string("qq"));
    CHECK(find(text, "qk") == string("qq"));
    CHECK(find(text, "kq") == string("qq"));
}
// 6 more cases, 70  overall

TEST_CASE("Test replacement of q and c ") {
    string text = "xxx cycle yyy";
    CHECK(find(text, "qyqle") == string("cycle"));
    CHECK(find(text, "cyqle") == string("cycle"));
    CHECK(find(text, "qycle") == string("cycle"));
    text = "xxx qq yyy";
    CHECK(find(text, "cc") == string("qq"));
    CHECK(find(text, "cq") == string("qq"));
    CHECK(find(text, "qc") == string("qq"));

}

// 6 more cases, 76 overall

TEST_CASE("Test replacement of s and z") {
    string text = "xxx sister yyy";
    CHECK(find(text, "zizter") == string("sister"));
    CHECK(find(text, "zister") == string("sister"));
    CHECK(find(text, "sizter") == string("sister"));
    text = "xxx zozo yyy";
    CHECK(find(text, "soso") == string("zozo"));
    CHECK(find(text, "sozo") == string("zozo"));
    CHECK(find(text, "zoso") == string("zozo"));
}
// 6 more cases, 82  overall

TEST_CASE("Test replacement of d and t") {
    string text = "xxx dudu yyy";
    CHECK(find(text, "tutu") == string("dudu"));
    CHECK(find(text, "dutu") == string("dudu"));
    CHECK(find(text, "tudu") == string("dudu"));
    text = "xxx thoughts yyy";
    CHECK(find(text, "dhoughds") == string("thoughts"));
    CHECK(find(text, "dhoughts") == string("thoughts"));
    CHECK(find(text, "thoughds") == string("thoughts"));
}
// 6 more cases, 88  overall

TEST_CASE("Test replacement of o and u") {
    string text = "xxx zoo yyy";
    CHECK(find(text, "zuu") == string("zoo"));
    CHECK(find(text, "zuo") == string("zoo"));
    CHECK(find(text, "zou") == string("zoo"));
    text = "xxx queue yyy";
    CHECK(find(text, "qoeoe") == string("queue"));
    CHECK(find(text, "qoeue") == string("queue"));
    CHECK(find(text, "queoe") == string("queue"));
}

// 6 more cases, 94  overall

TEST_CASE("Test replacement of i and y") {
    string text = "xxx Embiid yyy"; // (last name of nba player)
    CHECK(find(text, "Embyyd") == string("Embiid"));
    CHECK(find(text, "Embiyd") == string("Embiid"));
    CHECK(find(text, "Embyid") == string("Embiid"));
    text = "xxx yoyo yyy";
    CHECK(find(text, "ioio") == string("yoyo"));
    CHECK(find(text, "yoio") == string("yoyo"));
    CHECK(find(text, "ioyo") == string("yoyo"));
    
}



