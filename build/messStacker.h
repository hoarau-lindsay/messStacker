#ifndef MESSSTACKER_H
#define MESSTACKER

#define MESS_STAKER_VERSION "v0.0.01"
#define SIZE_MAX_DATA 57

#include <stdbool.h>

/****************************************************************************** 
 * API de la librairie messStacker.h
/***************************************************************************** */



const char * getMessStackerVersion();

typedef struct message{
    //Structure de données principale
    uint8_t cmd;                  // entier non signés sur 8 bits
    uint8_t data[SIZE_MAX_DATA];  // tableau de données  de taille SIZE_MAX_DATA
    uint8_t size;                 // entier non signés sur 8 bits - nombre d'octets à considérer pour le contenu du tableau data 
    uint8_t checksum;             // checksum (8 bits)
} MESSAGE;



 /* =============================== Exercice 09 =================================== */

bool sendMessage (uint8_t cmd, uint8_t size, char * data);

bool haveMessage();
bool nextMessage();

uint8_t curMessageCmd();
uint8_t curMessageSize();
uint8_t curMessageChecksum(); 

bool curMessageData(char* buffer, int lengthMax);

uint8_t checksumMessage(uint8_t cmd, uint8_t size, char * data);



#endif 

