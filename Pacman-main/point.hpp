#pragma once

/**
 * @struct Point
 * @brief Reprezintă o poziție pe tabla de joc.
 * 
 * Un obiect Point conține coordonatele x și y.
 */
struct Point {
   int x;
   int y;

   bool operator==(const Point& other) const {
       return x == other.x && y == other.y;
   }
};
