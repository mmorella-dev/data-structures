CXX = g++
CXX_FLAGS = -Wall
OUTEXT = .out

all:
	$(CXX) $(CXX_FLAGS) -o about_me$(OUTEXT) about_me.cpp
	$(CXX) $(CXX_FLAGS) -D USE_COLOR -o about_me_color$(OUTEXT) about_me.cpp
	$(CXX) $(CXX_FLAGS) -o pyramid$(OUTEXT) pyramid.cpp
clean:
	rm -r $(OUTFILE)