#include <iostream>
#include <string>
using namespace std;

class Soundex
{
public:
    string encode(const string& word) const
    {
        return word;
    }
};

#include "gmock/gmock.h"
using ::testing::Eq;
TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
   Soundex soundex;
   auto encode = soundex.encode("A");
   ASSERT_THAT(encode, Eq("A"));
}

