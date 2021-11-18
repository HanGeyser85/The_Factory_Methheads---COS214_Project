run: 
	g++ *.cpp -I ./ -o Main
	./Main
clean:
	rm *.o Main