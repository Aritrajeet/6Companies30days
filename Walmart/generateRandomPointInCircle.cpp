class Solution{ 
  //Any point in circle is of the form (x + r*cosD , y + r*sinD) where D lies between 0 to 2pi (principal range)
double radius,  x_center,  y_center;
    
    Solution(double radius, double x_center, double y_center) {
        this->radius = radius;
        this->x_center = x_center;
        this->y_center = y_center;
    }
    
    vector<double> randPoint() {
        vector<double> randomPoint(2);
        double deg = 2 * M_PI * sqrt(random());
        randomPoint[0] = x_center + radius * cos(deg);
        randomPoint[1] = y_center + radius * sin(deg);
        return randomPoint;
    }
};
