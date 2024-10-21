PacMan Buga Mihai

 Descriere
PacMan este un proiect ce implementează un joc clasic de tip Pac-Man.

## Regulile Jocului
1. Jucătorul controlează Pac-Man folosind tastele `W`, `A`, `S`, `D`.
2. Scopul este de a colecta toate punctele din labirint.
3. Există patru fantome care urmăresc Pac-Man.
4. Jocul se încheie când Pac-Man pierde toate viețile sau când toate punctele sunt colectate.

 Construire
Rulați `make` pentru a construi proiectul.

În baza laboratorului 3, am adăugat constructori și operatori noi în clasele existente din proiectul PacMan. 
Am implementat:

- Constructori: implicit, de copiere și cu parametri.
- Operatori: de copiere (`=`), de comparație (`==`), de citire și afișare (`<<`, `>>`).

Aceste modificări au fost aplicate în clasele `Board`, `Ghost`, `Pacman`, și `Point`, pentru a permite manipularea și afișarea obiectelor acestor clase într-un mod mai flexibil și corect.
