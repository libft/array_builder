test:
	@([ -t 2 ] && printf "\033[0;31m[ERROR]\033[0m" || printf "[ERROR]") 1>&2 && printf " No test provided.\n" 1>&2 && false
.PHONY: test

.PHONY: clean
clean:
	rm -f test.exe

.PHONY: fclean
fclean: clean

.NOTPARALLEL: re
.PHONY: re
re: fclean
	$(MAKE)
