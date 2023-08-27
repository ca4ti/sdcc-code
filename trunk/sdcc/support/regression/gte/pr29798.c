/* suppress warning W_LOCAL_NOINIT, oldrho is not used uninitialized
   but that is hard to spot for the compiler */
#pragma disable_warning 84

extern void abort (void);

int
main (void)
{
  int i;
  double oldrho;
  double beta = 0.0;
  double work = 1.0;
  for (i = 1; i <= 2; i++)
    {
      double rho = work * work;
      if (i != 1)
        beta = rho / oldrho;
      if (beta == 1.0)
        abort ();

      /* All targets even remotely likely to ever get supported
	 use at least an even base, so there will never be any
	 floating-point rounding. All computation in this test
	 case is exact for even bases.  */
      work /= 2.0;
      oldrho = rho;
    }
  return 0;
}
