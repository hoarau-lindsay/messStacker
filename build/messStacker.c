/* ======================== Bibliothèques utilisées ========================= */
#include "messStacker.h"

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* ========================================================================== */

//Constante 

#define SIZE_STACK 30;

/* ========================  Variables globales  ========================= */

MESSAGE stackMess[SIZE_STACK]; //tableau (comme tableau circulaire)
int lastPos = -1;              // position du dernier message 
int curPos = 0;                // posiiton du message courant dans la file 
int messCount = 0;             // nombre de message présent dans la file 

/* ========================================================================== */

// Fonction 

const char * getMessStackerVersion(){
    return MESS_STAKER_VERSION;
}

bool haveMessage(){
    /* Existance d'un message dans la file
    
    Paramètre : 
        
    Retour : booléen 
        true : existance d'un message
        false : inexistance d'un message 
        
    */
    return messCount > 0;
}

uint8_t checksumMessage(uint8_t cmd, uint8_t size, char * data){
    /* Calculer un checksum de cmd et d'un tableau (data) -> (réaliser la somme de tous les entiers non signé sur 8 bits)
    
    Paramètres : 
        uint8_t cmd : entier non signé sur 8 bits 
        uint8_t size : taille du tableau data  
        char * data : tableau de données 

    Retour : 
        uint8_t checksum : somme  
    
    */
    
    uint8_t checksum = cmd;  

    for (uint8_t i = 0; i < size; i++) {
        checksum += (uint8_t)data[i]; 
    }

    return checksum;
}

