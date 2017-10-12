CC					= g++
CCLINK			= g++
LIBS				=
CCOPTIONS		= -Wall -pedantic -g
LDOPTIONS		=
HDRS				= chess.h chess_printer.h general.h test_chess.h shortcut.h

TEST = test_chess
PROGRAM = chess

TESTOBJECT = chess_test_driver.o
MAINOBJECT = chess_main_driver.o
OBJS = shortcut.o chess.o test_chess.o chess_printer.o

DOXY            = /Applications/Doxygen/Doxygen.app/Contents/Resources/doxygen

all: $(PROGRAM)
	./$(PROGRAM)

$(TEST): $(OBJS) $(TESTOBJECT)
	$(CCLINK) -o $@ $(LDOPTIONS) $(OBJS) $(TESTOBJECT)

$(PROGRAM): $(OBJS) $(MAINOBJECT)
	$(CCLINK) -o $@ $(LDOPTIONS) $(OBJS) $(MAINOBJECT)

.PHONY: clean cleanall doxy test setsample setassignment definesample defineassignment assignmentfolder

clean:
	rm -f $(PROGRAM) $(TEST) $(TESTOBJECT) $(MAINOBJECT) $(OBJS)

cleanall:
	rm -f $(PROGRAM) $(OBJS) index.html
	rm -R html

doxy:
	$(DOXY)
	ln -s html/index.html index.html

test: $(TEST)
	./$(TEST)

#sets project as sample solution
setsample:
	cp chess.cpp.sample chess.cpp
	cp chess.h.sample chess.h

#sets project as assignment
setassignment:
	cp chess.cpp.assignment chess.cpp
	cp chess.h.assignment chess.h

# defines current state of project as sample solution
definesample:
	cp chess.cpp chess.cpp.sample
	cp chess.h chess.h.sample

# defines current sate of project as assignment
defineassignment:
	cp chess.cpp chess.cpp.assignment
	cp chess.h chess.h.assignment

# creates a folder which can serve as a publishable assignment
assignmentfolder:
	make setsample
	make doxy
	make setassignment
	mkdir ../assignment
	cp -R * ../assignment
	rm ../assignment/*.sample
	rm ../assignment/*.assignment
	make cleanall

%.o: %.cpp $(HDRS)
	$(CC) $(CCOPTIONS) -c $<
