/*
   pr79043.c from the execute part of the gcc torture tests.
 */

#include <testfwk.h>

#ifdef __SDCC
#pragma std_c99
#endif

#include <stdint.h>

unsigned long long f1 (int32_t x)
{
  return ((unsigned long long) x) << 4;
}

long long f2 (uint32_t x)
{
  return ((long long) x) << 4;
}

unsigned long long f3 (uint32_t x)
{
  return ((unsigned long long) x) << 4;
}

long long f4 (int32_t x)
{
  return ((long long) x) << 4;
}

void
testTortureExecute (void)
{
#ifndef __SDCC_s08
#ifndef __SDCC_hc08
#ifndef __SDCC_ds390
  if (f1 (0xf0000000) != 0xffffffff00000000)
    ASSERT (0);
  if (f2 (0xf0000000) != 0xf00000000)
    ASSERT (0);
  if (f3 (0xf0000000) != 0xf00000000)
    ASSERT (0);
  if (f4 (0xf0000000) != 0xffffffff00000000)
    ASSERT (0);
  return;
#endif
#endif
#endif
}
