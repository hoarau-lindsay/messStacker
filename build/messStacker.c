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
