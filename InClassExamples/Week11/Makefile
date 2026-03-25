.PHONY: all clean cleanwin

all: example.exe

example.exe: main.o RestaurantItem.o Utensil.o Food.o
	g++ $^  -o $@

main.o: main.cc RestaurantItem.h Utensil.h Food.h
	g++ -c $< 

RestaurantItem.o:  RestaurantItem.cc RestaurantItem.h
	g++ -c $< 

Utensil.o: Utensil.cc Utensil.h  RestaurantItem.h
	g++ -c $< 

Food.o: Food.cc Food.h  RestaurantItem.h
	g++ -c $< 

clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del *.exe