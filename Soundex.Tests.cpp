#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("BX", soundex);
 ASSERT_EQ(soundex,"B200");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_1) {
 //AAA
  char soundex[5];
  generateSoundex("Aeiou", soundex);
 ASSERT_EQ(soundex,"A000");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_2) {
 //AAA
  char soundex[5];
  generateSoundex("Bgfp", soundex);
 ASSERT_EQ(soundex,"B210");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_3) {
 //AAA
  char soundex[5];
  generateSoundex("D#", soundex);
 ASSERT_EQ(soundex,"D000");
}
TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits_4) {
 //AAA
  char soundex[5];
  generateSoundex("#", soundex);
 ASSERT_EQ(soundex,"0000");
}




