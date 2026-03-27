<div style="
  border: 1px solid #666;
  border-radius: 8px;
  padding: 16px;
  margin: 100px auto;
  background-color: #1e1e1e;
  font-family: sans-serif;
  color: #dddddd;
  display: flex;
  justify-content: space-between;
  align-items: flex-start;
  max-width: 600px;      /* <-- ajoute cette ligne */
">
  <div>
    <h1 style="margin-bottom: 0.2em;">TP1 - File par tableau circulaire</h1>
    <p style="margin: 0.2em 0;">Nom : Hoarau</p>
    <p style="margin: 0.2em 0;">Prénom : Lindsay</p>
    <p style="margin: 0.2em 0;">Classe : CPI2</p>
  </div>
  <div style="text-align: right; font-size: 0.9em; margin-top: 0.5em;">
    <p style="margin: 1em 0;">N° étudiant</p>
    <p style="margin: 0.2em 0; color: #888;">44002868</p>
    <p style="margin: 0.2em 0; color: #888;">27/03/2026</p>
  </div>
</div>


---
## Description 
L'objectif de ce projet est de concevoir une librairie nommée **MessStacker** qui pourra être en mesure de gérer une file (une pile FIFO) de message.  


Des producteurs (expéditeurs) ajoutent des messages à la file, et des consommateurs (receveurs) les analysent un par un, puis passent au message suivant.  

Chaque message est composé :  
- d’un bloc de données **data**,  
- d’une commande **cmd** (un nombre)
- et  **checksum** garantissant l'intégrité de l'information **cmd + data** pour garantir l’intégrité du message.  

Particularité : file de message matérialisée par un **tableau circulaire**

---

**Arborescence**

```text
messStacker 
  > build (contenant les librairies)
      messStacker.c
      messStacker.h
  > src (contenant le test)
      test.c
  makefile (exécution)
  README.md (description du projet)
```

