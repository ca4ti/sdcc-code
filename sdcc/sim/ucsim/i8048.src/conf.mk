# i8048.src/conf.mk
#
# Makefile targets to remake configuration
#

freshconf: Makefile

Makefile: $(srcdir)/Makefile.in $(top_srcdir)/configure.ac
	cd $(top_builddir) && $(SHELL) ./config.status

# End of i8048.src/conf.mk
