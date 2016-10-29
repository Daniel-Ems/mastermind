CPPFLAGS+=	-Wall -Wextra -Wpedantic -Wwrite-strings -Wstack-usage=1024
CPPFLAGS+= -Wfloat-equal -Waggregate-return -Winline

CFLAGS+=-std=c11

LDLIBS += -lm

#CFLAGS+=-g

mastermind: mastermind.c


