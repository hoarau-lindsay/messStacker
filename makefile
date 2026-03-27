#définition des constantes 
#LIB_DIR = ../mesLibC

#Exo 14 
SRC = src
BUILD = build

defaut : $(BUILD)/messStacker.o

#Exo 10 
help : 
	@echo "\n\t:=:=: Cible disponible :=:=: \n"
	@echo "- messStacker"
	@echo "- lib_util : compile la librairie messStacker"
	@echo "- clean : nettoyage des .o"
	@echo "- help : affichage de l'aide"
	@echo "\n"

#Alias pour simplifier l'accès à la cible messStacker
lib_util : src/messStacker.o

# compilation de la librairie 
$(BUILD)/messStacker.o : $(BUILD)/messStacker.c
	@echo "### compilation.o de messStacker"
	gcc -c -Wall $(BUILD)/messStacker.c -o $(BUILD)messStacker.o

# Compilation intermédiaire du test
$(BUILD)/test.o : $(SRC)/test.c
	@echo "### compilation .o de test"
	gcc -I $(BUILD) -c -Wall $(SRC)/test.c -o $(BUILD)/test.o


# Génération de l'exécutable test
$(BUILD)/test : $(BUILD)/test.o $(BUILD)/messStacker.o
	@echo "=== compilation finale test ==="
	gcc -Wall $(BUILD)/test.o $(BUILD)/messStacker.o -o $(BUILD)/test
	
# Nettoyage du projet 
clean : 
	@echo "... suppression de tous les .o ..."
	rm -r *.o

# Exo 15 : 
run :$(BUILD)/test
	@$(BUILD)/test
