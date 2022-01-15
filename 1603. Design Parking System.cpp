1603. Design Parking System

class ParkingSystem {
public:
    int big_car = 0;
        int medium_car = 0;
        int small_car = 0;
    ParkingSystem(int big, int medium, int small) {
        big_car = big;
        medium_car = medium;
        small_car = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1)
        {
            if(big_car == 0)
                return false;
            else
                big_car--;
        }
        else if(carType == 2)
        {
            if(medium_car == 0)
                return false;
            else
                medium_car--;
        }
        else if(carType == 3)
        {
            if(small_car == 0)
            return false;
        else
            small_car--;
        }
        return true;
    }
};