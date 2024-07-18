#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
 ASSERT_EQ(soundex,"A200");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_1) {
 //AAA
  char soundex[5];
  generateSoundex("john", soundex);
 ASSERT_EQ(soundex,"A200");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_2) {
 //AAA
  char soundex[5];
  generateSoundex("@@ty", soundex);
 ASSERT_EQ(soundex,"A200");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_Vowels) {
 //AAA
  char soundex[5];
  generateSoundex("uoiea", soundex);
 ASSERT_EQ(soundex,"A200");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_Spaces) {
 //AAA
  char soundex[5];
  generateSoundex("   ", soundex);
 ASSERT_EQ(soundex,"A200");
}




