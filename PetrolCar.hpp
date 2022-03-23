#include "Car.hpp"
#include "PetrolEngine.hpp"
#include "Refuelable.hpp"

class PetrolCar: public Car
                ,public Refuelable 
{
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();

    PetrolEngine* engine_;
};

