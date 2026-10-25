# Stato corso C

## Prossima azione
Implementare `list_remove_at()` in `linked_list.c`.

## Completato
- [x] Puntatori base
- [x] malloc/free

## Errori importanti da ricordare
- Dimenticavo `free()`
- Confondevo l'ordine di * sulle variabili e sui tipi: int *p = (int*) ...etc
- Dimenticavo `if(p==NULL)` dopo la malloc, perchè la malloc può restituire NULL

## Appunti
### PUNTATORI
- D: Differenza tra int x, int *p, &x
- R: Variabile di tipo int. Puntatore di tipo int a 8 byte, &x è l'indirizzo che punta alla memoria

- D: Perchè la malloc può restituire NULL?
- R: In caso di qualunque errore la malloc torn NULL

- D: Perchè dopo la free non devi più leggere *p?
- R: Non ha senso leggerlo in quanto è definito undefined behaviour, in poche parole non sappiamo cosa ci viene restituito. 

