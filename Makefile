CC=gcc
ECHO=echo -e

CFLAGS=-Wall -Werror -std=gnu99 -O0 -g
LIBS=

FILES=
OUT=

all: $(FILES)
	@$(ECHO) "Compiling..."
	@$(CC) $(CFLAGS) $(FILES) -o $(OUT) $(LIBS)
	@$(ECHO) "Done."

clean:
	@$(ECHO) "Cleaning..."
	@rm -f $(OUT)
	@$(ECHO) "Done."