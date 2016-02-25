# Header Files
INCFLAGS  = -I vecmath/include/

# Library Files
LINKFLAGS = -lglut -lGL -lGLU
LINKFLAGS += -L vecmath/lib/ -lvecmath

CFLAGS    = -O2 -Wall -ansi -DSOLN
CC        = g++
SRCS      = main.cpp parse.cpp curve.cpp surf.cpp camera.cpp $(wildcard vecmath/src/*.cpp)
OBJS      = $(SRCS:.cpp=.o)
PROG      = a1

all: $(SRCS) $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LINKFLAGS)

.cpp.o:
	$(CC) $(CFLAGS) $< -c -o $@ $(INCFLAGS)

clean:
	rm $(OBJS) $(PROG)
