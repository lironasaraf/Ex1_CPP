#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
//using namespace std;

std::string nospaces(std::string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}
/////////hats
std::string hat1 = "       \n _===_ "; //1
std::string hat2 = "  ___  \n ..... \n";//2
std::string hat3 = "   _   \n  /_\\  ";//3
std::string hat4 = "  ___  \n (_*_) ";//4
/////////nose
// string nose1 = ",";
// string nose2 = ".";
// string nose3 = "_";
// string nose4 = " ";
// /////////left eye
// string lefteye1 = ".";
// string lefteye2 = "o";
// string lefteye3 = "O";
// string lefteye4 = "-";
// /////////right eye
// string righteye1 = ".";
// string righteye2 = "o";
// string righteye3 = "O";
// string righteye4 = "-";
// /////////left arm
// string leftarm1 = "<";


// /////////turso
// string turso1 = "( : )";
// string turso2 = "(] [)";
// string turso3 = "(> <)";
// string turso4 = "(   )";

// /////////base
// string base1 = "( : )";
// string base2 = "(\" \")";
// string base3 = "(___)";
// string base4 = "(   )";










TEST_CASE("Good snowman code") {
    //CHECK(nospaces(snowman(11114411)) == nospaces("hat1\n(.nose1.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11111111)) == nospaces(hat1+"\n(.,.)\n<( : )>\n( : )"));
	CHECK(nospaces(snowman(22222222)) == nospaces(hat2+"\n\\(o.o)/\n(] [)\n(\" \")"));
    CHECK(nospaces(snowman(33333333)) == nospaces(hat3+"\n(O_O)\n/(> <)\\\n(___)"));
    CHECK(nospaces(snowman(44444444)) == nospaces(hat4+"\n(- -)\n(   )\n(   )"));

    /* Add more checks here */
}

TEST_CASE("Good Hats") {
	CHECK(nospaces(snowman(11114411)) == nospaces(hat1+"\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21114411)) == nospaces(hat2+"\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(31114411)) == nospaces(hat3+"\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(41114411)) == nospaces(hat4+"\n(.,.)\n( : )\n( : )"));

}

TEST_CASE("Good Noses") {
	CHECK(nospaces(snowman(11114411)) == nospaces(hat1+"\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12114411)) == nospaces(hat1+"\n(...)\n( : )\n( : )"));
    CHECK(nospaces(snowman(13114411)) == nospaces(hat1+"\n(._.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(14114411)) == nospaces(hat1+"\n(. .)\n( : )\n( : )"));
	
}

TEST_CASE("Good Left Eyes") {
	CHECK(nospaces(snowman(11114411)) == nospaces("hat1\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11214411)) == nospaces("hat1\n(o,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11314411)) == nospaces("hat1\n(O,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11414411)) == nospaces("hat1\n(-,.)\n( : )\n( : )"));
}

TEST_CASE("Good Right Eyes") {
	CHECK(nospaces(snowman(11114411)) == nospaces("hat1\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11124411)) == nospaces("hat1\n(.,o)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11134411)) == nospaces("hat1\n(.,O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11144411)) == nospaces("hat1\n(.,-)\n( : )\n( : )"));
}

TEST_CASE("Good Left Arms") {
	CHECK(nospaces(snowman(11111411)) == nospaces("hat1\n(.,.)\n<( : )\n( : )"));
    CHECK(nospaces(snowman(11112411)) == nospaces("hat1\n\\(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11113411)) == nospaces("hat1\n(.,.)\n/( : )\n( : )"));
    CHECK(nospaces(snowman(11114411)) == nospaces("hat1\n(.,.)\n( : )\n( : )"));
}

TEST_CASE("Good Right Arms") {
	CHECK(nospaces(snowman(11114111)) == nospaces("hat1\n(.,.)\n( : )>\n( : )"));
    CHECK(nospaces(snowman(11114211)) == nospaces("hat1\n(.,.)/\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114311)) == nospaces("hat1\n(.,.)\n( : )\\\n( : )"));
    CHECK(nospaces(snowman(11114411)) == nospaces("hat1\n(.,.)\n( : )\n( : )"));
}

TEST_CASE("Good Torsos") {
	CHECK(nospaces(snowman(11114411)) == nospaces("hat1\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114421)) == nospaces("hat1\n(.,.)\n(] [)\n( : )"));
    CHECK(nospaces(snowman(11114431)) == nospaces("hat1\n(.,.)\n(> <)\n( : )"));
    CHECK(nospaces(snowman(11114441)) == nospaces("hat1\n(.,.)\n(   )\n( : )"));
}

TEST_CASE("Good Bases") {
	CHECK(nospaces(snowman(11114411)) == nospaces("hat1\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114412)) == nospaces("hat1\n(.,.)\n( : )\n(\" \")"));
    CHECK(nospaces(snowman(11114413)) == nospaces("hat1\n(.,.)\n( : )\n(___)"));
    CHECK(nospaces(snowman(11114414)) == nospaces("hat1\n(.,.)\n( : )\n(   )"));
}
TEST_CASE("Bad snowman code") {
	CHECK_THROWS(snowman(666));
	CHECK_THROWS(snowman(11111110));
	CHECK_THROWS(snowman(4444444));
	CHECK_THROWS(snowman(0));
	CHECK_THROWS(snowman(999919999));
	CHECK_THROWS(snowman(12341235));
	CHECK_THROWS(snowman(00000001));
}

TEST_CASE("Not legal 8 digit num:") {
    CHECK_THROWS(snowman(91111121));
    CHECK_THROWS(snowman(29224412));
    CHECK_THROWS(snowman(22911113));
    CHECK_THROWS(snowman(21294321));
    CHECK_THROWS(snowman(11119111));
    CHECK_THROWS(snowman(13322912));
    CHECK_THROWS(snowman(11111192));
    CHECK_THROWS(snowman(99999999));
}

TEST_CASE("Less then 8 digit") {
    CHECK_THROWS(snowman(1));
	CHECK_THROWS(snowman(12));
	CHECK_THROWS(snowman(123));
	CHECK_THROWS(snowman(1234));
	CHECK_THROWS(snowman(12344));
	CHECK_THROWS(snowman(123444));
	CHECK_THROWS(snowman(1234444));
}

TEST_CASE("Negative Number") {
	CHECK_THROWS(snowman(-111111111));
	CHECK_THROWS(snowman(1111-1111));
	CHECK_THROWS(snowman(2222-1-234));
	CHECK_THROWS(snowman(-1));
}




/* Add more test cases here */
