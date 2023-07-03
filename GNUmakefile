TMP_SUFFIX := $(shell echo $$$$)

ifeq ($(MAKECMDGOALS),)
ifeq ($(NAME),)
$(error No NAME found)
else

all: $(NAME)
.PHONY: all

$(NAME): $(shell find src -type f -name "*.c" | cut -c 4- | sed s/\\.c\$$/.o/ | sed s/^/obj/)
	mkdir -p tmp
	ar cr tmp/libft_array_builder.$(TMP_SUFFIX).a $^
	rm -f $@
	mkdir -p $(@D)
	mv tmp/libft_array_builder.$(TMP_SUFFIX).a $@

endif
endif

.NOTPARALLEL: install.flag
install.flag:
	mkdir -p local
	INSTALL_DIR=../../local $(MAKE) -C submodules/branch install
	INSTALL_DIR=../../local $(MAKE) -C submodules/common install
	touch $@

obj/%.o: src/%.c install.flag
	rm -f $@.tmp $@
	mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -I include -I local/include $(CFLAGS) -c -o $@.tmp $<
	mv $@.tmp $@

.PHONY: clean
clean:
	rm -rf obj tmp

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.NOTPARALLEL: re
.PHONY: re
re: fclean
	$(MAKE) all

.NOTPARALLEL: install
.PHONY: install
install:
ifeq ($(INSTALL_DIR),)
	@([ -t 2 ] && printf "\033[0;31m[ERROR]\033[0m" || printf "[ERROR]") 1>&2 && printf " No INSTALL_DIR given.\n" 1>&2 && false
else
	mkdir -p $(INSTALL_DIR)/lib $(INSTALL_DIR)/include $(INSTALL_DIR)/src
	NAME=$(INSTALL_DIR)/lib/libft_array_builder.a $(MAKE)
	cp -f include/*.h $(INSTALL_DIR)/include
	cp -rf src/* $(INSTALL_DIR)/src
endif
