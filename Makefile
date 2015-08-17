#Targets
# All Will Compile the Project
# Run will run the executable
# Clean will remove/cleanup the executables
all:
	cd Exec && qmake ../AI
	cd Exec && make
run:
	cd Exec && ./Assignment1
clean:
	cd Exec && rm -rf *
