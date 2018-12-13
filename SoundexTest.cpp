#include "Soundex.h"
#include "gmock/gmock.h"
using ::testing::Eq;

class SoundexEncoding: public testing::Test
{
public:
    Soundex soundex;
};

TEST_F(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
   ASSERT_THAT(soundex.encode("A"), Eq("A000"));
}

TEST_F(SoundexEncoding, PadsWithZeroesToEnsure3Digits)
{
    ASSERT_THAT(soundex.encode("I"), Eq("I000"));
}
