g++ -c lib/Activation/Activation.cpp -o lib/Activation/Activation.o
g++ -fPIC -c lib/Activation/Activation.cpp -o lib/Activation/Activation.o
g++ -o lib/Activation/Activation.so -shared lib/Activation/Activation.o
cp lib/Activation/Activation.so .


g++ -c lib/FileActivation/FileActivation.cpp -o lib/FileActivation/FileActivation.o
g++ -fPIC -c lib/FileActivation/FileActivation.cpp -o lib/FileActivation/FileActivation.o
g++ -o lib/FileActivation/FileActivation.so -shared lib/FileActivation/FileActivation.o
cp lib/FileActivation/FileActivation.so .


g++ main.cpp -L/home/marius/Documents/COURS/CPP/CLE_VERIFICATION -lFileActivation -o main
g++ main.cpp -L/home/marius/Documents/COURS/CPP/CLE_VERIFICATION -lActivation -o main