CFLAGS=-std=c++17
SRCDIR = src
BINDIR = bin
OBJDIR = obj
INCLUDEDIR = include

all: api app
	$(CXX) $(CFLAGS) $(OBJDIR)/api.o $(OBJDIR)/app.o -o $(BINDIR)/app
api:
	$(CXX) $(CFLAGS) -c $(SRCDIR)/api.cpp -o $(OBJDIR)/api.o
app:
	$(CXX) $(CFLAGS) -c $(SRCDIR)/app.cpp -o $(OBJDIR)/app.o
run:
	$(BINDIR)/./app
clean:
	 rm -f $(BINDIR)/app -f $(OBJDIR)/*.o

