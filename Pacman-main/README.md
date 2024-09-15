

 PacManGame Buga Mihai

 Descriere

PacManGame este un proiect ce implementează un joc clasic de tip Pac-Man. Jucătorul controlează personajul principal, Pac-Man, într-un labirint unde scopul este de a mânca toate punctele dispuse pe tablă și de a evita fantomele care îl urmăresc. Dacă Pac-Man este prins de o fantomă, pierde o viață. Jocul se încheie când toate punctele sunt colectate sau când Pac-Man pierde toate viețile.

 Regulile Jocului

1. Jucătorul controlează Pac-Man folosind tastele `W` (sus), `A` (stânga), `S` (jos), `D` (dreapta).
2. Scopul este de a colecta toate punctele din labirint.
3. Există patru fantome care urmăresc Pac-Man. Dacă Pac-Man intră în coliziune cu o fantomă, pierde o viață.
4. Jocul se încheie atunci când Pac-Man pierde toate viețile sau când toate punctele sunt colectate.

 Tipuri de date noi declarate

 1. `struct Point`

Reprezintă o coordonată bidimensională în joc. Este utilizată pentru a indica poziția personajelor și a altor elemente de pe hartă.
- Atribute:
  - `int x`: poziția pe axa X.
  - `int y`: poziția pe axa Y.

 2. `class Pacman`

Reprezintă personajul principal, Pac-Man, care se deplasează pe tablă și colectează puncte.
- Atribute:
  - `Point _position`: poziția curentă a lui Pac-Man pe tablă.
  - `int _lives`: numărul de vieți pe care Pac-Man le are la dispoziție.
- Metode:
  - `Pacman()`: constructor implicit.
  - `Pacman(const Point& position, int lives)`: constructor care inițializează poziția și numărul de vieți.
  - `Point GetPosition() const`: returnează poziția curentă a lui Pac-Man.
  - `void Move(char direction)`: mișcă Pac-Man în direcția specificată (`W`, `A`, `S`, `D`).
  - `int GetLives() const`: returnează numărul de vieți rămase.
  - `void LoseLife()`: reduce numărul de vieți cu 1.
 3. `class Ghost`

Reprezintă una dintre cele patru fantome care urmăresc Pac-Man pe hartă.
- Atribute:
  - `Point _position`: poziția curentă a fantomei.
  - `char _color`: identifică fantoma printr-o culoare (`R` - roșu, `P` - roz, `B` - albastru, `O` - portocaliu).
- Metode:
  - `Ghost(const Point& position, char color)`: constructor care inițializează poziția și culoarea fantomei.
  - `Point GetPosition() const`: returnează poziția curentă a fantomei.
  - `void Move()`: mută fantoma într-o direcție aleatorie.
  - `char GetColor() const`: returnează culoarea fantomei.

 4. `class Board`

Reprezintă tablă de joc unde se desfășoară acțiunea. Aceasta are dimensiuni predefinite (28x31 celule), bazate pe versiunea clasică a jocului.
- Atribute:
  - `int _width`: lățimea tablei.
  - `int _height`: înălțimea tablei.
- Metode:
  - `Board(int width = 28, int height = 31)`: constructor implicit, setează lățimea și înălțimea tablei.
  - `int GetWidth() const`: returnează lățimea tablei.
  - `int GetHeight() const`: returnează înălțimea tablei.

 5. `class GameEngine`

Reprezintă mecanismul de control al jocului, care gestionează interacțiunea dintre Pac-Man, fantome și tabla de joc.
- Atribute:
  - `Pacman _pacman`: instanța lui Pac-Man.
  - `Ghost _ghosts[4]`: un array cu cele 4 fantome.
  - `Board _board`: instanța care definește tabla de joc.
- Metode:
  - `GameEngine()`: constructor implicit.
  - `void Init()`: inițializează starea inițială a jocului.
  - `void Run()`: pornește bucla de joc.
  - `bool CheckCollision()`: verifică dacă Pac-Man a intrat în coliziune cu o fantomă.
  - `void Display()`: afișează starea curentă a jocului.

 6. `class Painter`

Reprezintă un simplu "pictor" care desenează elementele jocului pe ecran.
- Metode:
  - `void DrawImage(Point topLeft, Point bottomRight, char** image)`: desenează o imagine la coordonatele specificate.
  - `void WriteText(Point position, char* text)`: afișează un text la poziția specificată.

"# pacmann" 
"# Pacman"  git init
"# Pacman" 
"# Pacman" 
