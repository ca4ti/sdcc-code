// Derived from test case from the memory model study group of SC22 WG14
// For this test, behaviour is defined in the PNVI-ae-udi memory model.

/*
Original test copyright (c) 2012-2016 David Chisnall, Kayvan Memarian, and Peter Sewell.

Permission to use, copy, modify, and/or distribute this software for
any purpose with or without fee is hereby granted, provided that the
above copyright notice and this permission notice appear in all
copies.

THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
PERFORMANCE OF THIS SOFTWARE.
*/

// Adapted for SDCC by Philipp Klaus Krause in 2020.

#include <testfwk.h>

#pragma disable_warning 127

#include <string.h> 
#include <stdint.h>

void
testMM(void)
{
// PNVI-ae-udi non-compliance in PPC for at least GCC 4.9.2 and GCC 7.2.0
#if !(defined(__GNUC__) && (defined(__PPC__) || defined(__POWERPC__))) 
#if !defined(__FreeBSD__) || !(defined(__clang__) && __clang_major__ <= 14) // On FreeBSD 13 on arch64, this test fails for clang 11, clang 13 and clang14. On amd64 it fails for clang 6, but passes with clang 14. FreeBSD bug #273773.
  int y=2, x=1;
  uintptr_t ux = (uintptr_t)&x;
  uintptr_t uy = (uintptr_t)&y;
  uintptr_t offset = sizeof(int);
  ux = ux + offset;
  int *p = (int *)ux; // does this have undefined behaviour?
  int *q = &y;

  if (memcmp(&p, &q, sizeof(p)) == 0) {
    *p = 11; // does this have undefined behaviour?
    ASSERT (*p == *q);
    ASSERT (*p == y);
  }
#endif // __clang__
#endif
}

