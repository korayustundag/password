CXX = clang++
CXXFLAGS = -std=c++11 -O3 -DNDEBUG -flto -ffunction-sections -fdata-sections
LDFLAGS = -Wl,--gc-sections

TARGET = Password

SRCS = Password/Main.cpp

OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) $(TARGET) $(OBJS)
