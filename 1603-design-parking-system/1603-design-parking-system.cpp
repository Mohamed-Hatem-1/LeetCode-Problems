class ParkingSystem {
public:
    int x, y, z;
    ParkingSystem(int big, int medium, int small) {
        x = big; y = medium; z = small;
    }

    bool addCar(int carType) {
        if (carType == 1) {
            if (x) {
                x--;
                return true;
            }
            else return false;
        } else if (carType == 2) {
            if (y) {
                y--;
                return true;
            }
            else return false;
        } else {
            if (z) {
                z--;
                return true;
            }
            else return false;
        }
    }
};