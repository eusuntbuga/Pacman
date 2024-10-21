#pragma once

struct Point {
   int x;
   int y;

   // Operator de comparație
   bool operator==(const Point& other) const {
       return x == other.x && y == other.y;
   }

   // Operator de afișare
   friend std::ostream& operator<<(std::ostream& os, const Point& point) {
       os << "(" << point.x << ", " << point.y << ")";
       return os;
   }
};
