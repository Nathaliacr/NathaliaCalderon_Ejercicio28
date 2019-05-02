plot.png: ej.dat grafica.py
	python grafica.py

%.dat : a.out
	./a.out 

a.out: NathaliaCalderon_Ejercicio28.cpp
	g++ NathaliaCalderon_Ejercicio28.cpp